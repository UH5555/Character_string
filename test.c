#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <assert.h>
//int my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str != NULL);
//	while (*str )
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int main()
//{
//	int len = my_strlen("abcdef");
//	char arr[] = { 'a','b','c','d','e','f' };//����ʾ��
//	int len2 = strlen(arr);
//	printf("%d\n", len);
//	printf("%d\n", len2);
//	return 0;
//}

//int main()
//{
//	if (strlen("abc") - strlen("abcdef") > 0)//strlen�ķ���ֵ���޷�����������strlen-strlen��ֵ���ڴ�����ȻΪ�޷�������
//		printf("hehe\n");
//	else
//		printf("haha\n");
//	return 0;
//}

//char* my_strcpy(char* dest, const char* src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	char* ret = dest;
//	//����srcָ����ַ�����destָ��Ŀռ䣬����\0
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	//����Ŀ�Ŀռ����ʼ��ַ
//	return ret;
//}
//
//int main()
//{
//	char arr1[] = "abcdefghi";
//	//�����ʾ��
//	char* p = "abcdefghi";
//	char arr4 = "bit";
//	//�����ʾ��
//	char arr3[] = { 'a','b','c' };
//	char arr2[] = "bit";
//	//strcpy(arr1, arr2);
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//my_strcat(char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(dest != NULL);
//	assert(src);
//	//1.�ҵ�Ŀ���ַ����ġ�\0'
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	//2.׷��
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr1[30] = "hello\0xxxxxxxxxx";
//	char arr2[] = "world";
//	my_strcat(arr1, arr2);
//	//strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//int main()
//{
//	//> 1
//	//= 0
//	//< -1
//	char* p1 = "abcdef";
//	char* p2 = "sqwer";
//	//int ret = strcmp(p1, p2);
//	//printf("%d\n", ret);//-1
//	if (strcmp(p1, p2) > 0)
//		printf("p1>p2\n");
//	else if (strcmp(p1, p2) == 0)
//		printf("p1==p2\n");
//	else
//		printf("p1<p2\n");
//	return 0;
//}

//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	//�Ƚ�
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//		{
//			return 0;
//		}
//		str1++;
//		str2++;
//	}
//	/*if (*str1 > *str2)
//		return 1;
//	else
//		return -1;*/
//	return (*str1 - *str2);
//}
//
//int main()
//{
//	char* p1 = "abcdef";
//	char* p2 = "abqwe";
//	int ret = my_strcmp(p1, p2);
//	printf("ret = %d\n", ret);
//	return 0;
//}

////�ַ������Ȳ�������
//int main()
//{
//	char arr1[5] = "abc";
//	char arr2[] = "hello bit";
//	strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//int main()
//{
//	char arr1[10] = "abcdefgh";
//	char arr2[] = "hello world";
//	strcpy(arr1, arr2, 6);// \0���´�������������������׷��\0
//	return 0;
//}

int main()
{
	char arr1[30] = "hello\0xxxxxxxxx";
	char arr3[30] = "hello\0xxxxxxxxx";
	char arr2[] = "world";
	strncat(arr1, arr2, 3);//hellowor\0
	strncat(arr3, arr2, 8);//helloworld\0
	printf("%s\n", arr1);
	printf("%s\n", arr3);
	return 0;
}