#include <stdio.h>
/*���Ʒ�������*/

/*�ҵ��뷨�ܼ򵥣�����ͨ�����鴢������ʹͨ�������Ӧ������û��ѭ�������õ�goto���ȥ��������ijmn�ﵽ���鴢�����ݵ�Ŀ�ģ����Ǻ����в�ͨ�������������û�и��ǵ�ǰ������ģ�����һ�������Բŷ��ֵģ���
Ҳ��֪��ΪʲĪ��һֱ���⣬���ų����Ժ��й�һ�����Ҳûɶ����ѽ������������*/

/*���к�������ڶ��λ�����ϢʱΪɶscanfֱ��������ѽ���Դ�Ҫή���ˣ������ء�����*/ 

int main()
{  //��ʼ�� 
int i,j,m,n,go,sum,money,change=0;
int type[5],price[5],number[5],PASS[5],TYPE[5],RQ[5]={0};   /*RQ��required quantity*/ 
int pass[5]={1,2,3,4,5};
  
   //�ڻ�
top:     printf("��������Ҫ�ڷŵĻ���[�ֱ�����������ࣨ��ĸ������������ͨ�����(ֻ��1��5��ͨ��)�����ﵥ���Լ������]\n") ;
again:   scanf("%c %d %d %d",&i,&j,&m,&n);
    if(n>50){printf("���ŵ�̫���ˣ�������Ҿ�Ҫ��ը�ˣ������������\n"); goto again;}
   
 switch(j)  {                                            /*����ˣ����������⣬����������������������������������������������������������У�*/
 	case 1: type[0]=i;price[0]=m;number[0]=n;
		break;
	case 2: type[1]=i;price[1]=m;number[1]=n;
		break;
	case 3: type[2]=i;price[2]=m;number[2]=n;
		break;
	case 4: type[3]=i;price[3]=m;number[3]=n;
		break;
	case 5: type[4]=i;price[4]=m;number[4]=n;
		break;
    default: 
	printf("û�����ͨ���ѣ������������\n"); goto again;
	}
   printf("�Ƿ�����ڻ�(������1����֮��0)\n") ;
   scanf("%d",&go) ;
	if(go==1) goto top;
	else printf("END\n"); 
	
	//����
still:	 printf("��������Ҫ����Ļ���(�ֱ�����ͨ���š��������༰�������)\n");
	     scanf("%d %c %d",&j,&i,&n) ;
	 PASS[j-1]=j;TYPE[j-1]=i;RQ[j-1]=n;
	 if(pass[j-1]==PASS[j-1] && type[j-1]==TYPE[j-1]){
	       	if(number[j-1]>=RQ[j-1]) {
	       	   number[j-1]-=RQ[j-1];
			   printf("�Ƿ��������(������1����֮��0)\n") ;
               scanf("%d",&go) ;
	           if(go==1) goto still; else printf("end\n");
			   }
	        else {printf("������������������һ���\n"); goto still;}  
	    }
     else {printf("û�иû���Ŷ�������������\n");goto still;} 
     
     //�����˵�
	for(int r=0;r<5;r++){
		sum=sum+RQ[r]*price[r];
	}
	printf("������Ͷ��%dԪ����Ͷ�ң�ֻ��Ͷ��1Ԫ��2Ԫ��5Ԫ���ɶ��Ͷ�ң�\n",sum) ;
	
	//Ͷ��
	scanf("%d",&money);
	while(money<sum){
		printf("�����Ͷ��\n");
		scanf("%d",&money);
		money+=money;
	}
	
	 //����
	change=money-sum;
	printf("����%dԪ\n",change) ;
	
	//������ 
	printf("�Ƿ��������(������1����֮��0)\n") ;
	scanf("%d",&go) ;
	if(go==1) goto still;
	else printf("END");
	
	return 0;
} 
