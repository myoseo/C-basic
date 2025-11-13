/* 산술 연산 */
#include <stdio.h>
int main() {
    int a, b;
    a = 10;
    b = 3;
    double c = 3;
    printf("a + b 는 : %d \n", a + b);
    printf("a - b 는 : %d \n", a - b);
    printf("a * b 는 : %d \n", a * b);
    printf("a / b 는 : %d \n", a / b);
    printf("a %% b 는 : %d \n", a % b);
    printf("a / c 는 : %f \n", a / c);
    printf("c / a 는 : %f \n", c / a);
    printf("++a : %d \n", ++a);
    a = 10;
    printf("a++ : %d \n", a++);
    printf("a : %d \n", a);
    return 0;
}