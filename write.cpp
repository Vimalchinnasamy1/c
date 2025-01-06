#include<stdio.h>
void main(){
FILE *fp;
fp = fopen("First.txt", "w");
if(fp= NULL) {
printf("File does not exist or cannot be created\n");
} else {
printf("File exists or has been created\n");
fprintf(fp, "This is what exists");
fclose(fp);
}
}

