#include<stdio.h>
#include<stdlib.h>

int main()
{
    float iSize =0;

    float *p =NULL;

    printf("Enter number of elements : \n");
    scanf("%f", &iSize);

    p=(float *) malloc (iSize * sizeof(float));

    if(p==NULL)
    {
        printf("unable to allocate memory\n");
    }
    else
    {
        printf("Memory allocated\n");
    }

    free(p);
    printf("Dangling pointer : %lu\n", &(p));
    p = NULL;
    return 0;
}