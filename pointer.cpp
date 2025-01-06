#include<stdio.h>
int main(){
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	printf("%d\n%d\n%d\n",&a,&b,&c);
	int *ptr1=&a;
	int **ptr2=&ptr1;
	printf("%d\n",ptr1);
	printf("%d\n",ptr2);
	int d=a+b;
	printf("%d",&d);
	int e[]={1,2,3,4,5};
	printf("\n%d",&e[2]);
	
    int value = 42;
    int *ptr = &value;
    printf("\nValue: %p\n", *ptr);



	return 0;
}
