//조건문2
#include<stdio.h>
int main(){
    int num;
    printf("아무 숫자나 입력해 보세요 : ");
    scanf("%d", &num);
    if (num == 7) {
    printf("행운의 숫자 7 이군요!\n");
    } else {
    printf("그냥 보통 숫자인 %d 를 입력했군요\n", num);
    }
    //else if
    printf("아무 숫자나 입력해 보세요 : ");
    scanf("%d", &num);
    if (num == 7) {
    printf("행운의 숫자 7 이군요!\n");
    } else if (num == 4) {
    printf("죽음의 숫자 4 인가요 ;;; \n");
    } else {
    printf("그냥 평범한 숫자 %d \n", num);
    }
    // 점수 평균
    float ave_score;
    float math, english, science, programming;
    printf("수학, 영어, 과학, 컴퓨터 프로그래밍 점수를 각각 입력해 주세요 ! : ");
    scanf("%f %f %f %f", &math, &english, &science, &programming);
    ave_score =
    (math + english + science + programming) / 4; // 4 과목의 평균을 구한다.
    printf("당신의 평균 점수는 %f 입니다 \n", ave_score);
    if (ave_score >= 90) {
    printf("당신은 우등생 입니다. ");
    } else if (ave_score >= 30) {
    printf("조금만 노력하세요!. \n");
    } else {
    printf("공부를 발로 합니까? \n");
    }

    return 0;
}