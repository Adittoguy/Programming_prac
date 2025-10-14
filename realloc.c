#include <stdio.h>
#include<stdlib.h>

int main()
{
    int *p =NULL;

    p=(int *) realloc(NULL,40);

    if(p==NULL)
    {
        printf("unable to allocate memory\n");
    }
    else
    {
        printf("Memory allocated");
    }

    free(p);

    return 0;
}