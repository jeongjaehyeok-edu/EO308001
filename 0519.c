#include <stdio.h>
int cast(int data){
	if(data>=65&&data<=90)
		printf("�Է��� %c�� �ҹ��ڴ� %c�Դϴ�.\n",data,data+32);
	else if(data>=97&&data<=122)
		printf("�Է��� %c�� �빮�ڴ� %c�Դϴ�.\n",data,data-32);
}

int main(){
	int data1,data2;
	printf("[�Է�����]\n");
	printf("�빮�� �Է� : ");
	scanf("%c",&data1);
	printf("�ҹ��� �Է� : ");
	scanf(" %c",&data2);
	printf("\n[�������]\n"); 
	cast(data1);
	cast(data2);
	
	
	return 0;
}
