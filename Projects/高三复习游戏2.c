#include<stdio.h>
int main()
{
	int knowledge=50;   //知识度 
	int tiredness=15;   //疲劳度 
	int liking=10;      //好感度 
	int choice;
	printf("欢迎来到高三复习！\n");//知识度到100能考个好的大学 疲劳度100必须休息 好感度100可以和自己喜欢的姑娘在一起前提知识度到100 知识度100自动毕业 
	printf("知识度到100能考个好的大学 疲劳度100直接猝死 好感度100可以和自己喜欢的姑娘在一起前提知识度到100 知识度100自动毕业 \n");
	printf("初始状态；知识度=50，疲劳度=15，好感度=10\n");
	while(knowledge<100&&tiredness<100&&knowledge>0){
		printf("1:上课认真听 知识度+10 疲劳度+15\n");
		printf("2:课堂吵闹不听讲 知识度-15 好感度-5 疲劳度+20\n");
		printf("3:下课吃东西喝水 疲劳度-20\n");
		printf("4:和喜欢的姑娘说话 好感度+15 知识度-5 疲劳度-10");
		printf("请输入你的选择(1) (2) (3) (4)\n");
		scanf("%d",&choice);
		if(choice==1){
		knowledge=knowledge+10;
		tiredness=tiredness+15;
		printf("你的好兄弟睡醒发现你认真学习说以后泡面你能吃一口他是你养的\n"); 
		printf("知识度%d 疲劳度%d 好感度%d\n",knowledge,tiredness,liking);
		}else if(choice==2){
		knowledge=knowledge-15;
		tiredness=tiredness-20;
		liking=liking-5;
		printf("你和你的好兄弟在课堂上耀武扬威，扰乱课堂纪律引人反感\n"); 
		printf("知识度%d 疲劳度%d 好感度%d\n",knowledge,tiredness,liking);
		}else if(choice==3){
		tiredness=tiredness-20;
		printf("你打开了一包吃的，一群人全围上了分了一圈，你自己只吃到一口\n"); 
		printf("知识度%d 疲劳度%d 好感度%d\n",knowledge,tiredness,liking);
		}else if(choice==4){
		liking=liking+15;
		knowledge=knowledge-5;
		tiredness=tiredness-15;
		printf("下课在走廊晃悠，碰见她说了几句话,不知道是不是自己的错觉你认为她也很高兴\n"); 
		printf("知识度%d 疲劳度%d 好感度%d\n",knowledge,tiredness,liking);
		}else{
		knowledge=knowledge-10;
		tiredness=tiredness+15;
		liking=liking-20;
		printf("你因为不遵守校规校纪回家几天，你很高兴，但是她似乎对你很失望\n"); 
		printf("知识度%d 疲劳度%d 好感度%d\n",knowledge,tiredness,liking);}
	}
	if(knowledge>=100&&liking>=100){
	printf("你和你喜欢的姑娘考上了同一所大学") ;
	}else if(knowledge>=100){
	printf("你考上了一所不错的大学但错过了"); 
	}else if(tiredness>=100){
	printf("你因为学习过度再也醒不来了");
	}else if(knowledge<=0){
	printf("你的父母对你的成绩太失望了，让你出去打工了");} 
	printf("游戏结束\n");
	return 0;
}