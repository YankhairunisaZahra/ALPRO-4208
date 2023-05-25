#include <iostream>
/*YANKHAIRUNISA ZAHRA W.P -A11.2022.14328 -A11.4208
ALGORITMA PEMROGRAMAN
FUNGSI REKURSIF*/

using namespace std;

int penjumlahanRekursif(int a, int b) {
	if (b == 0){
		return a;
	}
	else {
		return 1 + penjumlahanRekursif(a, b - 1);
	}
}

int penguranganRekursif(int a, int b) {
	if (b == 0){
		return a;
	}
	else {
		return penguranganRekursif(a - 1, b - 1);
	}
}

int perkalianRekursif(int a, int b) {
	if (b == 1) {
		return a;
	}
	else {
		return a + perkalianRekursif(a, b - 1);
	}
}

int pembagianRekursif(int a, int b){
   if(a - b <= 0){
      return 1;
   }
   else {
      return pembagianRekursif(a - b, b) + 1;
   }
}

int pangkatRekursif(int a, int b) {
	if (b == 0) {
		return 0;
	}
	else if (b == 1) {
		return a;
	}
	else {
		return a * pangkatRekursif(a, b - 1);
	}
}


int main() {
    cout << "==========FUNGSI REKURSIF==========" << endl;
	cout << "penjumlahan \t= " << penjumlahanRekursif(25, 10) << endl;
	cout << "pengurangan \t= " << penguranganRekursif(20, 5) << endl;
	cout << "perkalian \t= " << perkalianRekursif(8, 5) << endl;
	cout << "pembagian \t= " << pembagianRekursif(20, 5) << endl;
	cout << "pangkat \t= " << pangkatRekursif(5, 2) << endl;;

	return 0;
}
