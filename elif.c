// elif with taking input

# include <stdio.h>
int main(){
    int myage;
    int votingage=18;

    printf("Enter your age: ");
    scanf("%d",&myage);

    if (myage>=votingage){
        printf("eligible to vote");
    } else {
        printf("not eligible");
    }
}