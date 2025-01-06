#include<stdio.h>
#include<string.h>
#define max 100

struct student{
	char name[100];
	int id;
	char dept[100];
	char gen[10];
	char mail[100];
	long long int phone;
	float cgpa;
};
struct student student[max];
int io=1;
void addstudent(){
	if(io<=max){
	printf("Enter Student name: ");
	scanf("%s",student[io].name);
	printf("Enter Student ID: ");
	scanf("%d",&student[io].id);
	printf("Enter Student Department: ");
	scanf("%s",student[io].dept);
	printf("Enter StudentGender: ");
	scanf("%s",student[io].gen);
	printf("Enter Student Mail id: ");
	scanf("%s",student[io].mail);
	printf("Enter Student Phone number: ");
	scanf("%lld",&student[io].phone);
	printf("Enter Student CGPA: ");
	scanf("%f",&student[io].cgpa);
	io++;}
	else{
		printf("Student file is completed");
	}
}

void search(){
	int n;
	printf("Type the Student Id:");
	scanf("%d",&n);
	for(int i=1;i<=io;i++){
		if(student[i].id==n){
			printf("Student name : %s\nStudent ID: %d\nStudent Department: %s\nStudent Gender: %s\nStudent Mail ID: %s\nStudent Phone number: %lld\nStudent CGPA: %0.2f",student[i].name,student[i].id,student[i].dept,student[i].gen,student[i].mail,student[i].phone,student[i].cgpa);
		}
	}
}
	
void display(){
	for(int i=1;i<io;i++){
			printf("Student name : %s\nStudent ID: %d\nStudent Department: %s\nStudent Gender: %s\nStudent Mail ID: %s\nStudent Phone number: %lld\nStudent CGPA: %0.2f",student[i].name,student[i].id,student[i].dept,student[i].gen,student[i].mail,student[i].phone,student[i].cgpa);
	}
}

int main(){
	int c;
	do{
		printf("\n1. Add Student\n2. Display Students\n3. Search Student\n4. Exit\nEnter your choice: ");
		scanf("%d",&c);
		switch(c){
			case 1:
				addstudent();
				break;
			case 2:
				display();
				break;
			case 3:
				search();
				break;
			case 4:
				printf("Exiting......\n");
				break;
			default:
				printf("Invalid choice");
				break;
		}
	}
	while (c!=4);
	return 0;
	}
