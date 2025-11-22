// Q131 : Create an enumeration for days (SUNDAY to SATURDAY) and print each day with its integer value.
/*
Sample Test Cases:
Input 1:
No input
Output 1:
SUNDAY = 0
MONDAY = 1
TUESDAY = 2
WEDNESDAY = 3
THURSDAY = 4
FRIDAY = 5
SATURDAY = 6
*/

#include <stdio.h>
    enum days{
        Sun,
        mon,
        tues,
        wed,
        thurs,
        fri,
        sat,
    };
int main(){
    printf("SUNDAY = %d\n", Sun);
    printf("MONDAY = %d\n", mon);
    printf("TUESDAY = %d\n", tues);
    printf("WEDNESDAY = %d\n", wed);
    printf("THURSDAY = %d\n", thurs);
    printf("FRIDAY = %d\n", fri);
    printf("SATURDAY = %d", sat);
    return 0;
}