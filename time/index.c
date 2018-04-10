#include <stdio.h>
#include <time.h>

extern void time_reported(int,int,int);

void report_time() {
  int t;
  struct tm * timeinfo;
  time_t rawtime;

  time(&rawtime);
  timeinfo = localtime(&rawtime);
  
  time_reported(timeinfo->tm_hour, timeinfo->tm_min, timeinfo->tm_sec);
}