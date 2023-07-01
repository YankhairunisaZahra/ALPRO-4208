#include <iostream>
using namespace std;

// Enum untuk cuaca
enum class Cuaca {
    Cerah,
    Mendung,
    Hujan,
    Badai
};

// Enum untuk gear kendaraan
enum class GearKendaraan {
    Netral,
    Dua,
    Tiga,
    Empat,
    Lima,
    Mundur
};

// Enum untuk nilai
enum class Nilai {
    A,
    B,
    C,
    D,
    E
};

int main() {
    // Contoh penggunaan enum cuaca
    Cuaca hariIni = Cuaca::Cerah;
    cout << "Cuaca hari ini: ";
    switch (hariIni) {
        case Cuaca::Cerah:
            cout << "Cerah" << endl;
            break;
        case Cuaca::Mendung:
            cout << "Mendung" << endl;
            break;
        case Cuaca::Hujan:
            cout << "Hujan" << endl;
            break;
        case Cuaca::Badai:
            cout << "Badai" << endl;
            break;
    }

    // Contoh penggunaan enum gear kendaraan
    GearKendaraan gearMobil = GearKendaraan::Netral;
    cout << "Gear mobil saat ini: ";
    switch (gearMobil) {
        case GearKendaraan::Netral:
            cout << "Netral" << endl;
            break;
        case GearKendaraan::Dua:
            cout << "Dua" << endl;
            break;
        case GearKendaraan::Tiga:
            cout << "Tiga" << endl;
            break;
        case GearKendaraan::Empat:
            cout << "Empat" << endl;
            break;
        case GearKendaraan::Lima:
            cout << "Lima" << endl;
            break;
        case GearKendaraan::Mundur:
            cout << "Mundur" << endl;
            break;
    }

    // Contoh penggunaan enum nilai
    Nilai nilaiMahasiswa = Nilai::B;
    cout << "Nilai mahasiswa: ";
    switch (nilaiMahasiswa) {
        case Nilai::A:
            cout << "A" << endl;
            break;
        case Nilai::B:
            cout << "B" << endl;
            break;
        case Nilai::C:
            cout << "C" << endl;
            break;
        case Nilai::D:
            cout << "D" << endl;
            break;
        case Nilai::E:
            cout << "E" << endl;
            break;
    }

    return 0;
}
