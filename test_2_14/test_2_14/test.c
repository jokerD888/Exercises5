#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main(void)
//{
//	int arr[10][10] = { 0 };
//	int i, j;
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			if (j == 0) arr[i][j] = 1;
//			if (i == j) arr[i][j] = 1;
//			if (i >= 2 && j >= 1)
//			{
//				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//			}
//		}
//	}
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf("%4d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main(void)
//{
//	char killer = 0;
//	for (killer = 'a'; killer <= 'd'; killer++)
//	{
//		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3)
//			printf("killer = %c\n",killer);
//	}
//	return 0;
//}

//int main(void)
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if (((b == 2) + (a == 3) == 1) &&
//							((b == 2) + (e == 4) == 1) &&
//							((c == 1) + (d == 2) == 1) &&
//							((c == 5) + (d == 3) == 1) &&
//							((e == 4) + (a == 1) == 1))
//						{
//							if (a * b * c * d * e == 120)
//								printf("a=%d\nb=%d\nc=%d\nd=%d\ne=%d\n", a, b, c, d, e);
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}

int main(void)
{
	int aa[2][5] = {10,9,8,7,6,5,4,3,2,1};
	int* ptr1 = (int*)(&aa + 1);
	int* ptr2 = (int*)(*(aa + 1));
	//aa是二维数组名，是第一行的地址，+1指向第二行的地址，解引用表示第二行的数组名，*(aa+1)=aa[1],数组名又是首元素地址
	printf("%d,%d", *(ptr1-1), *(ptr2-1));
	return 0;
}