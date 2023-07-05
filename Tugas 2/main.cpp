#include <iostream>

using namespace std;

bool isEven(int n){
    return n % 2 == 0;
}

bool isOdd(int n){
    return n % 2 == 1;
}

bool isFactor(int a, int b){
    return b % a == 0;
}

int sumEven(int arr[], int n){
    int sum = 0;
    for(int i = 0; i < n; i++)
        if(isEven(arr[i])) sum += arr[i];

    return sum;
}

int sumOdd(int arr[], int n){
    int sum = 0;
    for(int i = 1; i < n; i++)
        if(isOdd(arr[i])) sum += arr[i];

    return sum;
}

int maxN(int arr[], int n){
    int temp = arr[0];
    for (int i = 1; i < n; i++)
        if(arr[i] > temp) temp =  arr[i];

    return temp;
}

int minN(int arr[], int n){
    int temp = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] < temp) temp = arr[i];

    return temp;
}

int maxArray(int arr[], int n) {
    int temp = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] > temp) temp = arr[i];

    return temp;
}

int minArray(int arr[], int n) {
    int temp = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] < temp) temp = arr[i];

    return temp;
}

bool isFound(int arry[], int m, int x) {
    for (int i = 0; i < m; i++) {
        if (arry[i] == x) {
            return true;
        }
    }
    return false;
}

void swapN(int arrys[], int z, int s, int y) {
    for (int i = 0; i < z; i++) {
        if (arrys[i] == s) {
            arrys[i] = y;
        }
    }
}

int main()
{
    //isEven
    int n;
    cout << "Masukan bilangan bulat: ";
    cin >> n;
    cout << "Bilangan " << n << " adalah bilangan genap? " << (isEven(n) ? "True" : "False") << endl;

    cout << "\n";
    //isOdd
    cout << "Masukan bilangan bulat: ";
    cin >> n;
    cout << "Bilangan " << n << " adalah bilangan ganjil? " << (isOdd(n) ? "True" : "False") << endl;

    cout << "\n";
    //isFactor
    int a, b;
    cout << "Masukan bilangan: ";
    cin >> a;
    cout << "Masukan bilangan: ";
    cin >> b;
    cout << "Apakah bilangan " << a << " adalah faktor dari bilangan " << b << "? " << (isFactor(a, b) ? "True" : "False") << endl;

    cout << "\n";
    //sumEven
    cout << "Masukan banyaknya element array: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cout << "Masukan array ke-" << i << ": ";
        cin >> arr[i];
    }
    cout << "Jumlah element genap dari array adalah " << sumEven(arr, n) << endl;

    cout << "\n";
    //sumOdd
    cout << "Masukan banyaknya element array: ";
    cin >> n;
    for (int i = 0; i < n; i++){
        cout << "Masukan array ke-" << i << ": ";
        cin >> arr[i];
    }
    cout << "Jumlah element ganjil dari array adalah " << sumOdd(arr, n) << endl;

    cout << "\n";
    //maxN
    cout << "Masukkan banyaknya elemen array: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "Masukkan elemen ke-" << i << ": ";
        cin >> arr[i];
    }
    cout << "Element terbesar dari array adalah " << maxN(arr, n) << endl;

    cout << "\n";
    //minN
        cout << "Masukkan banyaknya elemen array: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "Masukkan elemen ke-" << i << ": ";
        cin >> arr[i];
    }
    cout << "Elemen terkecil dari array adalah " << minN(arr, n) << endl;

    cout << "\n";
    //maxArray
    cout << "Masukkan banyaknya elemen array: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "Masukkan elemen ke-" << i << ": ";
        cin >> arr[i];
    }
    cout << "Elemen terbesar dari array adalah " << maxArray(arr, n) << endl;

    cout << "\n";
    //minArray
    cout << "Masukkan banyaknya elemen array: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "Masukkan elemen ke-" << i << ": ";
        cin >> arr[i];
    }
    cout << "Elemen terkecil dari array adalah " << minArray(arr, n) << endl;

    cout << "\n";
    //isFound
    int arry[] = {1, 2, 3, 4, 5};
    int m = sizeof(arry) / sizeof(arry[0]);
    int x = 3;
    cout << isFound(arry, m, x) ? "Found" : "Not Found";

    cout << "\n";
    //swapN
    int arrys[] = {1, 2, 3, 4, 5};
    int z = sizeof(arrys) / sizeof(arrys[0]);
    int s = 3;
    int y = 6;
    swapN(arrys, z, s, y);
    for (int i = 0; i < z; i++) {
        cout << arrys[i] << " ";
    }
    return 0;
}
