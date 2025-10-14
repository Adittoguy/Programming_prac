# include <stdio.h>
int a = 5;
char ch = 'A';
float f = 3.14;
double d = 2.71828;

int main() {
    
    printf("Integer: %d\n", a);
    printf("Integer Address: %d\n", &a);
    printf("Integer Size: %d\n", sizeof(a));
    printf("Character: %c\n", ch);
    printf("Character Address: %d\n", &ch);
    printf("Character Size: %d\n", sizeof(ch));
    printf("Float: %f\n", f);
    printf("Float Address: %d\n", &f);
    printf("Float Size: %d\n", sizeof(f));
    printf("Double: %lf\n", d);
    printf("Double Address: %d\n", &d);
    printf("Double Size: %d\n", sizeof(d));
    return 0;
} 