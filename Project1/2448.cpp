/*

문제

예제를 보고 별찍는 규칙을 유추한 뒤에 별을 찍어 보세요.
입력

첫째 줄에 N이 주어진다. N은 항상 3*2^k 수이다. (3, 6, 12, 24, 48, ...) (k<=10)
출력

첫째 줄부터 N번째 줄까지 별을 출력한다.
예제 입력

24

예제 출력

                       *
                      * *
                     *****
                    *     *
                   * *   * *
                  ***** *****
		         *           *
			    * *         * *
	           *****       *****
	          *     *     *     *
	         * *   * *   * *   * *
		    ***** ***** ***** *****
		   *                       *
		  * *                     * *
		 *****                   *****
		*     *                 *     *
	   * *   * *               * *   * *
      ***** *****             ***** *****
     *           *           *           *   
    * *         * *         * *         * *
   *****       *****       *****       *****
  *     *     *     *     *     *     *     *
 * *   * *   * *   * *   * *   * *   * *   * *
***** ***** ***** ***** ***** ***** ***** *****


*
* *
*****
*     *
* *   * *
***** *****
*           *
* *         * *
*****       *****
*     *     *     *
* *   * *   * *   * *
***** ***** ***** *****
*                       *
* *                     * *
*****                   *****
*     *                 *     *
* *   * *               * *   * *
***** *****             ***** *****
*           *           *           *
* *         * *         * *         * *
*****       *****       *****       *****
*     *     *     *     *     *     *     *
* *   * *   * *   * *   * *   * *   * *   * *
***** ***** ***** ***** ***** ***** ***** *****
https://www.acmicpc.net/problem/2448
//
*/
#include <stdio.h>

char arr[1000][1000];
//int x = 0;
int z = 0;
void abc(int numx, int x) {

    arr[x][numx - 1] = '*';
    arr[1 + x][numx - 2] = '*';
    arr[1 + x][numx] = '*';
    arr[2 + x][numx + 1] = '*';
    arr[2 + x][numx] = '*';
    arr[2 + x][numx - 1] = '*';
    arr[2 + x][numx - 2] = '*';
    arr[2 + x][numx - 3] = '*';
    if (z<8) {
        z++;
        abc(numx + 3, 3);
        abc(numx - 3, 3);
    }

}

int main(void) {
    int a = 0;
    int b = 0;
    scanf("%d", &a);

    for (int i = 0; i<1000; i++) {
        for (int j = 0; j<1000; j++) {
            arr[i][j] = ' ';
        }

    }
    abc(a, 0);
    for (int i = 0; i<48; i++) {
        for (int j = 0; j<48; j++) {
            printf("%c", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
