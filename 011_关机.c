#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char a[20]={0};
	system("shutdown -s -t 600");
	again:
	printf("���Խ���1���Ӻ�ػ�,������������ȡ���ػ�:\n");
	scanf("%s",a);
	if(strcmp(a,"������"))
		goto again;
	else
		system("shutdown -a");
}