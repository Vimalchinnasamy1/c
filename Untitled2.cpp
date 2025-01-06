#include<stdio.h>
int main(){
    char a[100];
    int b,d;
    float c;
    scanf("%s %d %f %d",a,&b,&c,&d);
    if(d==0 && c>=7.0){
        printf("%s\n%d\n",a,b);
        printf("Eligle to attend placement");
    }
    if(d<=2 && c>=7.5){
        printf("%s\n%d\n",a,b);
        printf("Eligle to attend placement");
    }
    else{
        printf("%s\n%d\n",a,b);
        printf("Not Eligle to attend placement");
    }
}
