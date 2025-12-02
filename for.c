//반복문
#include<stdio.h>
int main(){
    int i;
    for (i = 0; i < 20; i++) {
    printf("숫자 : %d \n", i);
    }
    //합
    int j, sum = 0;
    for (j = 0; j < 20; ++j) {
    sum = sum + j;
    }
    printf("1 부터 19 까지의 합 : %d", sum);
    //과목 평균 구하기
    int sub, N;
    double Sum = 0;
    printf("몇 개의 과목 점수를 입력 받을 것인가요?");
    scanf("%d", &sub);
    printf("\n 각 과목의 점수를 입력해 주세요 \n");
    for(int i = 0; i<sub; i++){
        printf("과목 %d : ", i);
        scanf("%d", &N);
        Sum += N;
    }
    printf("전체 과목의 평균은 : %.2f \n", Sum/sub);

    return 0;
}