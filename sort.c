#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n, i;
	int j, term;
	scanf("%d", &n);
	int a[n];
	for (i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	for (i = 0; i < n; i++){
		for (j = i + 1; j < n; j++){
			if (a[i] > a[j]){
				term = a[i];
				a[i] = a[j];
				a[j] = term;
			}
		}
	}
	for (i = 0; i < n; i++){
		printf("%d ", a[i]);
	}
	return 0;
}