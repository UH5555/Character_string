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

//int main()
//{
//	char arr1[30] = "hello\0xxxxxxxxx";
//	char arr3[30] = "hello\0xxxxxxxxx";
//	char arr2[] = "world";
//	strncat(arr1, arr2, 3);//hellowor\0
//	strncat(arr3, arr2, 8);//helloworld\0
//	printf("%s\n", arr1);
//	printf("%s\n", arr3);
//	return 0;
//}

//int main()
//{
//	const char* p1 = "abcdef";
//	const char* p2 = "abcqwer";
//	int ret = strncmp(p1, p2, 3);
//	int ret2 = strncmp(p1, p2, 4);
//	printf("%d\n", ret);
//	printf("%d\n", ret2);
//	//strncmp - �ַ����Ƚ�
//	return 0;
//}

////strstr - �����ַ���
//char* my_strstr(const char* p1, const char* p2)
//{
//	assert(p1 != NULL);
//	assert(p2 != NULL);
//	char* s1 = p1;
//	char* s2 = p2;
//	char* cur = (char*)p1;
//	if (*p2 == '\0')
//		return (char*)p1;
//	while (*cur)
//	{
//		s1 = cur;
//		s2 = p2;
//		while ((*s2) && !(*s1-*s2)&&(*s1))
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return cur;//�ҵ��Ӵ�
//		}
//		if (*s1 == '\0')
//		{
//			return NULL;
//		}
//		cur++;
//	}
//	return NULL;
//	//�Ҳ����Ӵ�
//}
//
//int main()
//{
//	char* p1 = "abcdefghi";
//	char* p2 = "def";
//	//char* ret = strstr(p1, p2);
//	char* ret = my_strstr(p1, p2);
//	if (ret == NULL)
//		printf("�Ӵ�������");
//	else
//		printf("%s\n", ret);
//	return 0;
//}

//int main()
//{
//	//192.168.160.10 - .
//	//192 168 160 10 - strtok
//	//char arr[] = "16542@163.com";
//	//char* p = "@.";
//	//���ʮ���Ƶı�ʾ��ʽ��
//	char arr[] = "192.168.160.10";
//	char* p = ".";
//
//
//	char buf[1024] = { 0 };
//	strcpy(buf, arr);
//
//	char* ret = NULL;
//	for (ret = strtok(arr, p); ret != NULL;ret = strtok(NULL,p))
//	{
//		printf("%s\n",ret);
//	}
//	//�и�buf�е��ַ���
//
//	/*char* ret = strtok(arr, p);
//	printf("%s\n", ret);
//	ret = strtok(NULL, p);
//	printf("%s\n", ret);
//	ret = strtok(NULL, p);
//	printf("%s\n", ret);*/
//
//	return 0;
//}

//#include <errno.h>
//int main()
//{
//	//������   ������Ϣ
//	//0   -    No error
//	//1   -    Operation not permitted
//	//2   -    No such file or directory
//	//...
//	//errno   ��һ��ȫ�ֵĴ�����ı���
//	//��C���ԵĿ⺯����ִ�й����У������˴��󣬾ͻ�Ѷ�Ӧ�Ĵ����룬��ֵ��errno��
//
//	//char* str = strerror(2);
//	//printf("%s\n", str);
//
//	//���ļ�
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//		printf("open file success\n");
//	return 0;
//}

//#include <ctype.h>
//int main()
//{
//	char ch = 'w';
//	printf("%d\n",islower(ch));
//	//����ֵΪ0����Ϊ��Сд�ַ���
//	//����ֵ��Ϊ0����ΪСд�ַ���
//	return 0;
//}

//int main()
//{
//	//char ch = tolower('Q');
//	//putchar(ch);
//	char arr[] = "I Am A Student";
//	int i = 0;
//	for (i = 0; i < strlen(arr); i++)
//	{
//		arr[i]=tolower(arr[i]);
//	}
//	printf("%s\n", arr);
//	return 0;
//}