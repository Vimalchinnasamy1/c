#include<stdio.h>
int main(){
	int a;
	scanf("%d",&a);
	int *ptr1=&a;
	int **ptr2=&ptr1;
	int ***ptr3=&ptr2;
	printf("%d\n",ptr3);
	return 0;
}
