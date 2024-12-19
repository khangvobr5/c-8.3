#include <stdio.h>

int main() {
    int n, i, j;
    printf("Nhap kich thuoc ma tran vuong: ");
    scanf("%d", &n);
    int matrix[n][n];
    printf("Nhap cac phan tu cua ma tran:\n");
    for (i = 0; i < n; ++i) {
        for (j = 0; j < n; ++j) {
            printf("Phan tu tai dong %d, cot %d: ", i+1, j+1);
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("Ma tran vua nhap la:\n");
    for (i = 0; i < n; ++i) {
        for (j = 0; j < n; ++j) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}
