#include <iostream>
#include <string>
using namespace std;

struct Mahasiswa {
    string NIM;
    string Nama;
    string Jurusan;
    int Tahun;
};

int main() {
    // Array statis
    Mahasiswa mahasiswaStatis[4];

    // Mengisi data ke dalam array statis
    mahasiswaStatis[0] = { "A11.2020.01234", "Andi", "Broadcasting", 2023 };
    mahasiswaStatis[1] = { "A11.2020.01235", "Budi", "Sistem Informasi", 2023 };
    mahasiswaStatis[2] = { "A11.2020.01236", "Ali", "DKV", 2023 };
    mahasiswaStatis[3] = { "A11.2020.01237", "Siti", "Kesehatan", 2023 };

    // Menampilkan data dari array statis
    cout << "==========Data Mahasiswa (Array Statis)==========" << endl;
    for (int i = 0; i < 4; i++) {
        cout << "NIM: " << mahasiswaStatis[i].NIM << endl;
        cout << "Nama: " << mahasiswaStatis[i].Nama << endl;
        cout << "Jurusan: " << mahasiswaStatis[i].Jurusan << endl;
        cout << "Tahun: " << mahasiswaStatis[i].Tahun << endl;
        cout << endl;
    }

    // Array dinamis
    int jumlahMahasiswa = 4;
    Mahasiswa* mahasiswaDinamis = new Mahasiswa[jumlahMahasiswa];

    // Mengisi data ke dalam array dinamis
    mahasiswaDinamis[0] = { "A11.2020.01234", "Andi", "Broadcasting", 2023 };
    mahasiswaDinamis[1] = { "A11.2020.01235", "Budi", "Sistem Informasi", 2023 };
    mahasiswaDinamis[2] = { "A11.2020.01236", "Ali", "DKV", 2023 };
    mahasiswaDinamis[3] = { "A11.2020.01237", "Siti", "Kesehatan", 2023 };

    // Menampilkan data dari array dinamis
    cout << "==========Data Mahasiswa (Array Dinamis)==========" << endl;
    for (int i = 0; i < jumlahMahasiswa; i++) {
        cout << "NIM: " << mahasiswaDinamis[i].NIM << endl;
        cout << "Nama: " << mahasiswaDinamis[i].Nama << endl;
        cout << "Jurusan: " << mahasiswaDinamis[i].Jurusan << endl;
        cout << "Tahun: " << mahasiswaDinamis[i].Tahun << endl;
        cout << endl;
    }

    delete[] mahasiswaDinamis;

    return 0;
}
