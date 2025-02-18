#include <stdio.h>
#define ROWS 3
#define COLS 3
void addMatrices(int first[ROWS][COLS], int second[ROWS][COLS], int result[ROWS][COLS]) {
for (int i = 0; i < ROWS; i++) {
for (int j = 0; j < COLS; j++) {
result[i][j] = first[i][j] + second[i][j];
}
}
}
void printMatrix(int matrix[ROWS][COLS]) {
for (int i = 0; i < ROWS; i++) {
for (int j = 0; j < COLS; j++) {
printf("%d ", matrix[i][j]);
}
printf("\n");
}
}
int main() {
int first[ROWS][COLS] = {
{1, 2, 3},
{4, 5, 6},
{7, 8, 9}
};
int second[ROWS][COLS] = {
{9, 8, 7},
{6, 5, 4},
{3, 2, 1}
};
int result[ROWS][COLS];
addMatrices(first, second, result);
printf("Resultant Matrix after addition:\n");
printMatrix(result);
return 0;
}
