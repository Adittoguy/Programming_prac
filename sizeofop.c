# include <stdio.h>
 int main(){
    int a;
    printf("%d \n", sizeof(a));// it is always better to use %zu intead of %d for printing sizeof operator.
    printf("%zu", sizeof(a));
    return 0;
 }