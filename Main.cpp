#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>

int main() {
	setlocale(LC_ALL, "russian");
	//Задача 1.
	std::cout << "Задача 1.\nМассив: ";
	const int size = 10;
	int arr[size];
	srand(time(NULL));
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % (100 - 1) + 1;
		std::cout << arr[i] << ' ';
	}
	std::cout << '\n';

	int sum = 0;
	int count = 0;
	for (int i = 0; i < size; i++){
		sum += arr[i];
		if (arr[i] < sum / size)
			count++;
}
	std::cout << "Среднее арифметическое массива = " << double(sum) / size << '\n' << "Колличество эллементов массива меньше среднего арифметического = " << count << std::endl;
	std::cout << '\n';

	//Задача 2.
	const int A = 5;
	const int B = 5;
	const int C = 5;
	const int D = 5;
	int mx[A][B];
	int mx1[C][D];

	std::cout << "Задача 2.\nМатрица 1:\n";
	for (int i = 0; i < A; i++) {
		for (int j = 0; j < B; j++) {
			mx[i][j] = rand() % (10 + 1 - 1) + 1;
			std::cout << mx[i][j] << '\t';
		}
		std::cout << '\n';
	}

	std::cout << "Матрица 2:\n";
	for (int i = 0; i < C; i++) {
		for (int j = 0; j < D; j++) {
			mx1[i][j] = rand() % (10 + 1 - 1) + 1;
			std::cout << mx1[i][j] << '\t';
		}
		std::cout << '\n';
	}

	int SumMX[A][B];
	for (int i = 0; i < A; i++) {
		for (int j = 0; j < B; j++) {
			SumMX[i][j] = mx[i][j] + mx1[i][j];
		}
	}

	std::cout << "Итоговая матрица:\n";
	for (int i = 0; i < A; i++) {
		for (int j = 0; j < B; j++) {
			std::cout << SumMX[i][j] << '\t';
		}
		std::cout << '\n';
	}


	//Задача 3.
	int n;

	std::cout << "Задача 3.\nВведите шестизначное число -> ";
	std::cin >> n;
	if (99999 > n || n > 1000000) {
		std::cout << "Введеное число не корректно!";
		return 0;
	}
	int a = (n % 1000000) / 100000;
	int b = (n % 100000) / 10000;
	int c = (n % 10000) / 1000;
	int d = (n % 1000) / 100;
	int e = (n % 100) / 10;
	int f = n % 10;
	const int size1 = 6;
	int arr1[size1]{ a, b, c, d, e, f };
	std::cout << "Массив: ";
	for (int i = 0; i < size1; i++)
		std::cout << arr1[i] << ' ';
	std::cout << std::endl;






	return 0;
}