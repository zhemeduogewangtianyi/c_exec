#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include "Student.c"

#define MAX 1000.05
#define ADD(x,y) (x + y)

int main() {

	int arr[8];
	int offset = 0;
	int count = 0;
	int i = 0;
	
	input:scanf("%d", &i);

	
	if (i % 3 == 0 || i % 4 == 0) {
		arr[offset] = i;
		offset++;
	}

	count++;

	if (count >= 8) {
		for (int a = 0; a < offset; a++) {
			printf("%d\n", arr[a]);
		}
		return 0;
	}
	else {
		goto input;
	}

	return 0;

}

//���� n �Ľ׳�
int forExec02(int x,int y) {

	for (int i = 1; i <= y; i++) {
		x *= i;
	}
	printf("%d\n",x);
	return 0;
}

//do while ��ϰ
int doWhileExec01() {

	int i = 0;
	do {
		if (i == 5)
			continue;
		i++;
		printf("%d\n", i);
	} while (i < 10);

}

//do while
int testDoWhile() {
	int i = 10;
	do{
		printf("%d\n", i);
		i++;
	} while (i < 10);
}

//for ��ϰ1 -> c �� 0 or !0 ��ʶ false true �� 0 false !0 true
int forExec01() {

	int i = 0;
	int k = 0;
	for (i = 0, k = 0; k = 0; k++, i++) {
		k++;
		printf("k : %d\n", k);
	}

	return 0;
}

//���ʡ�Ա���
int moreVariableFor() {
	
	int count = 0;

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			count++;
		}
	}

	printf("%d\n" , count);

	int temp = 0;
	count = 0;
	int a = 0;
	int b = 0;
	for (; a < 10; a++) {
		for (; b < 10; b++) {
			count++;
		}
		temp++;
	}

	printf("%d\n", count);
	printf("%d\n", temp);

	return 0;
}

//for ��ѭ��

int deadFor() {

	for (;;) {
		printf("fuck \n");
	}

	return 0;

}

//���� c forѭ�� + ǰ�պ�д����
int testFor() {
	for (int i = 0; i < 101; i++) {
		if ((i & 1) == 0) {
			if (i == 0) {
				continue;
			}
			printf("ż�� -> %d\n", i);
		}else {
			printf("���� -> %d\n", i);
		}
		break;
	}
	return 0;
}

//while filter
int whileFilter() {

	char in[20];
	scanf("%s", in);

	int ch ;
	while ((ch = getchar()) != EOF) {
		if (ch < '0' || ch > '9') {
			continue;
		}
		else {
			putchar(ch);
			printf("\n");
		}
	}

	return 0;

}

//���� while ��ջ�����
testBreak01() {
	char password[10];
	int ret = 0;
	printf("����������:>");
	scanf("%s", password);
	int ch;

	while ((ch = getchar()) != '\n') {
		;
	}

	printf("��ȷ��(Y/N):>");
	ret = getchar();
	if (ret == 'Y') {
		printf("ȷ���ɹ�\n");
	}
	else {
		printf("ȷ��ȡ��\n");
	}

}

//C���԰汾�� Scanner
int cScanner() {
	int ch = 0;

	//EOF -> END OF FILE �ļ�������־
	while ((ch = getchar()) != EOF) {
		putchar(ch);
	}

	return 0;
}

//����ѧ���ṹ��
int builderStudent() {
	double performance_pay = 888.88;
	double subsidy = 666.66;

	double slaray = ADD(performance_pay, subsidy) + MAX;

	char name[20] = "����";
	int age = 18;

	struct Student student;

	struct Student* pstu = &student;


	strcpy(pstu->name, "����");
	pstu->age = age;
	student.salary = slaray;
	(*pstu).workTime = 40.8F;

	printf("{\"name\":\"%s\",\"age\":%d,\"salary\":%g,\"workTime\":%g}\n", student.name, student.age, student.salary, student.workTime);
	//printf("stu -> %s %d %g %g", student.name, student.age, student.salary, student.workTime);

	return 0;
}