#include <stdio.h>
#include <string.h>
int Add(int x, int y) {
	return x + y;
}

//��������
void swap(int* a,int* b) {
	*a = *a ^ *b;
	*b = *a ^ *b;
	*a = *a ^ *b;
}

//�ݹ�ָ���ƶ�
void pointMove(char* str) {
	if (*str != '\0') {
		pointMove(str + 1);
	}
	printf("%d %s\n",strlen(str), str);
}