#include <iostream>
#include <string>
using namespace std;

struct Sepeda {
    string Merk;
    string Type;
    int Tahun;
    string Harga;
};

int main() {
    Sepeda sepeda1;

    // Mengisi data sepeda ke dalam struktur
    sepeda1.Merk = "Polygon";
    sepeda1.Type = "Sepeda Gunung";
    sepeda1.Tahun = 2013;
    sepeda1.Harga = "2.000.000";

    // Menampilkan data sepeda dari struktur
    cout << "==================" << endl;
    cout << "Data Sepeda" << endl;
    cout << "==================" << endl;
    cout << "Merk: " << sepeda1.Merk << endl;
    cout << "Type: " << sepeda1.Type << endl;
    cout << "Tahun: " << sepeda1.Tahun << endl;
    cout << "Harga: " << sepeda1.Harga << endl;

    return 0;
}
