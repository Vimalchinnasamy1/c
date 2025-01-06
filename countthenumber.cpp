#include<stdio.h>
int main(){
	int a,c;
	scanf("%d",&a);
	do{
		a/=10;
		++c;
	}while(a!=0);
	printf("%d",c);
	return 0;
}
