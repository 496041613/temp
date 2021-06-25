#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

#define MAX 10

//��������
void sweap(int* a, int* b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

//1���򵥰�ð������
void bubbleSort1(int arr[],int length)
{
	for (int i = 0;i < length - 1;i++)
	{
		for (int j = i + 1;j < length;j++)
		{
			if (arr[i] > arr[j])
			{
				sweap(&arr[i], &arr[j]);
			}
		}
	}

}

//2��������ð������
void bubbleSort2(int arr[], int length)
{
	for (int i = 0;i < length-1;i++)
	{
		for (int j = length-2;j >= i;j--)  //�Ӻ��������� j��ʼΪ�����ڶ���λ��
		{
			if (arr[j] > arr[j+1])
			{
				sweap(&arr[j], &arr[j+1]);
			}
		}
	}
}


int main()
{
	int arr[MAX];
	srand((unsigned int)time(NULL));

	//�����鸳ֵ
	for (int i = 0;i < MAX;i++)
	{
		arr[i] = rand() % MAX; //���Ϊ0~MAX+10-1;	
	}
	//��ӡ����
	for (int i = 0;i < MAX;i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	//1����ͨ����
	//bubbleSort1(arr, MAX);

	//2��������ð������
	bubbleSort2(arr, MAX);
	//��ӡ����
	for (int i = 0;i < MAX;i++)
	{
		printf("%d ", arr[i]);
	}

	system("pause");
	return 0;

}