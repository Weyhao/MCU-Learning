#include <stdio.h>

#define MAX 10   // 最大矩阵维度

// 打印矩阵
void printMatrix(int rows, int cols, int matrix[MAX][MAX]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

// 输入矩阵
void inputMatrix(int rows, int cols, int matrix[MAX][MAX]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

// 矩阵加法
void addMatrix(int rows, int cols, int A[MAX][MAX], int B[MAX][MAX], int result[MAX][MAX]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = A[i][j] + B[i][j];
        }
    }
}

// 矩阵减法
void subMatrix(int rows, int cols, int A[MAX][MAX], int B[MAX][MAX], int result[MAX][MAX]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = A[i][j] - B[i][j];
        }
    }
}

// 矩阵乘法
void mulMatrix(int r1, int c1, int A[MAX][MAX], int r2, int c2, int B[MAX][MAX], int result[MAX][MAX]) {
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < c1; k++) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

int main() {
    int r1, c1, r2, c2;
    int A[MAX][MAX], B[MAX][MAX], result[MAX][MAX];

    // 输入矩阵 A
    printf("请输入矩阵A的行和列：");
    scanf("%d %d", &r1, &c1);
    printf("请输入矩阵A：\n");
    inputMatrix(r1, c1, A);

    // 输入矩阵 B
    printf("请输入矩阵B的行和列：");
    scanf("%d %d", &r2, &c2);
    printf("请输入矩阵B：\n");
    inputMatrix(r2, c2, B);

    // 打印矩阵
    printf("矩阵A：\n");
    printMatrix(r1, c1, A);
    printf("矩阵B：\n");
    printMatrix(r2, c2, B);

    // 矩阵加法、减法（要求维度相同）
    if (r1 == r2 && c1 == c2) {
        printf("矩阵A+B：\n");
        addMatrix(r1, c1, A, B, result);
        printMatrix(r1, c1, result);

        printf("矩阵A-B：\n");
        subMatrix(r1, c1, A, B, result);
        printMatrix(r1, c1, result);
    } else {
        printf("矩阵A和B的行列数不同，不能做加法和减法！\n");
    }

    // 矩阵乘法（要求 A 的列数 = B 的行数）
    if (c1 == r2) {
        printf("矩阵A*B：\n");
        mulMatrix(r1, c1, A, r2, c2, B, result);
        printMatrix(r1, c2, result);
    } else {
        printf("矩阵A的列数不等于矩阵B的行数，不能做乘法！\n");
    }

    return 0;
}