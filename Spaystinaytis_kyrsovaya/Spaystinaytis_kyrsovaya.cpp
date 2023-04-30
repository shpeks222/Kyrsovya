#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	int x;
	int n;
	bool found = false;
	cout << "Введите количество элементов в массиве: ";
	cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; i++) {
		cout << "Введите " << i + 1 << "-й элемент: ";
		cin >> arr[i];
	}
	if (n <= 0) {
		cout << "Размер массива должен быть положительным" << endl;
		return -1;
	}
	cout << "Введите элемент, который нужно найти: ";
	cin >> x;
	for (int i = 0; i < n; i++) {
		if (arr[i] == x) {
			found = true;
			cout << "Элемент " << x << " найден на позиции " << i + 1 << endl;
			break;
		}
	}
	if (!found) {
		cout << "Элемент " << x << " не найден в массиве" << endl;
	}
	return 0;
	delete[] arr;
}

