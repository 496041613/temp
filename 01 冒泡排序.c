#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

#define MAX 10

//交换函数
void sweap(int* a, int* b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

//1、简单版冒泡排序
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

//2、真正版冒泡排序
void bubbleSort2(int arr[], int length)
{
	for (int i = 0;i < length-1;i++)
	{
		for (int j = length-2;j >= i;j--)  //从后面往排序 j初始为倒数第二个位置
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

	//给数组赋值
	for (int i = 0;i < MAX;i++)
	{
		arr[i] = rand() % MAX; //输出为0~MAX+10-1;	
	}
	//打印数组
	for (int i = 0;i < MAX;i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	//1、普通排序
	//bubbleSort1(arr, MAX);

	//2、真正版冒泡排序
	bubbleSort2(arr, MAX);
	//打印数组
	for (int i = 0;i < MAX;i++)
	{
		printf("%d ", arr[i]);
	}

	system("pause");
	return 0;

}