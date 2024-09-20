#include <stdio.h>

int main()
{   //初始化 
	int type,TYPE,pass,PASS,price,number,RQ,sum,bill,money,change,go=0;  /*RQ即required quantity*/ 
	
	//摆放货物 
	printf("请分别输入货物种类（字母）、货物所在通道标号、货物单价以及其个数\n");
	scanf("%c %d %d %d",&type,&pass,&price,&number);
	
	//购物所需 
top:printf("请问您要购买几号通道的货物，买几个(分别输入通道号、货物种类及所需个数)\n") ;
	scanf("%d %c %d",&PASS,&TYPE,&RQ) ;	
	sum=price*RQ ;  /*总价*/ 
	
	//判断 
	if (pass==PASS && type==TYPE){
		if(RQ<=number){
		printf("请投币（只能投币1元、2元和5元，可多次投币）\n");
      	scanf("%d",&money);
        }else {
	    printf("商品个数不够，请重新输入所需\n");
    	goto top;}
}   else {
	    printf("没有您要的商品，请重新输入所需\n");
		goto top;} 
	   
	//投币 
	while(money<sum){
		printf("请继续投币\n");
		scanf("%d",&bill);
		money+=bill;
	}
	
	//找零
	change=money-sum;
	printf("找您%d元\n",change) ;
	
	//是否继续购买
	number-=RQ;
	printf("是否继续购买(是请输1，反之输0)\n") ;
	scanf("%d",&go) ;
	if(go==1) goto top;
	else printf("END");
	
	return 0;
}
