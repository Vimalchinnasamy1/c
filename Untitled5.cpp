#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    printf("%s",(a%2==0) ? "even" : "odd");
    return 0;
}
