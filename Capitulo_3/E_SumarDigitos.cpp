#include <iostream>
#include <cmath>
using namespace std;

int main(){

    string numero; 
    cin >> numero;

    long long sum = 0;

    for (char c :numero){
        sum += int(c)-'0';
    }
    cout << sum << endl;


}