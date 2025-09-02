#include "../my_time/my_time.h"
#include <stdio.h>
#include <signal.h>

#define DEBUG

void my_sleep(my_time_t seconds){

    struct timespec req,rem;
    
    signal(SIGINT,SIG_IGN);
    
    req.tv_sec = (time_t)seconds.sec;
    req.tv_nsec = (long)(seconds.sec - (int)(seconds.sec))*(1e9);

    #ifdef DEBUG
        printf("Sleeping for %lf seconds\n",seconds.sec);
    #endif

    while (nanosleep(&req,&rem) == -1 && errno == EINTR)
    {
        req = rem;
        
        #ifdef DEBUG
            printf("Sleep interrupted, resuming...\n");
        #endif
    }
    
    signal(SIGINT,SIG_DFL);

}