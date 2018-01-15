/*

알파벳 대소문자로 된 단어가 주어지면, 이 단어에서 가장 많이 사용된 알파벳이 무엇인지 알아내는 프로그램을 작성하시오. 단, 대문자와 소문자를 구분하지 않는다.
입력

첫째 줄에 알파벳 대소문자로 이루어진 단어가 주어진다. 주어지는 단어의 길이는 1,000,000을 넘지 않는다.
출력

첫째 줄에 이 단어에서 가장 많이 사용된 알파벳을 대문자로 출력한다. 단, 가장 많이 사용된 알파벳이 여러 개 존재하는 경우에는 ?를 출력한다.
예제 입력

Mississipi

예제 출력

?
*/

#include<iostream>
#include<string>

using namespace std;

int main(){
    int arr[999]={0,};
    int max = -1;
    int max_key = 0;
    int flag =0;
    string str;

    cin >> str;

    for(int i =0; i<str.size();i++){
        arr[(int)str.at(i)]++;
    }
    for(int i = 65; i <91; i++){
        arr[i] +=arr[i+32];
        if(arr[i]==max){
            flag = 1;

        }
        if(arr[i]>max){
            max = arr[i];
            max_key =i;
            flag = 0;
        }
    }
    if(flag==1){cout <<"?"<<endl;}else{cout<<(char)max_key<<endl;}
}
