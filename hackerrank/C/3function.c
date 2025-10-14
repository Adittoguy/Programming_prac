# include <stdio.h>
# include <limits.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

// this is the function where I am checking that which is greater among 4 of these numbers
int max(int x, int y){
    if (x>y) {
        return x;
    }else{
        return y;
    }
    
}

int main(){
    int a, b, c, d;
    int great;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    great = max(a, b);
    great = max(great, c);
    great = max(great, d);
    //int ans = max_of_four(a, b, c, d);
    printf("%d", great);
    
    return 0;
}