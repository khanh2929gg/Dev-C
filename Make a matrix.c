#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n, m, i, j;
	int sum = 0;
	printf("nhap so dong va so cot cua matrix: ");
	scanf("%d%d", &n, &m);
	int a[n][m];
	for (i = 1 ; i < n + 1; i++){
		for ( j = 1; j < m + 1; j++){
			printf ("dong %d cot %d: ", i, j);
			scanf ("%d", &a[i][j]);	
		}
	
	}
	for (i = 1 ; i < n + 1; i++){
			for ( j = 1; j < m + 1; j++){
			sum += a[i][j];
		}
	}
	printf("tong cua matrix la: %d", sum);
	return 0;
}