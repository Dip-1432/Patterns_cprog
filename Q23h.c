/*
      1
    1 3 1
  1 3 5 3 1
1 3 5 7 5 3 1
  1 3 5 3 1
    1 3 1 
      1
*/
#include <stdio.h>

int main() {
    printf("\033[32;1m");  // ANSI codes for green color and bold
    int n;
    printf("Enter the number of rows:\n");
    scanf("%d", &n);

    for (int i = 1; i < n * 2; ++i) {
        int limit = (i <= n) ? i : (n * 2 - i);
        //FOR SPACES
        for (int k = n; k > limit; --k) {
            printf("  ");
        }
        //FOR RIGHT TRIANGLES
        for (int j = 1; j <= limit; ++j) {
            printf("%d ", j*2-1);
        }
        //FOR LEFT TRIANGLES
        for (int j = limit - 1; j >= 1; --j) {
            printf("%d ", j*2-1);
        }
        printf("\n");
    }

    return 0;
}