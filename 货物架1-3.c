#include <stdio.h>

int main()
{   //��ʼ�� 
	int type,TYPE,pass,PASS,price,number,RQ,sum,bill,money,change,go=0;  /*RQ��required quantity*/ 
	
	//�ڷŻ��� 
	printf("��ֱ�����������ࣨ��ĸ������������ͨ����š����ﵥ���Լ������\n");
	scanf("%c %d %d %d",&type,&pass,&price,&number);
	
	//�������� 
top:printf("������Ҫ���򼸺�ͨ���Ļ���򼸸�(�ֱ�����ͨ���š��������༰�������)\n") ;
	scanf("%d %c %d",&PASS,&TYPE,&RQ) ;	
	sum=price*RQ ;  /*�ܼ�*/ 
	
	//�ж� 
	if (pass==PASS && type==TYPE){
		if(RQ<=number){
		printf("��Ͷ�ң�ֻ��Ͷ��1Ԫ��2Ԫ��5Ԫ���ɶ��Ͷ�ң�\n");
      	scanf("%d",&money);
        }else {
	    printf("��Ʒ������������������������\n");
    	goto top;}
}   else {
	    printf("û����Ҫ����Ʒ����������������\n");
		goto top;} 
	   
	//Ͷ�� 
	while(money<sum){
		printf("�����Ͷ��\n");
		scanf("%d",&bill);
		money+=bill;
	}
	
	//����
	change=money-sum;
	printf("����%dԪ\n",change) ;
	
	//�Ƿ��������
	number-=RQ;
	printf("�Ƿ��������(������1����֮��0)\n") ;
	scanf("%d",&go) ;
	if(go==1) goto top;
	else printf("END");
	
	return 0;
}
