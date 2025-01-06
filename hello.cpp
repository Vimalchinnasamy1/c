#include<stdio.h>
#include<string.h>
int main(){
	char a[100],b[100];
	scanf("%s\n%s",&a,&b);
	printf("%s\n%s",a,b);
	printf("\n%s",strcat(a, b));
	printf("\n%s",strcmp(a, b));
	char c[]="hello";
	int r;
	r=strlen(c);
	printf("\n%d",r);
	printf("\n%s",strcpy(a, b));
	return 0;
}
