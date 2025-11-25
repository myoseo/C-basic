/* 대입 연산자 */
#include<stdio.h>

int main(){
    int a,b,c,d;
    a=1;
    b=1;
    c=1;
    d=1;
    a = a+1;
    b += 1;
    c++;
    printf("%d\n", d++);
    printf("%d\n", a);
    printf("%d\n", b); //복합 대입연산
    printf("%d\n", c); //증감 연산자(전위형)
    printf("%d\n", d); //증감 연산자(후위형)

    //비트연산자
    int e = 0xAF; // 10101111
    int f = 0xB5; // 10110101
    printf("%x \n", e & f); // a & b = 10100101
    printf("%x \n", e | f); // a | b =10111111
    printf("%x \n", e ^ f); // a ^ b = 00011010
    printf("%x \n", ~e); // ~a = 1....1 01010000
    printf("%x \n", e << 2); // a << 2 = 1010111100
    printf("%x \n", e >> 3); // b >> 3 = 00010110
    return 0;
}