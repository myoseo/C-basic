//변수
#include <stdio.h>
int main(){
    int a;
    float b;
    double c;
    a = 10;
    //f붙이는거는 float인것을 알리기 위해
    b = 10.123456f;
    c = 10.123456;
    printf("a의 값은 : %d \n", a);
    printf("a의 %d진수 값은 : %o \n", 8, a);
    printf("a의 %d진수 값은 : %x \n", 16, a);
    printf("b의 값은 : %f \n", b);
    printf("c의 값은 : %f \n", c);
    printf("a의 값은 : %f \n", 1.0);
    printf("b의 값은 : %.2f \n", b);
    printf("a의 값은 : %5d \n", a);
    printf("c의 값은 : %6.3f \n", c);
    return 0;
}