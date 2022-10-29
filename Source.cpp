#include <iostream>
using namespace std;
int main() {
	/*int x;
	int k = 0;
	int sum = 0;
	do {
		cin >> x;
		k++;
		sum += x;
	} while (x != 0);
	double sr = (double)sum / k;
	cout << k << " " << sum << sr << " ";*/
	/*int a, b, i, sum = 0;
	cin >> a >> b;
	i = a;
	do {
		if (i % 2 != 0) {
			sum += i;
		}
		i += 1;
	} while (i <= b);
	cout << sum << " ";*/
	//    ^
	//   ^^^
	//  ^^^^^
		/*int i, h;
		cin >> h;
		i = 1;
		do {
			for (int j = 1; j <= h - i; j++)cout << " ";
			for (int j = 1; j <= 2 * i - 1; j++)cout << '^';
			cout << endl;
			i++;
		} while (i <= h);*/
	//30. С помощью оператора while напишите программу определения суммы всех нечетных чисел в диапазоне от 1 до 99 включительно.
		/*int i=1,a=0;
		do {
			if (i % 2 != 0)
				a++;
		} while (i <99);
		cout << a;*/
	//29. с помощью оператора while напишите программу вывода всех четных чисел в диапазоне от 2 до 100 включительно.
	/*int i = 2;
	do {
		if (i % 2 != 0) {
			cout << i << endl;
			i++;
		}
	} while (i <= 100);*/
	/*double sr = 0;
	int a,b,i = 0;
	do {
		cin >> b;
		i++;
		sr += b;
	} while (i <= a-1);
	double sr = sr / 1;
	cout << sr << endl;*/
}