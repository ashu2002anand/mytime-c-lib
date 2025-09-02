#include "../my_time/my_time.h"
#include <stdio.h>

int main(){
    my_time_t time;
    
    printf("Enter the seconds in decimal precision for haltimg the program\n");
    scanf("%lf",&time.sec);
    
    my_sleep(time);
    
    return 0;
}