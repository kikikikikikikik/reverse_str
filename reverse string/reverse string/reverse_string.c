#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void reverse(char *string)     //*str 只读不能写，参数不能传指针，只能传字符数组
{
	if (*string != '\0')
	{
		reverse(string + 1);
		printf("%c", *string);
	}
	else return;
}
int main()
{
	char *p = "abcdefg";
	reverse(p);
	printf("\n");
	system("pause");
	return 0;
}
//reverse_string(char *str)//循环实现
//{
//	char *left = str;
//	char *right = str + strlen(str) - 1;
//	while (left<right)
//	{
//		char temp=*right;
//		*right = *left;
//		*left = temp;
//		left++;
//		right--;
//	}
//	return;
//}
// char reverse_string2(char *p)
//{
//	 int len = strlen(p);
//	char temp = *p;
//	*p = *(p + len - 1);
//	*(p + len - 1) = '\0';
//	if (strlen(p + 1) > 1)
//	{
//		reverse_string(p+1);
//	}
//	return *(p + len - 1) = temp;
//	
//}
//int main()
//{
//	char ch[20];
//	scanf("%s", &ch);
//	reverse_string2(ch);
//	printf("%s\n", ch);
//	system("pause");
//	return 0;
//}