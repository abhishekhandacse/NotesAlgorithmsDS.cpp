#include<stdio.h>

int main(){

	union a{
		int i;
		char ch[2];
	};
	union a obj;
	printf("%d\n",sizeof(obj));
	short int num;
	printf("%d\n",sizeof(num));

return 0;}