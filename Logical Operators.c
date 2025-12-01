//논리 연산자
#include<stdio.h>   
int main(){
    //and
    int a;
    printf("아무 숫자나 입력하세요 : ");
    scanf("%d", &a);
    if (a >= 10 && a < 20) {
    printf(" %d 는 10 이상, 20 미만인 수 입니다. \n", a);
    }
    //or
    int height, weight;
    printf("당신의 키와 몸무게를 각각 입력해 주세요 : ");
    scanf("%d %d", &height, &weight);
    if (height >= 190 || weight >= 100) {
    printf("당신은 '거구' 입니다. \n");
    }
    //부정
    if (!(height >= 190 || weight >= 100)) {
    printf("당신은 거구가 아닙니다. \n");
    }

    return 0;
}