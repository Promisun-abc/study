#include <stdio.h>

int main()
{
	//��ʼ�� 
	int type,pass,price,number=0;
	//�ڷŻ��� 
	printf("��ֱ�����������ࣨ��ĸ������������ͨ����š����ﵥ���Լ������\n");
	scanf("%c %d %d %d",&type,&pass,&price,&number);
	printf("%d: ",pass);
	while (number>0){
		printf("%c",type);
		number--;
	}
	printf(" %d",price);
	return 0;
}
