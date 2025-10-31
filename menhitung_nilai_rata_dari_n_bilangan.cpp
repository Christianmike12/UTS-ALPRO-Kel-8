#include <iostream>
using namespace std;

int main() {
    int n;
    float nilai, total = 0, rata;

    cout << "Masukkan banyaknya bilangan: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cout << "Masukkan bilangan ke-" << i << ": ";
        cin >> nilai;
        total += nilai;
    }

    rata = total / n;
    cout << "Rata-rata = " << rata << endl;

    return 0;
}
