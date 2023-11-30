#include<string.h>
#include<stdio.h>

typedef struct student {
	char* name;
	int age;
}Student;

int main() {
	Student stu;
	const char* stuname1 = "ÄãºÃ";
	long x[2];
	x[0] = "ÄãºÃ°¡°¡°¡°¡";
	stu.name = (const char*)x[0];
	printf("%s", stu.name);
	return 0;
}