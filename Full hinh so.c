#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

/*

=========Vẽ hình bằng số=================





*/
/*
	1 2 3 4 5
	1       5
	1       5
	1       5
	1 2 3 4 5
*/

main(){
    int r;
    scanf("%d", &r);
    for (int i = 1; i <= r; i++) {
        for (int j = 1; j <= r; j++) {
            if (i == 1 || i == r || j == 1 || j == r) {
                printf("%d ", j);
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
}
//Tam Giác Số - triangle (Tăng dần,giảm dần,cách quãng)

//1						    1 2 3 4 5			1
//1 2						1 2 3 4				2  2
//1 2 3						1 2 3				3  3  3
//1 2 3 4					1 2					4  4  4  4
//1 2 3 4 5					1					5  5  5  5  5

//main(){//Tăng Dần
//	int n;scanf("%d",&n);
//	int i,j;
//	for(i=1;i<=n;i++){
//		for(j=1;j<=i;j++)printf("%d ",j);
//		printf("\n");
//	}
//}

//main(){//Giảm dần
//	int n;scanf("%d",&n);
//	int i,j;
//    for(i=n;i>=1;i--) { 
//        for(j=1;j<=i;j++) {
//            printf("%d ",j);
//        }
//        printf("\n");
//    }
//}

//main(){//Tam giác số cách quãng-Triangle of spaced numbers
//	int n;scanf("%d",&n);
//	int i,j;
//    for( i = 1; i <= n; i++) {
//        for( j = 1; j <= i; j++) {
//            printf("%d ", i);
//        }
//        printf("\n");
//    }
//}

//---------
1 2 3 4 5
1     4
1   3
1 2
1
main() {
    int n;scanf("%d", &n);
	int i,j;
    for ( i = 1; i <= n; i++) {
        for ( j = 1; j <= n; j++) {
            if (j == 1 || j == n - i + 1 || i == 1) {
                printf("%d ", j);
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
}


//*****************************************************************************
//(a)							(b)
//5 4 3 2 1					5 4 3 2 1	
//4 3 2 1					5 4 3 2
//3 2 1						5 4 3
//2 1						5 4
//1							5

//main(){
//	int n;scanf("%d",&n);
//	int i,j;
//	for(i=0;i<n;i++){
//		for(j=n-i;j>0;j--){
//			printf("%d ",j);
//		}
//		printf("\n");
//	}
//}

//main(){//b.Tam giác số ngược
//	int n;scanf("%d",&n);
//	int i,j;
//   	for ( i = n; i >= 1; i--) { 
//        for ( j = n; j >= n+1 - i; j--) {  
//            printf("%d ", j);
//        }
//        printf("\n"); 
//    }
//}

//*****************************************************************************
//        1
//      2 1
//    3 2 1
//  4 3 2 1
//5 4 3 2 1

//main(){
//	int n;scanf("%d",&n);
//	int i,j;
//	for(i=0;i<n;i++){
//		for(j=0;j<n-i-1;j++)	printf("  ");
//		for(j=i+1;j>0;j--)		printf("%d ",j);
//		printf("\n");
//	}
//}

//*****************************************************************************

//1 2 3 4 5
//  1 2 3 4
//    1 2 3
//      1 2
//        1


//main(){
//	int n;scanf("%d",&n);
//	int i,j;
//	for(i=0;i<n;i++){
//		for(j=0;j<i;j++)	printf("  ");
//		for(j=1;j<=n-i;j++)	printf("%d ",j);
//		printf("\n");
//	}
//}

//*****************************************************************************

//Tam giác cân - Isosceles triangle
//              1                    1 2 3 4 5 6 7 8 7 6 5 4 3 2 1
//            1 2 1                    1 2 3 4 5 6 7 6 5 4 3 2 1
//          1 2 3 2 1                    1 2 3 4 5 6 5 4 3 2 1
//        1 2 3 4 3 2 1                    1 2 3 4 5 4 3 2 1
//      1 2 3 4 5 4 3 2 1                    1 2 3 4 3 2 1
//    1 2 3 4 5 6 5 4 3 2 1                    1 2 3 2 1
//  1 2 3 4 5 6 7 6 5 4 3 2 1                    1 2 1
//1 2 3 4 5 6 7 8 7 6 5 4 3 2 1                    1


//main(){//Xuôi
//	int n;scanf("%d",&n);
//	int i,j;
//    for(i=0;i<n;i++) {
//		for(j=0;j<n-i-1;j++)printf("  ");
//		for(j=1;j<=i+1;j++)	printf("%d ",j);
//		for(j=i;j>0;j--)	printf("%d ",j);
//		printf("\n"); 
//    }
//}

//main(){//Ngược
//	int n;scanf("%d",&n);
//	int i,j;
//    for(i=0;i<n;i++) {
//		for(j=1;j<=i;j++)	printf("  ");
//		for(j=1;j<=n-i;j++)	printf("%d ",j);
//		for(j=n-i-1;j>0;j--)printf("%d ",j);
//		printf("\n"); 
//    }
//}
//-------------------------------------------------
//        1
//      1 2 3
//    1 2 3 4 5
//  1 2 3 4 5 6 7
//1 2 3 4 5 6 7 8 9

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int n;scanf("%d",&n);
	int i,j;
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
    for(i=0;i<n;i++) {
		for(j=0;j<n-i-1;j++)printf("  ");
		for(j=1;j<=2*i+1;j++)	printf("%d ",j);
		printf("\n"); 
    }

  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
//*****************************************************************************
//Tam Giác Đối Xứng - Symmetrical Triangle
//1                           1      1 2 3 4 5 6 7 8 7 6 5 4 3 2 1
//1 2                       2 1      1 2 3 4 5 6 7   7 6 5 4 3 2 1
//1 2 3                   3 2 1      1 2 3 4 5 6       6 5 4 3 2 1
//1 2 3 4               4 3 2 1      1 2 3 4 5           5 4 3 2 1
//1 2 3 4 5           5 4 3 2 1      1 2 3 4               4 3 2 1
//1 2 3 4 5 6       6 5 4 3 2 1      1 2 3                   3 2 1
//1 2 3 4 5 6 7   7 6 5 4 3 2 1      1 2                       2 1
//1 2 3 4 5 6 7 8 7 6 5 4 3 2 1      1                           1

//main(){
//	int n;scanf("%d",&n);
//	int i,j,tmp;
//	for(i=1;i<=n;i++){
//		for(j=1;j<=i;j++)			printf("%d ",j);
//		for(j=2*(n-i)-1;j>0;j--)	printf("  ");
//		for(j=(i==n)?i-1:i;j>=1;j--)printf("%d ",j);
//		printf("\n");
//	}
//}

//main(){//Ngược
//	int n;scanf("%d",&n);
//	int i,j;
//    for(i=n;i>=1;i--) {
//        for(j=1;j<=i;j++) 			printf("%d ", j);
//        for(j=2*(n-i)-1;j>0;j--) 	printf("  ");
//        for(j=(i==n)?i-1:i;j>=1;j--)printf("%d ",j);
//        printf("\n");
//    }
//}

//*****************************************************************************
//Tam Giác Pascal
//1                                      1
//1  1                                 1   1
//1  2  1                            1   2   1
//1  3  3  1                       1   3   3   1
//1  4  6  4  1                  1   4   6   4   1
//1  5 10 10  5  1             1   5  10  10   5   1
//1  6 15 20 15  6  1        1   6  15  20  15   6   1
// PascalTriangle1            	PascalTriangle2

//main(){//PascalTriangle1  
//	int n;scanf("%d",&n);
//	int i,j;
//	int kq=1;
//	for(i=1;i<=n;i++){
//		printf("1 ");
//		for(j=2; j<=i; j++){
//			kq=kq*(i-j+1)/(j-1);
//			printf("%2d ",kq);
//		}
//		printf("\n");
//	}
//}

//main(){//PascalTriangle2
//	int n;scanf("%d",&n);
//	int i,j,kq=1;
//	for ( i=1; i<=n; i++){
//		for ( j=n; j>i; j--)printf("  ");
//		printf("1 ");
//		for ( j=2; j<=i; j++){
//			kq=kq*(i-j+1)/(j-1);
//			printf("%3d ",kq);
//		}
//		printf("\n");
//	}
//}
//******************************************************************************
//                            1
//                        1   2   1
//                    1   2   4   2   1
//                1   2   4   8   4   2   1
//            1   2   4   8  16   8   4   2   1
//        1   2   4   8  16  32  16   8   4   2   1
//    1   2   4   8  16  32  64  32  16   8   4   2   1
//1   2   4   8  16  32  64 128  64  32  16   8   4   2   1
//                   PowerOf2Triangle

//main(){//PowerOf2Triangle
//	int n;scanf("%d",&n);
//	int i,j;
//	for(i=0;i<n;i++){
//		for(j=0;j<(n-i-1)*2;j++)printf("  ");
//		for(j=0;j<=i;j++)		printf("%3d ",(int)pow(2,j));//Tăng dần
//		for(j=i-1;j>=0;j--)		printf("%4d ",(int)pow(2,j));//Giảm dần
//		printf("\n");
//	}
//}
//*************************************************************************************
// Tam giác từ 0->9
//              1
//            2 3 2
//          3 4 5 4 3
//        4 5 6 7 6 5 4
//      5 6 7 8 9 8 7 6 5
//    6 7 8 9 0 1 0 9 8 7 6
//  7 8 9 0 1 2 3 2 1 0 9 8 7 
//8 9 0 1 2 3 4 5 4 3 2 1 0 9 8

//main(){
//	int n;scanf("%d",&n);
//	int i,j;	
//	for(i=0;i<n;i++){
//		for(j=0;j<n-i-1;j++)	printf("  ");
//		for(j=1;j<=i+1;j++){
//			if(i<5&&j<5)	printf("%d ",j+i);
//			else			printf("%d ",(i+j)%10);
//		}
//		for(j=i;j>0;j--){
//			if(i<5)		printf("%d ",j+i);
//			else		printf("%d ",(i+j)%10);
//			}printf("\n");
//		}
//}

//*************************************************************************************
//Tam Giác Kim tự tháp - Pyramid
//    1										1 2 3 4 5
//   1 2									 1 2 3 4
//  1 2 3									  1 2 3
// 1 2 3 4									   1 2
//1 2 3 4 5									    1

//main(){
//	int n;scanf("%d",&n);
//	int i,j;	
//    for( i = 1; i <= n; i++) {
//        for( j = 0; j < n - i; j++) printf(" ");
//        for( j = 1; j <= i; j++) printf("%d ", j);
//        printf("\n");
//    }
//}

//main(){//Ngược
//	int n;scanf("%d",&n);
//	int i,j;	
//    for( i = n; i >= 1; i--) {
//        for( j = 0; j < n - i; j++) printf(" ");
//        for( j = 1; j <= i; j++) printf("%d ", j);
//        printf("\n");
//    }
//}

//*************************************************************************************
//Tam giác Floyd
// 1
// 2  3
// 4  5  6
// 7  8  9 10
//11 12 13 14 15

//main(){
//	int n;scanf("%d",&n);
//	int i,j;	
//    int count = 1;
//    for( i = 1; i <= n; i++) {
//        for( j = 1; j <= i; j++) {
//            printf("%2d ", count++);
//        }
//        printf("\n");
//    }
//}
//*************************************************************************************
//Tam Giác bằng số nguyên tố
// 2
// 3  5
// 7 11 13
//17 19 23 29
//31 37 41 43 47
//int isPrime(int n) {
//    if (n < 2) return 0;
//    for (int i = 2; i * i <= n; i++) {
//        if (n % i == 0) return 0;
//    }return 1;
//}
//
//main() {
//    int i, j, n = 2;
//    for (i = 1; i <= 5; i++) {
//        for (j = 1; j <= i; j++) {
//            while (!isPrime(n)) n++;
//            printf("%2d ", n++);
//        }
//        printf("\n");
//    }
//}
//****************************************************************
((tự kiếm hàm check để thay như fibo,armstrong,hoàn hảo,đối xứng,đảo,chẵn lẻ))
//2
//3 5
//7 11 13
//17 19 23 29
//31 37 41 43 47
//53 59 61 67 71 73

#define MAXN 1000
int checkprime(int n){
    int i;
    if (n < 2) return 0;
    for (i = 2; i <= sqrt(n); ++i)
        if (n % i == 0) return 0;
    return 1;
}
int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int n, i, sum = 0, snt[MAXN], k;scanf("%d", &n);
    int dem = 0;
    int j = 2;
    int pos = 0;
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
    for (i = 1; i <= n; ++i)sum += i;
    while (dem < sum){
        if (checkprime(j)){
            snt[dem++] = j;
        }
        j++;
    }
    for (i = 1; i <= n; i++){
        for (k = 0; k < i; ++k){
            printf("%d ", snt[pos]);
            pos++;
        }
        printf("\n");
    }
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}

//*************************************************************************************
//Hình chữ nhật số - Number Rectangle
//1 1 1 1 1
//2 2 2 2 2
//3 3 3 3 3
//4 4 4 4 4
//5 5 5 5 5

//main(){
//	int n;scanf("%d",&n);
//	int i,j;	
//    for( i = 1; i <= n; i++) {
//        for( j = 1; j <= n; j++) {
//            printf("%d ", i);
//        }
//        printf("\n");
//    }
//}

//--------------------------------------------------------
//11 12 13 14 15 16 17 18
//19 20 21 22 23 24 25 26
//27 28 29 30 31 32 33 34
//35 36 37 38 39 40 41 42
//43 44 45 46 47 48 49 50
//51 52 53 54 55

//main(){//Cách 1:Dùng 2 vòng for lồng nhau
//	//Input
//	int m,n,c;scanf("%d%d%d",&m,&n,&c);
//	int i,j;
//	//Output
//	for(i=0;i<c;i++){
//		for(j=0;j<c;j++){
//			printf("%d ",m);
//			m++;
//			if(m>n){
//				break;
//			}
//		}
//		if(m>n){
//			break;
//		}
//		printf("\n");
//	}
//}
//*************************************************************************************
//Hình vuông rỗng số - hollow square number
//1 1 1 1 1				1 1 1 1 1
//1       1				2       2
//1       1				3       3
//1       1				4       4
//1 1 1 1 1				5 5 5 5 5

//main(){
//	int n;scanf("%d",&n);
//	int i,j;
//    for( i = 1; i <= n; i++) {
//        for( j = 1; j <= n; j++) {
//            if(i == 1 || i == n || j == 1 || j == n) printf("1 ");
//            else printf("  ");
//        }
//        printf("\n");
//    }
//}

//main() {
//	int n;scanf("%d",&n);
//    int i, j;
//    for (i = 1; i <= n; i++) {
//        for (j = 1; j <= n; j++) {
//            if (i == 1 || i == n || j == 1 || j == n)
//                printf("%d ", i);
//            else
//                printf("  ");
//        }
//        printf("\n");
//    }
//}

//*************************************************************************************
//kim cương số - Diamond
//    1
//   1 2
//  1 2 3
// 1 2 3 4
//1 2 3 4 5
// 1 2 3 4
//  1 2 3
//   1 2
//    1

//main(){
//	int n;scanf("%d",&n);
//	int i,j;
//    for ( i = 1; i <= n; i++) {
//        for ( j = 0; j < n - i; j++) printf(" ");
//        for ( j = 1; j <= i; j++) printf("%d ", j);
//        printf("\n");
//    }
//    for ( i = n - 1; i >= 1; i--) {
//        for ( j = 0; j < n - i; j++) printf(" ");
//        for ( j = 1; j <= i; j++) printf("%d ", j);
//        printf("\n");
//    }
//}
//*****************************************************************************
//Hình thoi rỗng - Hollow Diamond
//    1
//   1 2
//  1   3
// 1     4
//1       5
// 1     4
//  1   3
//   1 2
//    1

//main() {
//    int i, j, k, n;scanf("%d", &n);
//    for (i = 1; i <= n; i++) {
//        for (j = 0; j < n - i; j++) printf(" "); // In khoảng trắng bên trái
//        for (j = 1; j <= i; j++) {
//            if (j == 1 || j == i) // Chỉ in số ở viền
//                printf("%d ", j);
//            else
//                printf("  "); // Khoảng trắng bên trong
//        }
//        printf("\n");
//    }   
//    for (i = n - 1; i >= 1; i--) {// Phần dưới của hình thoi
//        for (j = 0; j < n - i; j++) printf(" "); // In khoảng trắng bên trái
//        for (j = 1; j <= i; j++) {
//            if (j == 1 || j == i) // Chỉ in số ở viền
//                printf("%d ", j);
//            else
//                printf("  "); // Khoảng trắng bên trong
//        }
//        printf("\n");
//    }
//}


//*************************************************************************************
//Tam giác cân rỗng - Hollow isosceles triangle
//    1							5 5 5 5 5	
//   2 2						 4     4	
//  3   3						  3   3
// 4     4						   2 2
//5 5 5 5 5						    1	

//main(){
//	int n;scanf("%d",&n);
//	int i,j;
//    for ( i = 1; i <= n; i++) {
//        for ( j = 1; j <= n - i; j++) {// In khoảng trắng trước mỗi hàng
//            printf(" ");
//        }
//        if (i == n) {// In số và khoảng trắng giữa các số
//            for ( j = 1; j <= n; j++) {// Hàng cuối cùng in toàn bộ số 5
//                printf("%d ", i);
//            }
//        } else {
//            printf("%d", i);// In số đầu tiên
//            for ( j = 1; j <= 2 * (i - 1) - 1; j++) {// In khoảng trắng giữa các số
//                printf(" ");
//            }
//            if (i != 1) {
//                printf("%d", i);
//            }
//        }printf("\n");
//    }
//}
//*************************************************************************************
//Hình vuông bằng binary 

//10101								0 1 0 1 0
//01010								1		1
//10101								0		0
//01010								1		1
//10101								0 1 0 1 0

//main() {
//   	int n,i,j;scanf("%d",&n);
//	for(i=1;i<=n;i++){
//		for(j=1;j<=n;j++){
//			if((i+j)%2==0)	printf("1");
//			else			printf("0");	
//		}printf("\n");
//	}
//}

//main() {
//    int n,i,j;scanf("%d",&n);
//    for (i = 1; i <= n; i++) {
//        for (j = 1; j <= n; j++) {
//            if (i == 1 || i == n || j == 1 || j == n)
//                printf("%d ", (i + j) % 2);
//            else
//                printf("  ");
//        }
//        printf("\n");
//    }
//}

//*************************************************************************************
// hình vuông số xoắn ốc (đồng tâm)
//555555555
//544444445
//543333345
//543222345
//543212345
//543222345
//543333345
//544444445
//555555555
//int min(int a, int b){
//	if(a<b) return a;
//	return b;
//}
//int main(){
//	int i,j,n;
//	scanf("%d",&n);
//	for(i=1;i<=2*n-1;i++){
//		for(j=1;j<=2*n-1;j++){
//			int min_dis=min(min(i-1,2*n-i-1), min(j-1,2*n-j-1));
//			printf("%d",n-min_dis);
//		}
//		printf("\n");
//	}
//}
//*************************************************************************************
//Hình tam giác bằng binary
//1											1 0 1 0 1
//01										1 0 1 0
//101										1 0 1
//0101										1 0
//10101										1
//main() {
//   	int n,i,j;scanf("%d",&n);
//   	int a0=1,a;
//	for (i=1;i<=n;i++){
//		a=a0;
//		for(j=1; j<=i; j++){
//			printf("%d",a); 
//			printf(""); 
//			a=!a;
//		}
//		printf("\n");
//		a0=!a0;
//	}
//}

//main() {
//    int n,i,j;scanf("%d",&n);
//    for (i = n; i >= 1; i--) {
//        for (j = 1; j <= i; j++) {
//            printf("%d ", j % 2);
//        }
//        printf("\n");
//    }
//}
//*************************************************************************************
//Tam giác cân đặc 
//    1
//   101
//  10101
// 1010101
//101010101
//main() {
//    int n,i,j;scanf("%d",&n);
//    for (i = 1; i <= n; i++) {
//        for (j = 1; j <= n - i; j++) {
//            printf(" "); // Khoảng trắng bên trái
//        }
//        for (j = 1; j <= 2 * i - 1; j++) {
//            printf("%d", j % 2); // In 0 hoặc 1
//        }
//        printf("\n");
//    }
//}
//*************************************************************************************
//Tam giác cân rỗng
//    1
//   1 1
//  1   1
// 1     1
//101010101
//main() {
//    int n,i,j;scanf("%d",&n);
//    for (i = 1; i <= n; i++) {
//        for (j = 1; j <= n - i; j++) {
//            printf(" "); // Khoảng trắng bên trái
//        }
//        for (j = 1; j <= 2 * i - 1; j++) {
//            if (j == 1 || j == 2 * i - 1 || i == n)
//                printf("%d", j % 2); // In viền
//            else
//                printf(" "); // Khoảng trắng bên trong
//        }
//        printf("\n");
//    }
//}
//*************************************************************************************
//Hình thoi đặc
//    1
//   101
//  10101
// 1010101
//101010101
// 1010101
//  10101
//   101
//    1
//main() {
//    int n,i,j;scanf("%d",&n);
//    for (i = 1; i <= n; i++) {
//        for (j = 1; j <= n - i; j++) {
//            printf(" ");
//        }
//        for (j = 1; j <= 2 * i - 1; j++) {
//            printf("%d", j % 2);
//        }
//        printf("\n");
//    }
//    for (i = n - 1; i >= 1; i--) {
//        for (j = 1; j <= n - i; j++) {
//            printf(" ");
//        }
//        for (j = 1; j <= 2 * i - 1; j++) {
//            printf("%d", j % 2);
//        }
//        printf("\n");
//    }
//}
//*************************************************************************************
//Hình thoi rỗng
//    1
//   1 1
//  1   1
// 1     1
//1       1
// 1     1
//  1   1
//   1 1
//    1
//main() {
//    int n,i,j;scanf("%d",&n);
//    for (i = 1; i <= n; i++) {
//        for (j = 1; j <= n - i; j++) {
//            printf(" ");
//        }
//        for (j = 1; j <= 2 * i - 1; j++) {
//            if (j == 1 || j == 2 * i - 1)
//                printf("%d", j % 2);
//            else
//                printf(" ");
//        }
//        printf("\n");
//    }
//    for (i = n - 1; i >= 1; i--) {
//        for (j = 1; j <= n - i; j++) {
//            printf(" ");
//        }
//        for (j = 1; j <= 2 * i - 1; j++) {
//            if (j == 1 || j == 2 * i - 1)
//                printf("%d", j % 2);
//            else
//                printf(" ");
//        }
//        printf("\n");
//    }
//}

//*************************************************************************************
//Tam giác tăng dần
//0
//1 0
//0 1 0
//1 0 1 0
//0 1 0 1 0
//main() {
//    int n,i,j;scanf("%d",&n);
//   for (i = 1; i <= n; i++) {
//        for (j = 1; j <= i; j++) {
//            printf("%d ", (i + j) % 2); // In 0 hoặc 1
//        }
//        printf("\n");
//    }
//}
//*************************************************************************************
//Tam giác giảm dần
//0 1 0 1 0
//1 0 1 0
//0 1 0
//1 0
//0
//main() {
//    int n,i,j;scanf("%d",&n);
//    for (i = n; i >= 1; i--) {
//        for (j = 1; j <= i; j++) {
//            printf("%d ", (i + j) % 2); // In 0 hoặc 1
//        }
//        printf("\n");
//    }
//}
//*************************************************************************************
//Tam giác binary số nguyên tố
//0
//1 1
//1 1 1
//1 1 1 1
//1 1 1 1 1
//int isPrime(int n) {//Thay hàm check
//	int i;
//    if (n < 2) return 0;
//    for ( i = 2; i * i <= n; i++) {
//        if (n % i == 0) return 0;
//    }return 1;
//}
//main() {
//    int n,i,j;scanf("%d",&n);
//    int num = 2;
//    for (i = 1; i <= n; i++) {
//        for (j = 1; j <= i; j++) {
//            while (!isPrime(num)) num++;
//            printf("%d ", num % 2); // In binary của số nguyên tố
//            num++;
//        }
//        printf("\n");
//    }
//}