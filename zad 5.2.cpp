#include <iostream>
#include <vector>

using namespace std;

//Visual, na którym pracuje nie wspiera c99, przez co nie pozwala na zadeklarownaie wielkości tablicy przez użytkownika - wymaga consta
//Jako rozwiązanie tego problemu używam vectora

void swapPlaces(vector<int> vec) {
	int currentVal = 0;

	cout << "Tablica przed zmiana: " << endl;

	for (int j = 0; j < vec.size() / 2; j++) {
		cout << vec[j] << " " << vec[vec.size() - (j + 1)];
		cout << endl;
	}

	for (int i = 0; i < vec.size() / 2; i++) {
			currentVal = vec[i];
			vec[i] = vec[vec.size() - (i+1)];
			vec[vec.size() - (i+1)] = currentVal;
	}

	cout << "Tablica po zmianie: " << endl;

	for (int j = 0; j < vec.size() / 2; j++) {
		cout << vec[j] << " " << vec[vec.size() - (j + 1)];
		cout << endl;
	}
}


int main()
{
	int arrSize = 0;

	cout << "Podaj rozmiar tablicy: ";
	cin >> arrSize;

	while (arrSize % 2 != 0) {
		cout << "Wielkosc tablicy musi byc parzysta, podaj wielkosc jeszcze raz: ";
		cin >> arrSize;
	}

	vector<int> arr(arrSize);

	for (int i = 0; i < arrSize; i++) {
		cout << "Podaj wartosc do tablicy: ";
		cin >> arr[i];
	}
	
	swapPlaces(arr);

}

