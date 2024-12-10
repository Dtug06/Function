#include <stdio.h>

// Khai bao ham kiem tra so hoan hao
int isPerfectNumber(int num) {
    int sum = 0;
    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    return (sum == num) ? 1 : 0;
}

int main() {
    int num1, num2;

    printf("Nhap num1: ");
    scanf("%d", &num1);
    if (isPerfectNumber(num1)) {
        printf("num1 la so hoan hao\n");
    } else {
        printf("num1 khong phai la so hoan hao\n");
    }

    printf("Nhap num2: ");
    scanf("%d", &num2);
    if (isPerfectNumber(num2)) {
        printf("num2 la so hoan hao\n");
    } else {
        printf("num2 khong phai la so hoan hao\n");
    }

    return 0;
}

