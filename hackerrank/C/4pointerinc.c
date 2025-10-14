#include <stdio.h>
#include <stdlib.h>            // required for abs
void update(int *a,int *b) {
    // Complete this function
    int o_a=*a;
    int o_b=*b;
    
    *a = o_a + o_b;            // sum of a and b
    *b = abs(o_a-o_b);         // absolute diff of a and b

}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
   
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}