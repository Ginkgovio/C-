//将秒数转换成时分秒 
#include <stdio.h>
void trans(int sec){
int hour,min;
hour=sec/3600;
min=(sec%3600)/60;
sec=(sec%3600)%60;
printf("%d:%d:%d\n",hour,min,sec);
	
}
int main(){
	int sec;
	scanf("%d",&sec);
	trans(sec);
	return 0;
	
	 
}