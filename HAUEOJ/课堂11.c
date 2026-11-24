//202610527422 刘晨旭 
#include<stdio.h> 
int main()
{
	int x,y,z;
	int n=0;
    for(x=0;x<=20;x++){
    	for(y=0;y<=33;y++){
    		z=100-x-y;
            if(5*x+3*y+z/3==100&&z%3==0){
            	printf("%d %d %d\n",x,y,z);
            	return 0;
		}
		}
	}
	return 0;
}