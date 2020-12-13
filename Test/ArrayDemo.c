#include <stdio.h>
#include <string.h>

int createArray() {
	char arr1[] = "abc";
	char arr2[] = { 'a','b','c'};
	printf("%d\n", sizeof(arr1));
	printf("%d\n", sizeof(arr2));
	printf("%d\n", strlen(arr1));
	printf("%d\n", strlen(arr2));
}

void useArray() {

	char arr[] = "abcderf";
	//�±����
	printf("%c\n", arr[3]);

	//ѭ������

	//sizeof �ַ����� \0
	int size = sizeof(arr) / sizeof(char);
	int size1 = strlen(arr);
	printf("%d  %d\n", size,size1);
	for (int i = 0; i < size1; i++) {
		printf("%c\n", arr[i]);
	}

	printf("%s\n", "char ����");

	//int ���������־���� \0
	int int_arr[] = { 1,2,3,4,5,6,7,8,9,0 };
	int int_arr_size = sizeof(int_arr) / sizeof(int);
	for (int i = 0; i < int_arr_size; i++) {
		printf("%d\n", int_arr[i]);
	}

	printf("%s\n", "int ����");
	
}

int LookArrayMemory() {

	int arr[] = { 0,1,2,3,4,5,6,7,8,9,10,11,155,178 };

	int size = sizeof(arr) / sizeof(int);

	for (int i = 0; i < size; i++) {

		// 1 2 3 4 5 6 7 8 9 a b c d e f --> 16bit
		printf("&arr[%d] = %p\n",i , &arr[i]);
	}

	return 0;

}

int testInitializeDoubleArray() {
	
	//�� �� �в��ܶ�ʡ��
	//int arrs01[][] = { 1,2,3,4,5 };

	int arrs02[3][4] = {1,2,3,4,5};

	//�в���ʡ��
	//int arrs03[3][] = { 1,2,3,4,5,6 };

	//�п���ʡ��
	int arrs04[][4] = { 1,2,3,4,5,6 };

	return 0;
}

int testDubbleArray01(){
	
	//�г��ȳ������Զ���һ��
	int arrs[3][4] = { 1,2,3,4,5 };
	int arrs_size = sizeof(arrs) / sizeof(arrs[0]);
	printf("----- %d\n", arrs_size);

	for (int i = 0; i < arrs_size; i++) {

		int arr_size = sizeof(arrs[0]) / sizeof(int);
		printf("+++++ %d\n", arr_size);
		
		for (int j = 0; j < arr_size; j++) {
			printf("%d\n", arrs[i][j]);
		}

	}
	return 0;
}

int testDubbleArray02() {

	int arrs[3][4] = { {1,2,3},{4,5},6,7,8,9 };

	int arrs_size = sizeof(arrs) / sizeof(arrs[0]);

	for (int i = 0; i < arrs_size; i++) {
	
		int arr_size = sizeof(arrs[i]) / sizeof(int);

		for (int j = 0; j < arr_size; j++) {
			
			printf("%d\n",arrs[i][j]);

		}

		printf(" ------ %d ------ \n", i);

	}

}


//���Զ�λ�����ڴ�
int testDubbleArrayMemory() {

	int arrs[3][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12} };

	for (int i = 0; i < sizeof(arrs) / sizeof(arrs[0]); i++) {
		
		for (int j = 0; j < sizeof(arrs[i]) / sizeof(arrs[i][0]); j++) {
		
			printf("&arrs[%d][%d] = %p \n",i,j, &arrs[i][j]);

		}

	}

	return 0;

}

//ð������
void bubble_sort(int arr[],int size) {;

	for (int i = 0; i < size - 1; i++) {
		int flag = 1;
		for (int j = 0; j < size - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				arr[j] = arr[j] ^ arr[j + 1];
				arr[j + 1] = arr[j] ^ arr[j + 1];
				arr[j] = arr[j] ^ arr[j + 1];
				flag = 0;
			}
		}
		if (flag) {
			break;
		}
	}

}

//�����Ƿ��ַ����
void conditionArrayAddr() {
	int arr[] = { 1,2,3,4,5,6 };
	
	//�ɴ˿�֤�����ǵ�ַ
	printf("%p\n", arr);
	printf("%p\n", &arr);
	printf("%d\n", *arr);

	// arr == &arr[0] != &arr

	printf("\n %p\n",arr + 1);
	printf("\n %p\n",&arr[0] + 1);

	//&arr ��������ĵ�ַ
	printf("%p\n",&arr + 1);
	
}
