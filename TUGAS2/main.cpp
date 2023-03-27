#include <iostream>
/*YANKHAIRUNISA ZAHRA W.P -A11.2022.14328 -A11.4208
ALGORITMA PEMROGRAMAN
TUGAS 2*/

using namespace std;

int sumEven (int a[], int n){
    int sumEven = 0;
    for (int i=0; i<n; i++){
        if (a[i]%2==0){
            sumEven = sumEven+a[i];
        }
    }
    return sumEven;
}

int sumOdd (int a[], int n){
    int sumOdd = 0;
    for (int i=0; i<n; i++){
        if (a[i]%2!=0){
            sumOdd = sumOdd+a[i];
        }
    }
    return sumOdd;
}

int maxN(int a, int b){
    if (a>b){
        return a;
    }
    else{
        return b;
    }
}

int minN (int a, int b){
    if (a<b){
        return b;
    }
    else{
        return a;
    }
}

int A[100];
int jmlbil(int y){
    int i;
    for(i=0; i<y; i++){ //memasukkan data ke array
        cout << "Bilangan ke " << i+1 << " = ";
        cin >> A[i];
    }
}
int hasil(int y){ //parameter proses dan hasil
    int i, bsr, kcl;

    bsr = A[0];
    //proses perulangan untuk mencari nilai max dan nilai min
    for (i=0; i<y; i++){
        if (bsr < A[i]){
            bsr = A[i];
        }
        else
        if(kcl > A[i]){
            kcl = A[i];
        }
    }
    //menampilkan hasil
    cout << "Nilai terbesar adalah = " << bsr << endl;
    cout << "Nilai terkecil adalah = " << kcl << endl;
}

void swapN(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    cout << "==========ANGKA GENAP==========" << endl;
    int i, n, even=0, odd=0;
    cout << "Masukkan jumlah = ";
    cin >> n;
    cout << "Angka genap : ";
    for(i=0; i<=n; i++){
        if(i%2==0){
            cout << "\n" << i;
            even++;
        }
    }
    cout << "\n==========ANGKA GANJIL==========" << endl;
    cout << "Angka ganjil : ";
    for(i=1; i<=n; i++){
        if(i%2==1){
            cout << "\n" << i;
            odd++;
        }
    }

    cout << "\n==========JUMLAH NILAI GENAP ELEMEN ARRAY==========" << endl;
    int arrEven[] = {3, 4, 5, 6};
    int j=4;
    int resultEven = sumEven(arrEven, j);
    cout << "Jumlah nilai genap dalam elemen array adalah = " << resultEven << endl;

    cout << "\n==========JUMLAH NILAI GANJIL ELEMEN ARRAY==========" << endl;
    int arrOdd[] = {3, 4, 5, 6};
    int jml=4;
    int resultOdd = sumOdd(arrOdd, jml);
    cout << "Jumlah nilai ganjil dalam elemen array adalah = " << resultOdd << endl;


    cout << "\n==========NILAI MAX 2 BILANGAN============" << endl;
    int maxN = (7,8);
    cout << "Nilai max dari 7 dan 8 adalah = " << maxN << endl;

    cout << "\n==========NILAI MIN 2 BILANGAN============" << endl;
    int minN = (9,8);
    cout << "Nilai min dari 9 dan 8 adalah = " << minN << endl;

    cout << "\n==========NILAI MAX DAN MIN ARRAY==========" << endl;
    int y;
    cout << "Masukkan jumlah elemen array = ";
    cin >> y;
    jmlbil (y);
    hasil (y);

    cout << "\n==========SWAP 2 BILANGAN==========" << endl;
    int a = 2;
    int b = 4;
    cout << "Before swap :" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    swapN(a, b);
    cout << "After swap :" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;


    return 0;
}
