#include <iostream>
using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;

    int X = A & B;
    int Y = X | C;
    int Z = Y ^ B;

    cout << X << " " << Y << " " << Z << endl;

    return 0;
}
