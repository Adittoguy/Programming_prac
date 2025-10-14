#include <stdio.h>

struct demo
{
    int no;
    float f;
    int k;
};

int main()
{   
    struct demo arr[3];
    printf("Size of struct demo : %d\n",sizeof(struct demo));

    return 0;
}