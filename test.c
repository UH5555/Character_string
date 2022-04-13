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
//	char arr[] = { 'a','b','c','d','e','f' };//错误示范
//	int len2 = strlen(arr);
//	printf("%d\n", len);
//	printf("%d\n", len2);
//	return 0;
//}

//int main()
//{
//	if (strlen("abc") - strlen("abcdef") > 0)//strlen的返回值是无符号数，所以strlen-strlen的值在内存中依然为无符号数。
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
//	//拷贝src指向的字符串到dest指向的空间，包含\0
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	//返回目的空间的起始地址
//	return ret;
//}
//
//int main()
//{
//	char arr1[] = "abcdefghi";
//	//错误的示范
//	char* p = "abcdefghi";
//	char arr4 = "bit";
//	//错误的示范
//	char arr3[] = { 'a','b','c' };
//	char arr2[] = "bit";
//	//strcpy(arr1, arr2);
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

my_strcat(char* dest, const char* src)
{
	char* ret = dest;
	assert(dest != NULL);
	assert(src);
	//1.找到目的字符串的’\0'
	while (*dest != '\0')
	{
		dest++;
	}
	//2.追加
	while (*dest++ = *src++)
	{
		;
	}
	return ret;
}

int main()
{
	char arr1[30] = "hello\0xxxxxxxxxx";
	char arr2[] = "world";
	my_strcat(arr1, arr2);
	//strcat(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
}