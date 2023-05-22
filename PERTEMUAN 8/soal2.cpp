#include <iostream>
/*YANKHAIRUNISA ZAHRA W.P -A11.2022.14328 -A11.4208
ALGORITMA PEMROGRAMAN
SOAL 2*/

using namespace std;

void bubbleSort(int arrBubble[], int nB){
    int i, j;
    for (i=0; i<nB-1; i++)
        for (j=0; j<nB-i-1; j++)
            if (arrBubble[j] < arrBubble[j+1])
            swap(arrBubble[j], arrBubble[j+1]);
}

void insertionSort(int arrInsertion[], int nI){
    int i, key, j;
    for (i=1; i<nI; i++){
        key = arrInsertion[i];
        j=i-1;

        while (j>=0 && arrInsertion[j]<key){
            arrInsertion[j+1]=arrInsertion[j];
            j=j-1;
        }
        arrInsertion[j+1]=key;
    }
}

void tampilArrayBubble(int arrBubble[], int nB){
    for (int i=0; i<nB; i++){
        cout << arrBubble[i] << " ";
    }
    cout << endl;
}

void tampilArrayInsertion(int arrInsertion[], int nI){
    for (int i=0; i<nI; i++){
        cout << arrInsertion[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arrBubble[]={3, 2, 5, 1, 0, 4};
    int arrInsertion[]={8, 5, 4 , 12, 9, 2};
    int nB=sizeof(arrBubble)/sizeof(arrBubble[0]);
    int nI=sizeof(arrInsertion)/sizeof(arrInsertion[0]);

    cout << "===============Bubble Sort===============" << endl;
    cout << "Array sebelum diurutkan = ";
    tampilArrayBubble(arrBubble,nB);

    bubbleSort(arrBubble,nB);

    cout << "Array setelah diurutkan = ";
    tampilArrayBubble(arrBubble,nB);

    cout << endl;

    cout << "==============Insertion Sort============" << endl;
    cout << "Array sebelum diurutkan = ";
    tampilArrayInsertion(arrInsertion,nI);

    insertionSort(arrInsertion,nI);

    cout << "Array setelah diurutkan = ";
    tampilArrayInsertion(arrInsertion,nI);

    return 0;
}
