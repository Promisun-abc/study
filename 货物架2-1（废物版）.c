#include <stdio.h>
/*半成品，错误版*/

/*我的想法很简单，就是通过数组储存数据使通道货物对应，但是没用循环而是用的goto语句去重新输入ijmn达到数组储存数据的目的，可是好像行不通，后输入的数据没有覆盖掉前面输入的（后面一步步调试才发现的），
也不知道为什莫，一直卡这，看着程序脑海中过一遍好像也没啥问题呀。快整无语了*/

/*还有后面输入第二次货物信息时为啥scanf直接跳过了呀，脑袋要萎缩了，呜呜呜。。。*/ 

int main()
{  //初始化 
int i,j,m,n,go,sum,money,change=0;
int type[5],price[5],number[5],PASS[5],TYPE[5],RQ[5]={0};   /*RQ即required quantity*/ 
int pass[5]={1,2,3,4,5};
  
   //摆货
top:     printf("请输入你要摆放的货物[分别输入货物种类（字母）、货物所在通道标号(只有1到5号通道)、货物单价以及其个数]\n") ;
again:   scanf("%c %d %d %d",&i,&j,&m,&n);
    if(n>50){printf("您放的太多了，货物机我就要爆炸了，请重新输入吧\n"); goto again;}
   
 switch(j)  {                                            /*想简单了，运行有问题，啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊啊。。。（发癫中）*/
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
	printf("没有这个通道喲，请重新输入吧\n"); goto again;
	}
   printf("是否继续摆货(是请输1，反之输0)\n") ;
   scanf("%d",&go) ;
	if(go==1) goto top;
	else printf("END\n"); 
	
	//购物
still:	 printf("请输入你要购买的货物(分别输入通道号、货物种类及所需个数)\n");
	     scanf("%d %c %d",&j,&i,&n) ;
	 PASS[j-1]=j;TYPE[j-1]=i;RQ[j-1]=n;
	 if(pass[j-1]==PASS[j-1] && type[j-1]==TYPE[j-1]){
	       	if(number[j-1]>=RQ[j-1]) {
	       	   number[j-1]-=RQ[j-1];
			   printf("是否继续购买(是请输1，反之输0)\n") ;
               scanf("%d",&go) ;
	           if(go==1) goto still; else printf("end\n");
			   }
	        else {printf("货物数不够，请少买一点吧\n"); goto still;}  
	    }
     else {printf("没有该货物哦，请重新输入吧\n");goto still;} 
     
     //计算账单
	for(int r=0;r<5;r++){
		sum=sum+RQ[r]*price[r];
	}
	printf("您共需投币%d元，请投币（只能投币1元、2元和5元，可多次投币）\n",sum) ;
	
	//投币
	scanf("%d",&money);
	while(money<sum){
		printf("请继续投币\n");
		scanf("%d",&money);
		money+=money;
	}
	
	 //找零
	change=money-sum;
	printf("找您%d元\n",change) ;
	
	//继续？ 
	printf("是否继续购买(是请输1，反之输0)\n") ;
	scanf("%d",&go) ;
	if(go==1) goto still;
	else printf("END");
	
	return 0;
} 
