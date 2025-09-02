#ifndef _MY_TIME_H
#define _MY_TIME_H

#include <time.h>
#include <unistd.h>
#include <stdlib.h>
#include <errno.h>

typedef struct tag_my_time
{
    double sec;       // seconds
}my_time_t;

void my_sleep(my_time_t seconds);

#endif
