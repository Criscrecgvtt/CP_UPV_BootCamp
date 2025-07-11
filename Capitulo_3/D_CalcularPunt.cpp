#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int N, P;
    cin >> N >> P;
    for (int i = 0; i < P; i++) {
        int guess;
        cin >> guess;
        int diff = abs(guess - N);
        if (diff == 0) {
            cout << "1p";
        } else if (diff <= 5) {
            cout << "0.5p";
        } else if (diff <= 10) {
            cout << "0.25p";
        } else {
            cout << "0p";
        }

        if (i < P - 1) cout << " ";
    }
    cout << endl;
    return 0;
}
