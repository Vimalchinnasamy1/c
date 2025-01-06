#include<stdio.h>
#include<string.h>
int main(){
	char a[100];
	scanf("%s",&a);
	char b[100]="hello";
	int r=strlen(a);
	for(int i=0;i<r;i++){
		if(a[i]!=0){
			a[i]=b[i];
		}
	}
	printf("%s",a);
	return 0;
}
