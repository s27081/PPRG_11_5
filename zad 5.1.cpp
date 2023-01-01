#include <iostream>
#include <vector>

using namespace std;

void sortVec(vector<int> vec, int vecSize) {
	int maxValue;
	int maxIndex = 0;
	maxValue = vec[0];
	for (int i = 0; i < vecSize; i++) {
			if (vec[i] > maxValue) {			
				maxValue = vec[i];
				maxIndex = i;
			}
	}
	
	cout << "Najwieksza wartosc to: " << maxValue << endl;
	cout << "Jego index to: " << maxIndex;
}

int main()
{
	int vecSize = 0;
	int value;

	cout << "Podaj wielkosc wektora: ";
	cin >> vecSize;
	cout << endl;

	vector <int> vec(vecSize);

	for (int i = 0; i < vecSize; i++) {
		cout << "Podaj wartosc elementu wektora: ";
		cin >> value;
		vec[i] = value;
	}

	sortVec(vec, vecSize);
	
}

