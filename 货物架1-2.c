#include <stdio.h>

int main()
{
	//��ʼ��
	int price,bill,sum,change=0;
	//������Ͷ�� 
	printf("����������ܼ�\n") ;
	scanf("%d",&price);
	printf("��Ͷ�ң�ֻ��Ͷ��1Ԫ��2Ԫ��5Ԫ���ɶ��Ͷ�ң�\n");
	scanf("%d",&bill);
	sum=bill;
	while(sum<price){
		printf("�����Ͷ��\n");
		scanf("%d",&bill);
		sum+=bill;
	}
	//����
	change=sum-price;
	printf("����%dԪ\n",change) ;
	return 0;
}
