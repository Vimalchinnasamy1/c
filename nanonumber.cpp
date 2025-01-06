#include<stdio.h>
int main(){
	int a,c,b=0;
	scanf("%d",&a);
	c=a;
	a=a*a;
	b=a%10;
	a/=10;
	b+=a%10;
	a/=10;
	b+=a%10;
	if(c==b){
		printf("yes");
		
	}
	else{
		printf("no");
	}
	return 0;
}
