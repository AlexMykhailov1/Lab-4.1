// Lab4.1.cpp
// Михайлов Олександр
// Лабораторна робота № 4.1
// Цикли.
// Варіант 24

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double i = 1, S = 0, N, a;

	a = (sqrt(1 + cos(sin(i)) * cos(sin(i)))) / (1 + cos(sin(i)) * cos(sin(i)));
	
	cout << "N = "; cin >> N;

	//1
	while (i <= N)
	{
		S += a;
		i++;
	}

	cout << "1) " << S << endl;

	//2
	i = 1;
	S = 0;
	do {
		S += a;
		i++;
	} while (i <= N);

	cout << "2) " << S << endl;

	//3
	S = 0;
	for (i = 1; i <= N; i++) {
		S += a;
	}

	cout << "3) " << S << endl;

	//4
	S = 0;
	for (i = N; i >= 1; i--) {
		S += a;
	}

	cout << "4) " << S << endl;

	cin.get();
	return 0;
}