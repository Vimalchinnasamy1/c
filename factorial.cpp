#include<stdio.h>
void fact(int x){
	int y=1;
	for(int i=1;i<=x;i++){
		y=y*i;
	}
	printf("%d",y);
}
int main(){
	int a;
	scanf("%d",&a);
	fact(a);
}
