# include<stdio.h>

int main(){
	int a,b;
	a=50;
	b=5;
	printf("%d\n%d\n%d\n%d\n%d",(a+b),(a-b),(a*b),(a/b),(a%b));
	printf("%u",a);
	printf("%u",a&b);
	return 0;
}
