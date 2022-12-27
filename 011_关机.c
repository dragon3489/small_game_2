#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char a[20]={0};
	system("shutdown -s -t 600");
	again:
	printf("电脑将在1分钟后关机,请输入我是猪，取消关机:\n");
	scanf("%s",a);
	if(strcmp(a,"我是猪"))
		goto again;
	else
		system("shutdown -a");
}