#include <stdio.h>

int main()
{
	//初始化
	int price,bill,sum,change=0;
	//输入与投币 
	printf("请输入货物总价\n") ;
	scanf("%d",&price);
	printf("请投币（只能投币1元、2元和5元，可多次投币）\n");
	scanf("%d",&bill);
	sum=bill;
	while(sum<price){
		printf("请继续投币\n");
		scanf("%d",&bill);
		sum+=bill;
	}
	//找零
	change=sum-price;
	printf("找您%d元\n",change) ;
	return 0;
}
