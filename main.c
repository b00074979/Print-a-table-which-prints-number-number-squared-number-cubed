/*LAB 1 Q7 */

/* ------------------------------------------------------------

Programmer: Aleena Chaudhry

ID: B00074979

Date: 19th September 2014

Purpose: To print a table which prints the number, the number squared and the number cubed.

------------------------------------------------------------*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
     int i;
    printf("Number\tSquare\tCube\n");
    for(i=0; i<=10; i++)
    {
        printf("%d\t%d\t%d\n",i,i*i,i*i*i);
    }
    return 0;
}
