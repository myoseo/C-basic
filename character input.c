//문자 입력받기
#include <stdio.h>
int main(){
    //아스키 코드값 확인
    char a;
    a = 'a';
    printf("a 의 값과 들어 있는 문자는? 값 : %d , 문자 : %c \n", a, a);

    //섭씨온도를 화씨로 바꾸기(입력)
    double celsius;
    printf("섭씨 온도를 화씨 온도로 바꿔주는 프로그램 입니다.");
    printf("섭씨 온도를 입력해 주세요 : ");
    scanf("%lf", &celsius);
    printf("섭씨 %f 도는 화씨로 %f 도 입니다 \n", celsius, 9 * celsius / 5 + 32);
    // scanf 총 정리
    char ch; // 문자
    short sh; // 정수
    int i;
    long lo;
    float fl; // 실수
    double du;
    printf("char 형 변수 입력 : ");
    scanf(" %c", &ch);//개행문자 처리
    printf("short 형 변수 입력 : ");
    scanf("%hd", &sh);
    printf("int 형 변수 입력 : ");
    scanf("%d", &i);
    printf("long 형 변수 입력 : ");
    scanf("%ld", &lo);
    printf("float 형 변수 입력 : ");
    scanf("%f", &fl);
    printf("double 형 변수 입력 : ");
    scanf("%lf", &du);
    printf("char : %c , short : %d , int : %d ", ch, sh, i);
    printf("long : %ld , float : %f, double : %f \n", lo, fl, du);
    return 0;
}