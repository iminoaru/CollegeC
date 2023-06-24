// Program to add 2 matrix entered by the user

#include <stdio.h>

int main() {
  int rows, cols;

  printf("Enter the number of rows: ");
  scanf("%d", &rows);

  printf("Enter the number of columns: ");
  scanf("%d", &cols);

  int matrix1[rows][cols];
  int matrix2[rows][cols];
  int sum[rows][cols];

  printf("Enter the values for matrix 1:\n");
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      scanf("%d", &matrix1[i][j]);
    }
  }

  printf("Enter the values for matrix 2:\n");
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      scanf("%d", &matrix2[i][j]);
    }
  }

  //sum
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      sum[i][j] = matrix1[i][j] + matrix2[i][j];
    }
  }

  printf("\nSum:\n");
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      printf("%d ", sum[i][j]);
    }
    printf("\n");
  }

  return 0;
}
