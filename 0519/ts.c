#include <stdio.h>
//int cast(int data){
//	if(data>=65&&data<=90)
//		printf("입력한 %c의 소문자는 %c입니다.\n",data,data+32);
//	else if(data>=97&&data<=122)
//		printf("입력한 %c의 대문자는 %c입니다.\n",data,data-32);
//}

int main(){
	int data1,data2;
	printf("[입력형식]\n");
	printf("대문자 입력 : ");
	scanf("%lc",&data1);
	printf("소문자 입력 : ");
	scanf(" %lc",&data2);
	printf("\n[출력형식]\n"); 
//	cast(data1);
//	cast(data2);
	if(data1>=65&&data1<=90)
		printf("입력한 %c의 소문자는 %c입니다.\n",data1,data1+32);
	else if(data1>=97&&data1<=122)
		printf("입력한 %c의 대문자는 %c입니다.\n",data1,data1-32);
	if(data2>=65&&data2<=90)
		printf("입력한 %c의 소문자는 %c입니다.\n",data2,data2+32);
	else if(data2>=97&&data2<=122)
		printf("입력한 %c의 대문자는 %c입니다.\n",data2,data2-32);
	

	return 0;
}
