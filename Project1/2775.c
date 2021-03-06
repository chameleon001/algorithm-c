/*

평소 반상회에 참석하는 것을 좋아하는 주희는 이번 기회에 부녀회장이 되고 싶어 각 층의 사람들을 불러 모아 반상회를 주최하려고 한다.

이 아파트에 거주를 하려면 조건이 있는데, “a 층의 b 호에 살려면 자신의 아래(a-1)층에 1호부터 b 호까지 사람들의 수의 합만큼 사람들을 데려와 살아야한다” 는 계약 조항을 꼭 지키고 들어와야 한다.

아파트에 비어있는 집은 없고 모든 거주민들이 이 계약 조건을 지키고 왔다고 가정 했을 때, 주어지는 양의 정수 k와 n에 대해 k층에 n호에는 몇 명이 살고 있나를 출력하라. 단, 아파트에는 0층부터 있고 각층에는 1호부터 있으며, 0층에 i호에는 i명이 산다.
입력

첫 번째 줄에 Test case의 수 T가 주어진다. 그리고 각각의 케이스마다 입력으로 첫 번째 줄에 정수 k, 두 번째 줄에 정수 n이 주어진다. (1 <= k <= 14, 1 <= n <= 14)
출력

각각의 Test case에 대해서 해당 집에 거주민 수를 출력하라.
예제 입력

2    test case
1    층수
3    호수
2
3

예제 출력

6
10

*/
#include<stdio.h>
int main(){
	
    int t = 0;
    int k = 0;
    int n = 0;
    int arr[15][15];
    int a = 0;
    int b = 0; 
    int c = 0;

    for(a=0; a<=14; a++){
        for(b = 0; b<=14; b++){
            arr[a][b]=0;
        }
    }

    for(a = 0; a<=14; a++){
        arr[0][a]=a;
    }

    for(a = 1; a<=14; a++){
        for(b = 1; b<=14; b++){
            for(c = 1; c<=b; c++){
                arr[a][b] += arr[a-1][c];
            }
        }
    }
    
    for(a = 0; a<=14; a++){
    	for(b=1; b<=14; b++){
    		printf("%d ",arr[a][b]);
    	}
 	printf("\n");
    }


    scanf("%d",&t);
    for(;t>0;t--){
        scanf("%d",&k);
        scanf("%d",&n);
        printf("%d\n",arr[k][n]);
    }
    return 0;
}

/*
 #include <iostream>
 using namespace std;
 int t,k, n,d[15][15];
 int main() {
     cin >> t;
     for (int i = 1; i <= 14; i++)//0층의 i호엔 i명이 산다.
     {
         d[0][i] = i;
     }
     for (int i = 1; i <= 14; i++)//층
         for (int j = 1; j <= 14; j++)//호
             for (int k = 1; k <= j; k++)
                 d[i][j] += d[i - 1][k];
     while (t--)
     {
         cin >> k >> n;
         cout << d[k][n] << '\n';
     }
 }
 */
