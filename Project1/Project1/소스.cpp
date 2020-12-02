#include <iostream>
using namespace std;

template <class T1, class T2>
bool equalArrays(T1 t1[], T2 t2[], int n) {
	for (int i = 0; i < n; i++) {
		if (t1[i] != t2[i])
			return false;
	}
	return true;
}

template<class T>
void reverseArray(T t1[], int n) {
	for (int i = 0; i < n / 2; i++) {
		T tmp;
		tmp = t1[i];
		t1[i] = t1[n - i - 1];
		t1[n - i - 1] = tmp;
	}
}
int main() {
	int x[] = { 1, 10, 100, 5, 4 };
	int y[] = { 1, 10, 100, 5, 4 };
	if (equalArrays(x, y, 5))
		cout << "같다" << endl;
	else
		cout << "다르다" << endl;

	reverseArray(x, 5);
	for (int i = 0; i < 5; i++)
		cout << x[i] << ' ';

}