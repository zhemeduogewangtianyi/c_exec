#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <time.h>
#include "Student.c"
#include "Add.h"
#include "ArrayDemo.h"
#include "GuessTheNumber.h"
#include "TicTacToe.h"
#include "MineClearAnce.h"

#define MAX 1000.05
#define ADD(x,y) (x + y)

int main() {
	
	//start_mine_clearance();

	//playTicTacToe();

	//return gameEnter();

	//convertTypeDemo01();

	//convertNumber();

	//illegalConvert();

	//illegalConvert02();

	//illegalContert03();

	//pointerDemo01();

	//pointerDemo02();

	//wildPionterDemo01();

	//wildPointerDemo02();

	wildPointerDemo03();

	return 0;

	
	
	//char arr[] = "1234";
	//pointMove(arr);
	
	//conditionArrayAddr();


	/*int arr[] = { 9,8,7,6,5,4,3,2,1,0 };

	int arr1[] = { 0,1,2,3,4,5,6,7,8,9 };

	int size = sizeof(arr1) / sizeof(int);

	bubble_sort(arr1, size);

	for (int x = 0; x < size; x++) {
		printf("%d\n", arr1[x]);
	}*/

	//testDubbleArrayMemory();

	//testDubbleArray02();

	//LookArrayMemory();

	//useArray();

	//createArray();

	/*int a = 5, b = 6;
	swap(&a, &b);
	printf("%d %d \n", a, b);*/

	//printf("%d\n", Add(1, 2));

	//numbersGame();
}

//int numbersGame() {
//	typedef unsigned int u_int;
//
//	int condition = 0;
//
//
//	//初始化函数种子
//	int random = srand((u_int)time(0));
//
//	do
//	{
//		menu();
//		printf("%s", "请选择>:");
//		scanf("%d", &condition);
//
//		switch (condition) {
//		case 1:
//			printf("%s\n", "开始");
//			start();
//			break;
//		case 2:
//			condition = 0;
//			printf("%s\n", "退出");
//			break;
//		default:
//			printf("%s\n", "暂无此选项");
//			break;
//
//		}
//
//	} while (condition);
//}
//
//int start() {
//	
//	//随机生成 0 -100
//	int random = rand() % 1000 + 1;
//	printf("%s\n","请填写猜的数字>:");
//
//	while (1) {
//		int number = 0;
//		scanf("%d", &number);
//		if (number < random) {
//			printf("%s\n", "猜小了！");
//		}
//		else if (number > random) {
//			printf("%s\n", "猜大了！");
//		}
//		else {
//			printf("%s\n", "猜对了！");
//			break;
//		}
//	}
//	
//
//}
//
//int menu() {
//	printf("***************************\n");
//	printf("*** 1:开始猜数字 2:退出 ***\n");
//	printf("***************************\n");
//}

int* wildPointer() {
	int a = 10;
	return &a;
}

int wildPointerDemo03() {
	//指针指向的空间释放
	int* pa = wildPointer();
	printf(*pa);
	return 0;
}

int wildPointerDemo02() {

	//指针越界访问
	int arr[] = { 0 };
	int* pa = &arr;


	for (int i = 0; i < 12; i++) {
		//*(pa + i) = 1;
	}

	return 0;
}

int wildPionterDemo01() {

	//局部变量未初始化的指针，默认值是随机的
	//int* a;
	//*a = 10;
	//printf("%p\n", *a);
	return 0;

}

int pointerDemo02() {

	int arr[] = { 0 };
	
	int* pa = &arr;

	for (int i = 0; i < 10; i++) {
		*(pa + i) = 10;
	}

	for (int i = 0; i <10; i++) {
		printf("pa -> %d\n", arr[i]);
	}

	int arr1[] = { 0 };

	char* pc = &arr1;

	for (int i = 0; i < 10; i++) {
		*(pc + i) = 10;
	}

	for (int i = 0; i < 10; i++) {
		printf("pc -> %d\n", arr1[i]);
	}
	return 0;
}

int pointerDemo01() {
	int a = 0x11223344;
	int* pa = &a;
	char* pc = &a;

	printf("%d\n", a);
	printf("%p\n", pa);
	printf("%p\n", pa + 1);
	printf("%p\n", pc);
	printf("%p\n", pc + 1);
	return 0;
}

