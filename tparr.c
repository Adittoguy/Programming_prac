#include <stdio.h>

int main()
{
    int arr[5];
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;
    arr[4] = 50;

     int * p = arr;

    printf("%d\n", arr);
    printf("%d\n", arr[3]);
    printf("%d\n", (arr)+1);
    printf("%lu\n", &p);
    printf("%d\n", sizeof(p));
    
    p++;
    printf("%d\n", p);
    printf("%d\n", (arr)+1);

    arr[2]++;
    printf("%d\n", arr[2]);

    (*p) ++;
    printf("%d\n", arr[1]);

    arr[3] = 60;
    printf("%d\n", arr[3]);    

    return 0 ;
}