// M�� N�� �־��� �� M�̻� N������ �ڿ��� �� ������������ ���� ��� ��� �� ���� ���ϰ� �� �� �ּڰ��� ã�� ���α׷��� �ۼ��Ͻÿ�. 
// ���� ��� M=60, N=100�� ��� 60�̻� 100������ �ڿ��� �� ������������ 64, 81, 100 �̷��� �� 3���� �����Ƿ� �� ���� 245�� �ǰ� �� �� �ּڰ��� 64�� �ȴ�.

#include <iostream>

using namespace std;

int main() {
	int m, n;
	int sum = 0;
	int min = 10001;

	cin >> m >> n;

	for (int j = 100; j >= 1; j--) {
		if (j * j >= m && j * j <= n) {
			sum += j * j;
			min = j * j;
		}
	}

	if (sum == 0)
	{
		cout << "-1";
		return 0;
	}

	cout << sum << '\n' << min;

}