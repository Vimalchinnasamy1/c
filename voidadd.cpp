#include <stdio.h>
void add(int a,int b){
    printf("%d\n",a+b);
}

int main(){
    int num1,num2;
    scanf("%d %d",&num1,&num2);
    add(num1,num2);
    return 0;
}

