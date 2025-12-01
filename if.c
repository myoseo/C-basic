//조건문
#include<stdio.h>
int main(){
    int num;
    printf("입력하고 싶은 숫자를 입력하세요! : ");
    scanf("%d", &num);
    if (num == 7){
        printf("당신은 행운의 숫자 7 을 입력했습니다.");
    }
    //나눗셈 예제
    double I, J;
    printf("나누고 싶은 두 정수를 입력하세요 : ");
    scanf("%lf %lf", &I, &J);
    if (J == 0) {
        printf("0 으로 나눌 수 없습니다. \n");
        return 0;
    }
    printf("%f 를 %f 로 나눈 결과는 : %f \n", I, J, I/J);
    //합격 불합격
    int score;
    printf("당신의 수학점수를 입력하세요! : ");
    scanf("%d", &score);
    if (score >= 90) {
    printf("당신은 합격입니다! \n");
    }
    if (score < 90) {
    printf("당신은 불합격 입니다! \n");
    }
    
    //크기 비교
    int i, j;
    printf("크기를 비교할 두 수를 입력해 주세요 : ");
    scanf("%d %d", &i, &j);
    if (i > j) // i 가 j 보다 크면
    {
    printf("%d 는 %d 보다 큽니다 \n", i, j);
    }
    if (i < j) // i 가 j 보다 작으면
    {
    printf("%d 는 %d 보다 작습니다 \n", i, j);
    }
    if (i >= j) // i 가 j 보다 크거나 같으면
    {
    printf("%d 는 %d 보다 크거나 같습니다 \n", i, j);
    }
    if (i <= j) // i 가 j 보다 작거나 같으면
    {
    printf("%d 는 %d 보다 작거나 같습니다 \n", i, j);
    }
    if (i == j) // i 와 j 가 같으면
    {
    printf("%d 는 %d 와(과) 같습니다 \n", i, j);
    }
    if (i != j) // i 와 j 가 다르면
    {
    printf("%d 는 %d 와(과) 다릅니다 \n", i, j);
    }
    return 0;
}