int illegalContert03() {
	
	int i = 1;
	int a = (++i);
	printf("%d\n", a);
	int b = a + (++i);
	printf("%d\n", b);
	int c = b + (++i);
	printf("%d\n",c);

	int ii = 1;
	int d = (++ii) + (++ii) + (++ii);
	printf("%d\n", d);
	return 0;
}

int illegalConvert02() {

	int answer;

	answer = illegalFunc(1) - illegalFunc(2) * illegalFunc(3);

	printf("%d\n",answer);

	return 0;

}

int illegalFunc(int sort) {

	static int count = 1;

	//int res = count++;
	int res = ++count;

	printf("res = %d -> %d\n",res,sort);

	return res;
}

int illegalConvert() {

	int i = 10;
	i = i-- - --i * (i = -3) * i++ + ++i;
	printf("%d\n",i);
	return 0;
}

int convertTypeDemo01(){

	char c = 1;
	printf("%u -> %u\n",c,sizeof(c));
	printf("%u -> %u\n",(+c),sizeof(+c));
	printf("%u -> %u\n", (!c), sizeof(!c));
	//结果有歧义，不可预测
	int i = 1;
	printf("%d\n", i + --i);
	return 0;

}

//11 -> 15  15 -> 11
int convertNumber() {
	int a = 11;
	a = a | (1 << 2);
	printf("%d\n",a);
	a = a & (~(1 << 2));
	printf("%d\n", a);
	return 0;
}

int addNumber() {
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
	return 0;
}

//计算 n 的阶乘
int forExec02(int x,int y) {

	for (int i = 1; i <= y; i++) {
		x *= i;
	}
	printf("%d\n",x);
	return 0;
}

//do while 练习
int doWhileExec01() {

	int i = 0;
	do {
		if (i == 5)
			continue;
		i++;
		printf("%d\n", i);
	} while (i < 10);
	return 0;
}

//do while
int testDoWhile() {
	int i = 10;
	do{
		printf("%d\n", i);
		i++;
	} while (i < 10);
}

//for 练习1 -> c 用 0 or !0 标识 false true ， 0 false !0 true
int forExec01() {

	int i = 0;
	int k = 0;
	for (i = 0, k = 0; k = 0; k++, i++) {
		k++;
		printf("k : %d\n", k);
	}

	return 0;
}

//随便省略变量
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

//for 死循环

int deadFor() {

	for (;;) {
		printf("fuck \n");
	}

	return 0;

}

//测试 c for循环 + 前闭后开写法。
int testFor() {
	for (int i = 0; i < 101; i++) {
		if ((i & 1) == 0) {
			if (i == 0) {
				continue;
			}
			printf("偶数 -> %d\n", i);
		}else {
			printf("奇数 -> %d\n", i);
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

//利用 while 清空缓冲区
testBreak01() {
	char password[10];
	int ret = 0;
	printf("请输入密码:>");
	scanf("%s", password);
	int ch;

	while ((ch = getchar()) != '\n') {
		;
	}

	printf("请确认(Y/N):>");
	ret = getchar();
	if (ret == 'Y') {
		printf("确定成功\n");
	}
	else {
		printf("确认取消\n");
	}

}

//C语言版本的 Scanner
int cScanner() {
	int ch = 0;

	//EOF -> END OF FILE 文件结束标志
	while ((ch = getchar()) != EOF) {
		putchar(ch);
	}

	return 0;
}

//构建学生结构体
int builderStudent() {
	double performance_pay = 888.88;
	double subsidy = 666.66;

	double slaray = ADD(performance_pay, subsidy) + MAX;

	char name[20] = "张三";
	int age = 18;

	struct Student student;

	struct Student* pstu = &student;


	strcpy(pstu->name, "张三");
	pstu->age = age;
	student.salary = slaray;
	(*pstu).workTime = 40.8F;

	printf("{\"name\":\"%s\",\"age\":%d,\"salary\":%g,\"workTime\":%g}\n", student.name, student.age, student.salary, student.workTime);
	//printf("stu -> %s %d %g %g", student.name, student.age, student.salary, student.workTime);

	return 0;
}
