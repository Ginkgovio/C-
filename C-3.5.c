//环形加密(基础)
//具体加密方法如下：
//若密钥 key≥0，则从明文字母开始按顺时针方向走 ∣key∣ 步得到密文字母；
//若密钥 key<0，则从明文字母开始按逆时针方向走 ∣key∣ 步得到密文字母。
#include <stdio.h>
#include <ctype.h>

char Encode(char plain,int key);
int main(void){
	char x,y;
	int k;
	scanf("%c%d",&x,&k);
	y=Encode(x,k);
	printf("%c\n",y);
	return 0;
	
}
char Encode(char plain,int key){
if(plain>='a'&&plain<='z'){
	plain=(26+key%26+plain-'a')%26+'a';
	
}	
else if(plain>='A'&&plain<='Z'){
	plain=(26+key%26+plain-'A')%26+'A';
}
return plain;

}