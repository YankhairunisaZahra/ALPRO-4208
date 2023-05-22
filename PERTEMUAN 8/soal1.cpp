#include <iostream>
/*YANKHAIRUNISA ZAHRA W.P -A11.2022.14328 -A11.4208
ALGORITMA PEMROGRAMAN
SOAL 1*/

using namespace std;

bool nilaiGanjil(int n){
    if(n%2==1){
        return false;
    }
    else{
        return true;
    }
}

void nilaiGenapKecil(int arr[], int n)
{
    int minA = -1;
    int min_indA = -1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            if (minA == -1 || arr[i] < minA)
            {
                minA = arr[i];
                min_indA = i;
            }
        }
    }

    if (minA == -1)
    {
        cout << "Tidak ada nilai genap dalam array." << endl;
    }
    else
    {
        cout << "Nilai genap terkecil yaitu " << minA << endl;
        cout << "Terdapat pada indeks ke-" << min_indA << endl;
        cout << "============================" << endl;
        if (nilaiGanjil(minA))
        {
            cout << minA << " adalah bilangan ganjil" << endl;
        }
        else
        {
            cout << minA << " bukan bilangan ganjil" << endl;
        }
    }
}



int main()
{
    int arr[] = {6,7,4,3,2};
    int n = sizeof(arr)/sizeof(*arr);

    nilaiGenapKecil(arr,n);
    return 0;
}
