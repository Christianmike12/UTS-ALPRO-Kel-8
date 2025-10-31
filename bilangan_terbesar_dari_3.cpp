#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Masukkan tiga bilangan: ";
    cin >> a >> b >> c;

    if (a > b && a > c)
        cout << "Bilangan terbesar adalah: " << a << endl;
    else if (b > c)
        cout << "Bilangan terbesar adalah: " << b << endl;
    else
        cout << "Bilangan terbesar adalah: " << c << endl;

    return 0;
}
