#include <stdio.h> // transpose1
#define SIZE 3
int main() {
  int ar[][SIZE] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };  
  int i, j, temp;
  printf("Matrix:\n");
  for (i=0; i<SIZE; i++)
    for (j=0; j<SIZE; j++)
      printf("%d %s", ar[i][j], j==SIZE-1? "\n" : "");
  for (i=1; i<SIZE; i++)
    for (j=0; j<i; j++) {
      temp = ar[i][j];
      ar[i][j]=ar[j][i];
      ar[j][i]=temp;
    }
  printf("Transpose:\n");
  for (i=0; i<SIZE; i++)
    for (j=0; j<SIZE; j++)
      printf("%d %s", ar[i][j], j==SIZE-1? "\n" : "");
  return 0;
}
