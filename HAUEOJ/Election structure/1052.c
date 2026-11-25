#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    switch(y){
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
    printf("31\n");break;
    case 4:
    case 6:
    case 9:
    case 11:
    printf("30\n");break;
    case 2:
     if((x%4==0&&x%100!=0)||x%400==0){
    printf("29\n");
    }else{
        printf("28\n");
    }
    break;
    }
    return 0;
}