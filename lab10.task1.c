#include<stdio.h>
struct Student
{
	char name[15];
	int roll_no;
	int att;
	int test1, test2, test3;
};
 int main()
 {
 	struct Student s1 ={"Kanza Zafar", 423, 95, 30, 35, 34};
 	struct Student s2 ={"Asma Nadeem", 288, 90, 28, 39, 30};
 	
 	printf("**STUDENTS'RECORD**\n\n");
 	printf("Student 1:\n Name: %s \n Roll NO.: %d \n Attendance: %d%% \n Total sessional marks: %d\n", s1.name , s1.roll_no , s1.att, (s1.test1 + s1.test2 + s1.test3));
	printf("\nStudent 2:\n Name: %s \n Roll NO.: %d \n Attendance: %d%% \n Total sessional marks: %d\n", s2.name , s2.roll_no , s2.att , (s2.test1 + s2.test2+ s2.test3));                
 }
