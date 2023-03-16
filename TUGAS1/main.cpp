#include <iostream>
/*YANKHAIRUNISA ZAHRA W.P -A11.2022.14328 -A11.4208
ALGORITMA PEMROGRAMAN
TUGAS 1*/

using namespace std;

int penjumlahan(int a, int b){
    int p = a + b;
    return p;
}

int pengurangan(int x, int y){
    int q = x - y;
    return q;
}

void jmlValue (int array[], int a, int &sum);

void rata (int arr[], int size){
    int jumlah = 0;
    for (int i = 0; i<size; i++){
        jumlah = jumlah + arr[i];
    }
    int rata = jumlah/size;
    cout << "Nilai rata-rata elemen = " << rata;
    cout << endl;
}
int main()
{
    cout << "==========PENJUMLAHAN 2 BILANGAN=============" << endl;
    int a, b;
    cout << "Bilangan a \t\t= ";
    cin >> a;
    cout << "Bilangan b \t\t= ";
    cin >> b;
    cout << "-----------------------------" << endl;
    cout << "Hasil penjumlahan \t= " << penjumlahan(a,b) << endl;

    cout << endl;
    cout << "==========PENGURANGAN 2 BILANGAN=============" << endl;
    int x, y;
    cout << "Bilangan x \t\t= ";
    cin >> x;
    cout << "Bilangan y \t\t= ";
    cin >> y;
    cout << "-----------------------------" << endl;
    cout << "Hasil pengurangan \t= " << pengurangan(x,y) << endl;

    cout << endl;
    cout << "==========JUMLAH ELEMEN ARRAY================" << endl;
    int array [] = {1,2,3,4};
    int n = 4;
    int sum = 0;
    jmlValue (array, n, sum);
    cout << "Jumlah nilai elemen = " << sum << endl;
    cout << endl;

    cout << "==========RATA-RATA ELEMEN ARRAY=============" << endl;
    int arr[] = {4,6,8,10};
    int size = sizeof(arr)/sizeof(arr[0]);
    rata (arr, size);
    return 0;
}
void jmlValue(int array[], int n, int &sum){
    for (int i=0; i<n; i++){
        sum = sum + array[i];
    }
}


