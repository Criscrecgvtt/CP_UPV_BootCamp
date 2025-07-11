#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;  // Número de casos de prueba

    while (t--) {
        int m, p;
        cin >> m >> p;

        int n;
        cin >> n;

        vector<int> pesos(n);
        int suma_pesos = 0;

        for (int i = 0; i < n; i++) {
            cin >> pesos[i];
            suma_pesos += pesos[i];
        }

        if (n > m) {
            cout << "No cabemos" << endl;
        } else if (suma_pesos > m * p) {
            cout << "Nos quedamos atrapados" << endl;
        } else {
            cout << "Todo bien" << endl;
        }
    }
}
