#include <stdio.h>

int main()
{
	//初始化 
	int type,pass,price,number=0;
	//摆放货物 
	printf("请分别输入货物种类（字母）、货物所在通道标号、货物单价以及其个数\n");
	scanf("%c %d %d %d",&type,&pass,&price,&number);
	printf("%d: ",pass);
	while (number>0){
		printf("%c",type);
		number--;
	}
	printf(" %d",price);
	return 0;
}
