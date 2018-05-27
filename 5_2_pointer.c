#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int num;
	
	int *p;
	p=&num;
	
	printf("%p\n",&num);
	
	printf("%p\n",p);
	return 0;
}
