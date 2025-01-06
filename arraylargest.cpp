#include<stdio.h>
int main(){
	int a[10],n,l,b;
	scanf("%d",&n);
	for (int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	l=b=a[0];
	for (int i=0;i<n;i++) {
		if(l<a[i]){
			l=a[i];
		}
	}
		for (int i=0;i<n;i++) {
		if(b<a[i] && l!=a[i]){
			b=a[i];
		}
	}
	printf("%d\n%d",l,b);
}
