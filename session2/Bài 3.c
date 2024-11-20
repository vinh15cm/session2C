#include <stdio.h>

int main() {
    int num1 = 15;
    int num2 = 20;

    int sum = num1 + num2;
    int difference = num1 - num2;
    int product = num1 * num2;
    float quotient;

    if (num2 != 0) {
        quotient = (float)num1 / num2;
    } else {
        printf("Loi: Khong the chia cho 0.\n");
        return 1;
    }

    printf("So thu nhat: %d\n", num1);
    printf("So thu hai: %d\n", num2);
    printf("Tong cua hai so la: %d\n", sum);
    printf("Hieu cua hai so la: %d\n", difference);
    printf("Tich cua hai so la: %d\n", product);
    printf("Thuong cua hai so la: %.2f\n", quotient);

    return 0;
}

