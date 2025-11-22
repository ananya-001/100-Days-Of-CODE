// Q132 : Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.
/*
Sample Test Cases:
Input 1:
GREEN
Output 1:
Go
*/

#include <stdio.h>
#include <string.h>
enum lights{
    RED,
    YELLOW,
    GREEN,
};
int main(){
    char traffic[50];
    enum lights signal;
    printf("Enter colour of traffic lights : (RED, YELLOW, GREEN) : ");
    scanf("%s", &traffic);
    if (strcmp(traffic, "RED") == 0)
    {
        signal = RED;
    }
    else if (strcmp(traffic, "YELLOW") == 0)
    {
        signal = YELLOW;
    }
    else
    {
        signal = GREEN;
    }

    switch (signal)
    {
    case RED:
        printf("Stop");
        break;
    case YELLOW:
        printf("WAIT");
        break;
    case GREEN:
        printf("Go");
        break;
    default:
        break;
    }
    return 0;  
}