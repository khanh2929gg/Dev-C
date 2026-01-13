#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n, m, i, j;
	printf("Nhap so dong va so cot: ");
	scanf("%d%d", &n, &m);
	printf("\n");
	printf("Co %d dong %d cot\n", n, m);
	int a[n][m];
	
	for (i = 1; i < n + 1; i++){
		for (j = 1; j < m + 1; j++){
			printf("Dong %d cot %d", i, j);
			scanf("%d", &a[i][j]);
			
		}
	}
	int sum = 0;
	for (i = 1; i < n + 1; i++){
		for (j = 1; j < m + 1; j++){
			if (a[i][j] % 5 == 0) {
				sum += a[i][j];
			}
		}
	}
	printf("\n");
	printf("Tong cac phan tu trong matrix chia het cho 5 la: %d", sum); 
	return 0;
}