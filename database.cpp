#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

// Structures
struct StudentInfo {
    char ID[10];
    char Name[20];
    char Email[30];
    char Phone[20];
    int NumberOfCourse;
};

struct CourseInfo {
    char StudentID[10];
    char Code[10];
    char Name[20];
};

// Global Variables
struct StudentInfo Students[100];
struct CourseInfo Courses[500];
int TotalStudents = 0;
int TotalCourse = 0;
bool IsRunning = true;

// Function Declarations
void Menu();
void AddNewStudent();
void ShowAllStudents();
int SearchStudent(char StudentID[10]);
void EditStudent(int StudentFoundIndex);
void DeleteStudent(int StudentIndex);
void DeleteAllStudents();
void DeleteCourseByIndex(int CourseIndex);
void DeleteStudentByIndex(int StudentIndex);
int IsAlreadyExists(char GivenLine[30], char InfoType, char StudentID[300]);
void GoBackOrExit();
void ExitProject();

// Main Function
int main() {
    while (IsRunning) {
        Menu();
        int Option;
        printf("Enter Your Choice: ");
        scanf("%d", &Option);
        switch (Option) {
            case 0:
                IsRunning = false;
                ExitProject();
                break;
            case 1:
                printf("\n** Add A New Student **\n");
                AddNewStudent();
                GoBackOrExit();
                break;
            case 2:
                printf("\n** All Students **\n");
                ShowAllStudents();
                GoBackOrExit();
                break;
            case 3: {
                printf("\n** Search Student **\n");
                char StudentID[10];
                printf("Enter Student ID: ");
                scanf("%s", StudentID);
                int IsFound = SearchStudent(StudentID);
                if (IsFound < 0) {
                    printf("No Student Found.\n");
                }
                GoBackOrExit();
                break;
            }
            case 4: {
                printf("\n** Edit a Student **\n");
                char StudentID[10];
                printf("Enter Student ID: ");
                scanf("%s", StudentID);
                int StudentFoundIndex = SearchStudent(StudentID);
                if (StudentFoundIndex >= 0) {
                    EditStudent(StudentFoundIndex);
                } else {
                    printf("No Student Found.\n");
                }
                GoBackOrExit();
                break;
            }
            case 5: {
                printf("\n** Delete a Student **\n");
                char StudentID[10];
                printf("Enter Student ID: ");
                scanf("%s", StudentID);
                int StudentFoundIndex = SearchStudent(StudentID);
                if (StudentFoundIndex >= 0) {
                    char Sure;
                    printf("Are you sure you want to delete this student? (Y/N): ");
                    scanf(" %c", &Sure);
                    if (Sure == 'Y' || Sure == 'y') {
                        DeleteStudent(StudentFoundIndex);
                    } else {
                        printf("Deletion Cancelled.\n");
                    }
                } else {
                    printf("No Student Found.\n");
                }
                GoBackOrExit();
                break;
            }
            case 6:
                printf("\n** Delete All Students **\n");
                char Sure;
                printf("Are you sure you want to delete all students? (Y/N): ");
                scanf(" %c", &Sure);
                if (Sure == 'Y' || Sure == 'y') {
                    DeleteAllStudents();
                } else {
                    printf("Deletion Cancelled.\n");
                }
                GoBackOrExit();
                break;
            case 7:
                system("clear");  // Use "cls" for Windows and "clear" for Linux/Mac
                break;
            default:
                printf("Invalid Option. Try Again.\n");
                break;
        }
    }
    return 0;
}

// Function Definitions
void Menu() {
    printf("\nStudent Management System\n");
    printf("=========================\n");
    printf("[1] Add A New Student\n");
    printf("[2] Show All Students\n");
    printf("[3] Search A Student\n");
    printf("[4] Edit A Student\n");
    printf("[5] Delete A Student\n");
    printf("[6] Delete All Students\n");
    printf("[7] Clear Screen\n");
    printf("[0] Exit\n");
    printf("=========================\n");
}

void AddNewStudent() {
    struct StudentInfo newStudent;
    printf("Enter ID: ");
    scanf("%s", newStudent.ID);

    if (IsAlreadyExists(newStudent.ID, 'i', newStudent.ID) > 0) {
        printf("Error: Student ID already exists.\n");
        return;
    }

    printf("Enter Name: ");
    scanf(" %[^\n]", newStudent.Name);
    printf("Enter Email: ");
    scanf("%s", newStudent.Email);
    printf("Enter Phone: ");
    scanf("%s", newStudent.Phone);
    printf("Enter Number of Courses: ");
    scanf("%d", &newStudent.NumberOfCourse);

    if (newStudent.NumberOfCourse > 4 || newStudent.NumberOfCourse <= 0) {
        printf("Error: Number of courses must be between 1 and 4.\n");
        return;
    }

    Students[TotalStudents] = newStudent;
    TotalStudents++;

    for (int i = 0; i < newStudent.NumberOfCourse; i++) {
        struct CourseInfo newCourse;
        strcpy(newCourse.StudentID, newStudent.ID);
        printf("Enter Course %d Code: ", i + 1);
        scanf("%s", newCourse.Code);
        printf("Enter Course %d Name: ", i + 1);
        scanf(" %[^\n]", newCourse.Name);
        Courses[TotalCourse] = newCourse;
        TotalCourse++;
    }

    printf("Student Added Successfully.\n");
}

void ShowAllStudents() {
    printf("| ID      | Name                | Email                      | Phone       | Courses |\n");
    printf("|---------|---------------------|----------------------------|-------------|---------|\n");
    for (int i = 0; i < TotalStudents; i++) {
        printf("| %-8s | %-19s | %-26s | %-11s | %8d |\n",
               Students[i].ID, Students[i].Name, Students[i].Email, Students[i].Phone, Students[i].NumberOfCourse);
    }
    printf("\n");
}

int SearchStudent(char StudentID[10]) {
    for (int i = 0; i < TotalStudents; i++) {
        if (strcmp(StudentID, Students[i].ID) == 0) {
            printf("Student Found: %s (%s)\n", Students[i].Name, Students[i].ID);
            return i;
        }
    }
    return -1;
}

void EditStudent(int StudentFoundIndex) {
    printf("Editing Student: %s\n", Students[StudentFoundIndex].ID);
    // Add logic to edit the student
}

void DeleteStudent(int StudentIndex) {
    for (int i = StudentIndex; i < TotalStudents - 1; i++) {
        Students[i] = Students[i + 1];
    }
    TotalStudents--;
    printf("Student Deleted Successfully.\n");
}

void DeleteAllStudents() {
    TotalStudents = 0;
    TotalCourse = 0;
    printf("All Students Deleted Successfully.\n");
}

int IsAlreadyExists(char GivenLine[30], char InfoType, char StudentID[300]) {
    for (int i = 0; i < TotalStudents; i++) {
        if ((InfoType == 'i' && strcmp(GivenLine, Students[i].ID) == 0) ||
            (InfoType == 'e' && strcmp(GivenLine, Students[i].Email) == 0 && strcmp(StudentID, Students[i].ID) != 0) ||
            (InfoType == 'p' && strcmp(GivenLine, Students[i].Phone) == 0 && strcmp(StudentID, Students[i].ID) != 0)) {
            return 1;
        }
    }
    return 0;
}

void GoBackOrExit() {
    printf("Press Enter to return to the menu...");
    getchar();
    getchar();  // For catching Enter key
}

void ExitProject() {
    printf("Exiting Program...\n");
    exit(0);
}
