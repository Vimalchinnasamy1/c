#include<stdio.h>
int main(){
	int a[10],n,l,b,h[20];
	scanf("%d",&n);
	printf("\n");
	for (int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("\n even number\t");
	for (int i=0;i<n;i++) {
		if(a[i]%2==0){
			printf("%d\t",a[i]);
		}		
}
	printf("\n odd number\t");
	for (int i=0;i<n;i++) {
		if(a[i]%2!=0){
			printf("%d\t",a[i]);			
		}}
            printf("\nDuplicate ");
    for (int i=0;i<n;i++) {
        if (h[a[i]] == 1) {
            printf("%d\t", a[i]);
        } else {
            h[a[i]] = 1;
        }
    }
		
		}
	
