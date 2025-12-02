//반복문 과제
#include<stdio.h>
int main(void)
{
    //1
	int a;
	int b;
	int c;
    int N;
    scanf("%d", &N);
	for (a = 0; a < N; a++) 
	{
		for (b=a; b <= N-1; b++) {
			printf(" ");
		}
		for (c = 0; c <=(a*2); c++) {
			printf("*");
		}
		printf("\n");
	}
    //2
    //2
    int a;
	int b;
	int c;
    int N;
    scanf("%d", &N);
	for (a = 0; a < N; a++) 
	{
        for (c = 0; c < a; c++) {
			printf(" ");
		}
		for (b=a; b < 2* N- a-1; b++) {
			printf("*");
		}
		
		printf("\n");
	}

	return 0;
}
