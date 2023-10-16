#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>


//写一个函数，每调用一次这个函数，就会将num的值加1

void num_plus(int* num)
{
    //*num = *num + 1;
    (*num)++;
}

int main()
{
    int num = 0;
    num_plus(&num);
    printf("num = %d\n", num);
    num_plus(&num);
    printf("num = %d\n", num);
    num_plus(&num);
    printf("num = %d\n", num);

    return 0;
}


//写一个函数，实现一个整形有序数组的二分查找

                   //本质上arr是一个指针    
//int binary_search(int arr[],int i,int sz)
//{
//	//算法实现
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < i)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > i)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//
//int main()
//{
//	int i = 0;
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	printf("请输入要查找的数字：\n");
//	scanf("%d", &i);
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	int ret = binary_search(arr,i,sz);  //数组在传参的时候只传递数组第一个元素的地址
//	if (ret == -1)
//		printf("找不到指定数字\n");
//	else
//		printf("找到了，下标是:%d\n",ret);
//	return 0;
//}

//写一个函数判断一年是不是闰年

//int is_leap_year(int n)
//{
//	if ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//
//int main()
//{
//	int year = 0;
//	printf("请输入要判断的年份：");
//	scanf("%d", &year);
//
//	//判断year是否为闰年
//	if (1 == is_leap_year(year))
//	    printf("是闰年！");
//	else
//		printf("不是闰年！");
//	return 0;
//}



//写一个函数可以判断一个数是不是素数

//是素数返回1，不是素数返回0
//int is_prime(int n)
//{
//	int i = 0;
//	for (i = 2; i <=sqrt(n); i++)
//	{
//		if (n % i == 0)
//			return 0;
//	}
//	return 1;
//}
//
//int main()
//{
//	int i;
//	printf("请输入一个要判断的数：");
//	scanf("%d", &i);
//		//判断i是否为素数
//	if (is_prime(i) == 1)
//		printf("是素数");
//	else
//		printf("不是素数");
//
//	return 0;
//}

//写一个函数交换两个整形变量的内容

//当实参传给形参的时候
//形参其实是实参的一份临时拷贝
//对形参的修改是不会改变实参的

//void Swap1(int* px, int* py)   //int*x 指针变量 用于存放指针
//{
//	int temp = 0;
//	temp = *px; //*x解引用符 直接使用该地址所指向的值
//	*px = *py;
//	*py = temp;
//}
//
//void Swap(int x, int y)
//{
//	int temp = 0;
//	temp = x;
//	x = y;
//	y = temp;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a = %d,b = %d\n", a,b);
//
//	//int temp = 0;
//	Swap(a,b);            //无法交换数字，因为函数里的变量与主函数的变量没有联系
//	Swap1(&a, &b);        //将a,b的地址传递到函数去，直接操作a,b的值
//	//temp = a;
//	//a = b;
//	//b = temp;
//	printf("a = %d,b = %d\n", a, b);
//	return 0;
//}

