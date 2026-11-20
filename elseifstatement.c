#include<stdio.h>
int main(){
    int number;
    scanf("%d", &number);
    printf("The number is: %d\n", number);
    if(number > 0){
        printf("The number is positive");
    }
    else if(number < 0){
        printf("The number is negative");
    }
    else{
        printf("The number is zero");
    }
    return 0;
}
