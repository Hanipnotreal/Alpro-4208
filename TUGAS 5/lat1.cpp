#include <iostream>
using namespace std;

const float PI = 3.14159265359;

struct BangunDatar
{
    float panjang;
    float lebar;
};

struct Lingkaran
{
    float radius;
};

struct Kerucut
{
    float radius;
    float tinggi;
};

struct Bola
{
    float radius;
};

float hitungLuasPersegiPanjang(BangunDatar persegiPanjang)
{
    return persegiPanjang.panjang * persegiPanjang.lebar;
}

float hitungLuasLingkaran(Lingkaran lingkaran)
{
    return PI * lingkaran.radius * lingkaran.radius;
}

float hitungVolumeKerucut(Kerucut kerucut)
{
    return (1.0 / 3.0) * PI * kerucut.radius * kerucut.radius * kerucut.tinggi;
}

float hitungVolumeBola(Bola bola)
{
    return (4.0 / 3.0) * PI * bola.radius * bola.radius * bola.radius;
}

int main()
{
    // Input nilai
    BangunDatar persegiPanjang;
    cout << "Masukkan panjang persegi panjang: ";
    cin >> persegiPanjang.panjang;
    cout << "Masukkan lebar persegi panjang: ";
    cin >> persegiPanjang.lebar;

    Lingkaran lingkaran;
    cout << "Masukkan radius lingkaran: ";
    cin >> lingkaran.radius;

    Kerucut kerucut;
    cout << "Masukkan radius kerucut: ";
    cin >> kerucut.radius;
    cout << "Masukkan tinggi kerucut: ";
    cin >> kerucut.tinggi;

    Bola bola;
    cout << "Masukkan radius bola: ";
    cin >> bola.radius;

    // Hitung dan tampilkan hasil
    cout << "Luas Persegi Panjang: " << hitungLuasPersegiPanjang(persegiPanjang) << endl;
    cout << "Luas Lingkaran: " << hitungLuasLingkaran(lingkaran) << endl;
    cout << "Volume Kerucut: " << hitungVolumeKerucut(kerucut) << endl;
    cout << "Volume Bola: " << hitungVolumeBola(bola) << endl;

    return 0;
}
