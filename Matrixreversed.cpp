#include <stdio.h>

int main() {
    int m,n;
    printf("How many rows?\n");
    scanf("%d",&m);
    printf("\n");
    printf("How many columns?\n");
    scanf("%d",&n);
    printf("\n");
	int A[m+1][n+1],B[m+1][n+1];
    int i, j, k;
    printf("Please put each value of the matrix: \n");
    for (i =1 ; i<= m; i++) {
        for(j=1;j<=n;j++) {
            scanf("%d",&A[i][j]);
        }
    }/*end for*/

    for (i =1 ; i<= m; i++) {
        for(j=1;j<=n;j++) {
           B[i][j]=A[i][j];
        }
    }/*end for*/
    
	for (i =1 ; i<= m; i++) {
        for(j=1;j<=n;j++) {
           A[j][i]=B[i][j];
        }
    }/*end for*/
    
    printf("Please find your original matrix as following:\n");
	for (i =1 ; i<= m; i++) {
        for(j=1;j<=n;j++) {
           printf("%d",B[i][j]);
        }
        printf("\n");
    }/*end for*/
     printf("Please find the matrix reversed as following:\n");   
    for (i =1 ; i<=n; i++) {
        for(j=1;j<=m;j++) {
           printf("%d",A[i][j]);
        }
        printf("\n");
    }/*end for*/
    return 0;
}
