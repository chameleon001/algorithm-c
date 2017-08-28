/*


대학생 새내기들의 90%는 자신이 반에서 평균은 넘는다고 생각한다. 당신은 그들에게 슬픈 진실을 알려줘야 한다.
입력

첫째 줄에는 테스트케이스 C가 주어진다.

둘째 줄부터 각 테스트케이스 마다 첫 수로 정수 N(1 <= N <= 1000)명의 학생이 주어지고 그 다음으로 N명의 0부터 100 사이의 점수가 이어서 주어진다.
출력

각 케이스마다 한줄씩 평균을 넘는 학생들의 비율을 소수점 넷째자리에서 반올림하여 출력한다.
예제 입력

5
5 50 50 70 80 100
7 100 95 90 80 70 60 50
3 70 90 80
3 70 90 81
9 100 99 98 97 96 95 94 93 91

예제 출력

40.000%
57.143%
33.333%
66.667%
55.556%
*/

#include<stdio.h>

int main() {
	int t_c, N, i, j, k, score[1001] = { 0, };



	scanf("%d", &t_c);



	for (i = 0; i < t_c; i++) {



		int sum = 0, cnt = 0;

		double avg = 0.0;



		scanf("%d", &N);


		for (j = 0; j < N; j++) {



			scanf("%d", &score[j]);

			sum += score[j];

		}



		avg = (double)sum / (double)N; // 반 평균



		for (k = 0; k < N; k++) {



			if (avg < score[k])

				cnt++;

		}



		avg = (double)cnt / (double)N;



		printf("%.3lf%\n", avg * 100);

	}

}