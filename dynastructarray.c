#include<stdio.h>
#include<stdlib.h>

struct hello
{
    float f;
    int i;
};

int main()
{
    int iSize = 0;
    iSize = 5;

    struct hello *p;

    p = (struct hello*) malloc (iSize*sizeof(struct hello));

    // p[1].f=15.64f;
    // p[2].f=14.54f;
    // p[4].i=15;
    // p[0].f=48.56;
    // p[1].i=12;
    // p[0].i=8;

    // printf("Value of i is %d",p[0].i);

    if(p==NULL)
    {
        printf("unable to allocate memory\n");
    }
    else
    {
        printf("Memory allocated\n");
    }

    free(p);
    p = NULL;
    return 0;
}