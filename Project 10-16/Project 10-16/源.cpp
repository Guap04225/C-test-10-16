#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>


//дһ��������ÿ����һ������������ͻὫnum��ֵ��1

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


//дһ��������ʵ��һ��������������Ķ��ֲ���

                   //������arr��һ��ָ��    
//int binary_search(int arr[],int i,int sz)
//{
//	//�㷨ʵ��
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
//	printf("������Ҫ���ҵ����֣�\n");
//	scanf("%d", &i);
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	int ret = binary_search(arr,i,sz);  //�����ڴ��ε�ʱ��ֻ���������һ��Ԫ�صĵ�ַ
//	if (ret == -1)
//		printf("�Ҳ���ָ������\n");
//	else
//		printf("�ҵ��ˣ��±���:%d\n",ret);
//	return 0;
//}

//дһ�������ж�һ���ǲ�������

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
//	printf("������Ҫ�жϵ���ݣ�");
//	scanf("%d", &year);
//
//	//�ж�year�Ƿ�Ϊ����
//	if (1 == is_leap_year(year))
//	    printf("�����꣡");
//	else
//		printf("�������꣡");
//	return 0;
//}



//дһ�����������ж�һ�����ǲ�������

//����������1��������������0
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
//	printf("������һ��Ҫ�жϵ�����");
//	scanf("%d", &i);
//		//�ж�i�Ƿ�Ϊ����
//	if (is_prime(i) == 1)
//		printf("������");
//	else
//		printf("��������");
//
//	return 0;
//}

//дһ�����������������α���������

//��ʵ�δ����βε�ʱ��
//�β���ʵ��ʵ�ε�һ����ʱ����
//���βε��޸��ǲ���ı�ʵ�ε�

//void Swap1(int* px, int* py)   //int*x ָ����� ���ڴ��ָ��
//{
//	int temp = 0;
//	temp = *px; //*x�����÷� ֱ��ʹ�øõ�ַ��ָ���ֵ
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
//	Swap(a,b);            //�޷��������֣���Ϊ������ı������������ı���û����ϵ
//	Swap1(&a, &b);        //��a,b�ĵ�ַ���ݵ�����ȥ��ֱ�Ӳ���a,b��ֵ
//	//temp = a;
//	//a = b;
//	//b = temp;
//	printf("a = %d,b = %d\n", a, b);
//	return 0;
//}

