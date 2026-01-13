#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char name[100], address[100];
	scanf("%s%s", name, address);
	printf("Name: %s\nAddress: %s", name, address);
	return 0;
}