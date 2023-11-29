#include <stdio.h>

void swapWithPointers(int *x, int *y)
    {
    int temp = *x;
    *x = *y;
    *y = temp;
    }

 void swapWithoutPointers(int x, int y)

 {
    int temp = x;
    x = y;
    y = temp;
    }

int main() {
    int num1, num2;
    scanf("%d%d", &num1,&num2);
    swapWithPointers(&num1, &num2);
    printf("\nValues after swapping using pointers:\n");
    printf("num1: %d\n", num1);
    printf("num2: %d\n", num2);
    swapWithoutPointers(num1, num2);
    printf("\nValues after swapping without using pointers:\n");
    printf("num1: %d\n", num1);
    printf("num2: %d\n", num2);

    return 0;
}
