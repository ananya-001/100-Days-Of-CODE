// Q10 : Write a program to input time in seconds and convert it to hours:minutes:seconds format.

#include <stdio.h>
int main()
{
    int time, sec, hr, min, remain;
    printf("Enter the time in seconds : ");
    scanf("%d", &time);
    hr= time/3600;
    remain= time%3600;
    min=remain/60;
    sec= remain/60;
    printf("Time in (hours: min : sec) format is : %d : %d : %d", hr, min, sec);

}