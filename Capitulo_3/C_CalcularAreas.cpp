#include <bits/stdc++.h>
using namespace std;

int main() {
    int test;
    cin >> test;

    for (int i = 0; i < test; i++) {
        int type;
        cin >> type;
        double a, b;
        if (type == 1) {
            cin >> a;
            cout << fixed << setprecision(5) << 3.141592 * a * a << endl;
        } else if (type == 2) {
            cin >> a;
            cout << fixed << setprecision(5) << a * a << endl;
        } else if (type == 3) {
            cin >> a >> b;
            cout << fixed << setprecision(5) << a * b << endl;
        } else {
            cin >> a >> b;
            cout << fixed << setprecision(5) << (a * b) / 2.0 << endl;
        }
    }
}
