#include <stdio.h>

// int main()
// {
//     int arr[3] = {21,43,54};
    
//     int x = 0;
//     x = arr[2] + 21 + arr[0];
//     x++;
    
//     printf("%d",x);
//     return 0;
// }

// int main(){
//     float arr[4] = {98.3, 4.3,51.6,7.6};
//     int i  = 0;

//     printf("%f\n", arr[i]);
//     i++;

//     printf("%f\n", arr[i]);
//     i++;

//     printf("%f\n", arr[i]);

//     return 0;
// }


int main()
{
    int arr[6] = {10,20,30};
    int *p = arr;
    int no = 2;

    printf("%d \n",arr[0]);
    printf("%d \n",arr[no]);
    printf("%d \n",arr[3-1]);
    printf("%d \n",arr);
    printf("%d \n",arr+1);
    printf("%d \n",(&arr)+1);
    printf("%d \n",arr+3);
    printf("%d \n",&(arr[3]));
    printf("%d \n",arr[4]);
    printf("%d \n",&(arr[5]));
    printf("%d \n",2[arr]);
    printf("%d \n", sizeof(*p));
    printf("%d \n", *p);
    printf("%d \n",     p);


    return 0;
}