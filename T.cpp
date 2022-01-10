#include <stdio.h>

int ct=0;
void t(int n, char A, char B, char C) {
    if(n == 1) {
    	ct++;
        printf("%3d:%c -> %c:%c\n",ct, A, C, B);
    }
    else {
        t(n-1, A, C, B);
        t(1, A, B, C);
        t(n-1, B, A, C);
    }
}

int main() {
    int n;
    scanf("%d", &n);
    t(n, 'A', 'B', 'C');
    return 0;
} 
