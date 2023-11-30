#include<string.h>
#include<stdio.h>

typedef struct student {
	char* name;
	int age;
}Student;

int main() {
	Student stu;
	char* stuname1 = "ÄãºÃ";
	long x[2];
	x[0] = "ÄãºÃ°¡°¡°¡°¡";
	stu.name = x[0];
	printf("%s", stu.name);
	return 0;
}