#include <iostream>

using namespace std;

int main() {

    int sum = 0;

    cout << "Deret: ";
    for (int i = 1; i <= 5; i++) {
        cout << i << " ";
        sum += i;
    }

    cout << endl;
    cout << "Hasil Penjumlahan: " << sum << endl;

    return 0;
}