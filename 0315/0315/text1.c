#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//�﷨�涨�������±�Ĭ�ϴ�0��ʼ

int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	//printf("%d\n", arr[4]);
	//int i = 0;
	//while (i < 10)
	//{
	//	printf("%d ", arr[i]);
	//	i++;
	
	int a = 5 % 2;//ȡģ
	int b = a << 3;

	printf("%d\n%d", b,a);
	//��λ������
	//<<����


	return 0;

}