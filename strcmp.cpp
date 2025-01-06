#include<stdio.h>
#include<string.h>
int main(){
	char a[100],b[100];
	scanf("%s\n%s",&a,&b);
	printf("%d",strcmp(a, b));
	return 0;
}
