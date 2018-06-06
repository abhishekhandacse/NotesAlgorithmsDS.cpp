#include <stdio.h>
void message();

int main(){
printf("Inside Main");
message();
return 0;}

void message(){
	printf("Inside message\n");
	int c=main();
}