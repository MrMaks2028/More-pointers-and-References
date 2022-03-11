#include <iostream>
using namespace std;

void func(int* pn1, int* pn2) {
	if (pn1 == nullptr || pn2 == nullptr)
		cout << "Один из указателей нейтрален\n";
	else{
		cout << "pn1 = " << pn1 << endl;
		cout << "pn2 = " << pn2 << endl;
	}
}
void mySwap(int num1, int num2) {
	int tmp = num1;
	num1 = num2;
	num2 = tmp;
}
void pSwap(int *num1, int *num2) {
	int tmp = *num1;
	*num1 = *num2;
	*num2 = tmp;
}
//Функция, принимающая 2 переменные и меняющая их значения местами
void refSwap(int &num1, int &num2) {
	int tmp = num1;
	num1 = num2;
	num2 = tmp;
}


int main() {
	setlocale(LC_ALL, "Russian");
	int x, y;
	cout << "Введите 2 числа:";
	cin >> x >> y;
	cout << endl;
	//mySwap(x, y);
	//pSwap(&x, &y);
	refSwap(x, y);
	cout << "x = " << x << ", y = " << y << endl;
	int n = pow(2, 2);

	
	
	return 0;
}
/*nt a = 10, b = 20;
	int* pa = &a;
	cout << pa << endl;
	int& aref = a;
	cout << &aref << endl;
	aref = 15;
	cout << a << endl;
	b += aref;
	cout << b;*/
/*int a[3] = {1,2,3}; 
// Указатель-константа на 0-й элемент массива*/	
/*//Константный указатель на константу (можно только выводить. Всегда указыает на 1 ячейку в озу, при этом менять её значение через указатель нельзя)
const int* const pn = &n;
cout << pn << " = " << *pn << endl;*/
/*//Указатель на константу(можно поменять переменную, но не значение переменной. Запрещает изменение переменной, адрес которой записан в указателе.)
const int* pn;
pn = &n;
cout << pn << " = " << *pn << endl;
pn = &m;
cout << pn << " = " << *pn << endl;*/	
/*//Указатель-константа (можно менять значение переменной, но не переменную. Всегда указывает на одну ячейку в озу ПК.)
int* const pn = &n;
cout << pn << " = " << *pn << endl;
*pn = 15;
cout << pn << " = " << *pn << endl;*/	
/*int n, m;
	int* pn = nullptr;
	int* pm = &m;
	func(pn, pm);*/
/*int n = -1;
	if (n != -1)
		cout << n << endl;
	cin >> n;
	cout << n << endl;

	int* pn = nullptr;
	pn = &n;
	if(pn != nullptr)
		cout << pn << endl;*/