#include<stdio.h>

union student{
	int rollno,mark1,mark2,mark3;
	char name[50];
	float avg;
};

int main(){
	int n;
	printf("number of students\n");
	scanf("%d",&n);
	union student student[n];
	for (int i=0;i<n;i++){
		printf("enter name, rollno, mark1, mark2, mark3\n");
		scanf("%s %d %d %d %d",&student[i].name,&student[i].rollno,&student[i].mark1,&student[i].mark2,&student[i].mark3);
		student[i].avg=(student[i].mark1+student[i].mark2+student[i].mark3)/3;
}
	for (int i=0;i<n;i++){
	printf("enter name: %s\nrollno: %d\nmark1: %d\nmark2: %d\nmark3: %d\nAverage: %.2f\n",student[i].name,student[i].rollno,student[i].mark1,student[i].mark2,student[i].mark3,student[i].avg);
}
	return 0;
}
