
#include<stdio.h>
void main() {
FILE *fp;
char str[100];
fp = fopen("First.txt", "r");
if(fp == NULL) {
printf("File does not exist or cannot be opened\n");
} else {
printf("File exists or has been opened\n");

