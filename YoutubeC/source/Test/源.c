#include<string.h>

typedef struct student {
	char* name;
	int age;
}Student;

int main() {
	Student stu;
	char* stuname1 = "���";
	long x[2];
	x[0] = "��ð�������";
	stu.name = x[0];
	return 0;
}