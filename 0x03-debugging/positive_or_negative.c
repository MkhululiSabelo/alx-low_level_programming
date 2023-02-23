#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*positive_negative - Print a number
*@i: integer
*Return: 0
*/
int positive_negative(int i)
{
if (i > 0)
printf("%d is positive\n", i);
else if (i < 0)
printf("%d is negative\n", i);
else
printf("%d is zero\n", i);
}
