# include <stdio.h>

int main(){
    int cArr[3] = {10,20,30};
    // printf("Elements of cArr: ");
    printf("%d\n",cArr);
    printf("%d\n",&cArr);
    printf("%d %d %d \n",cArr);
    printf("%d\n",cArr+1);
    printf("%d\n",&cArr+1);
    printf("%d\n",(&cArr)+1);
    printf("%d\n",sizeof(cArr[1]));
    printf("%d\n",sizeof(cArr[2]));
    return 0;
}