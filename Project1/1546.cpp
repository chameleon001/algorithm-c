/*

�����̴� �⸻���縦 ���ƴ�.�����̴� ������ �����ؼ� ���� ��������� �ߴ�.�ϴ� �����̴� �ڱ� ���� �߿� �ִ밪�� �����.�� ���� M�̶�� �Ѵ�.�׸��� ���� ��� ������ ���� / M * 100���� ���ƴ�.

���� ���, �������� �ְ����� 70�̰�, ���������� 50�̾����� ���������� 50 / 70 * 100�� �Ǿ� 71.43���� �ȴ�.

�������� ������ ���� ������ ���� ������� ��, ���ο� ����� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
�Է�

ù° �ٿ� ���� �� ������ ���� N�� �־�����.�� ���� 1000���� �۰ų� ����.��° �ٿ� �������� ���� ������ �־�����.�� ���� 100���� �۰ų� ���� ���� �ƴ� �����̰�, ��� �ϳ��� ���� 0���� ũ��.
���

ù° �ٿ� ���ο� ����� �Ҽ��� ��° �ڸ����� �ݿø��� ��°�ڸ����� ����Ѵ�.
���� �Է�

3
40 80 60

���� ���

75.00

*/
#include<stdio.h>

int main() {
	float arr[1000];
	int a = 0;
	int d = 0;
	float e = 0;
	scanf("%d", &a);

	for (int b = 0; b < a; b++) {
		scanf("%f", &arr[b]);
	}
	d = arr[0];
	for (int b = 0; b < a; b++) {
		if (arr[b] > d) {
			d = arr[b];
		}
	}
	for (int b = 0; b < a; b++) {
		arr[b] = (arr[b] / d) * 100;
		e += arr[b];
	}
	printf("%0.2f", e / a);
}