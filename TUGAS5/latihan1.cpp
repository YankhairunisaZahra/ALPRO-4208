#include <iostream>
using namespace std;

const float PI = 3.14159265359;

struct PersegiPanjang
{
    float panjang;
    float lebar;
};

struct Lingkaran
{
    float jari_jari;
};

struct Kerucut
{
    float jari_jari;
    float tinggi;
};

struct Bola
{
    float jari_jari;
};

float LuasPersegiPanjang(PersegiPanjang persegiPanjang)
{
    return persegiPanjang.panjang * persegiPanjang.lebar;
}

float LuasLingkaran(Lingkaran lingkaran)
{
    return PI * lingkaran.jari_jari * lingkaran.jari_jari;
}

float VolumeKerucut(Kerucut kerucut)
{
    return (1.0 / 3.0) * PI * kerucut.jari_jari * kerucut.jari_jari * kerucut.tinggi;
}

float VolumeBola(Bola bola)
{
    return (4.0 / 3.0) * PI * bola.jari_jari * bola.jari_jari * bola.jari_jari;
}

int main()
{

    PersegiPanjang persegiPanjang;
    cout << "Masukkan panjang persegi panjang: ";
    cin >> persegiPanjang.panjang;
    cout << "Masukkan lebar persegi panjang: ";
    cin >> persegiPanjang.lebar;
    cout << "====================================" << endl;
    cout << "Luas Persegi Panjang: " << LuasPersegiPanjang(persegiPanjang) << endl;
    cout << endl;

    Lingkaran lingkaran;
    cout << "Masukkan jari_jari lingkaran: ";
    cin >> lingkaran.jari_jari;
    cout << "====================================" << endl;
    cout << "Luas Lingkaran: " << LuasLingkaran(lingkaran) << endl;
    cout << endl;

    Kerucut kerucut;
    cout << "Masukkan jari-jari kerucut: ";
    cin >> kerucut.jari_jari;
    cout << "Masukkan tinggi kerucut: ";
    cin >> kerucut.tinggi;
    cout << "====================================" << endl;
    cout << "Volume Kerucut: " << VolumeKerucut(kerucut) << endl;
    cout << endl;

    Bola bola;
    cout << "Masukkan jari-jari bola: ";
    cin >> bola.jari_jari;
    cout << "====================================" << endl;
    cout << "Volume Bola: " << VolumeBola(bola) << endl;


    return 0;
}
