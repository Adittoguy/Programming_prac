#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a,b;
    float c,d;
    scanf("%d %d",&a , &b);
    scanf("%f %f",&c , &d);
    int int_sum = a+b;
    int int_diff = a-b;
    float flo_sum = c+d;
    float flo_diff = c-d;
    printf("%d %d \n",int_sum, int_diff);
    printf("%0.1f %0.1f \n", flo_sum, flo_diff);
        
    return 0;
}
