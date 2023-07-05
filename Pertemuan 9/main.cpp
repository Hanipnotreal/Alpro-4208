#include <iostream>

using namespace std;

int tambahRekursif(int a, int b){
    if(b == 0)
        return a;
    return 1 + tambahRekursif(a, b -1);
}

int kurangRekursif(int a, int b){
    if(b == 0)
        return a;
    return kurangRekursif(a - 1, b - 1);
}

int kaliRekursif(int a, int b){
    if(b == 1)
        return a;
    return a + kaliRekursif(a, b - 1);
}

int bagiRekursif(int a, int b){
    if(a - b <= 0)
        return 1;
    return bagiRekursif(a - b, b) + 1;
}

int pangkatRekursif(int a, int b){
    if(b == 0){
        return 0;
    }else if(b == 1) {
        return a;
    }else {
        return a * pangkatRekursif(a, b - 1);
    }
}

int main()
{
    cout << "Tambah: " << tambahRekursif(40, 60) << endl;
    cout << "Kurang: " << kurangRekursif(30, 20) << endl;
    cout << "Kali: " << kaliRekursif(10, 10) << endl;
    cout << "Bagi: " << bagiRekursif(10, 2) << endl;
    cout << "Pangkat: " << pangkatRekursif(3, 5) << endl;
    return 0;
}
