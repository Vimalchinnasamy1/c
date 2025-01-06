#include <stdio.h>

int main(){
	int a;
	scanf("%d",&a);
	if(a>1){
		for(int i=2;i<=a;i++){
			if(a%i==0){
				printf("%d is prime",i);
			}
		}
	}
	else
		printf("it is not prime");
}
