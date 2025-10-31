#include <iostream>
using namespace std;

int main() {
    int bil;
    cout << "Masukkan bilangan: ";
    cin >> bil;

    if (bil % 2 == 0)
        cout << "Bilangan Genap" << endl;
    else
        cout << "Bilangan Ganjil" << endl;

    return 0;
}
