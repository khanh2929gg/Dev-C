#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n, i;
	scanf("%d", &n);
	int a[n];
	
	for (i = 0; i < n; i++){
		scanf("%d", &a[i]);
		}
	for (i = 0; i < n; i++){
	if(a[i] % 2 == 0){
			printf("%d ", a[i]);
		}
	}
	return 0;
}