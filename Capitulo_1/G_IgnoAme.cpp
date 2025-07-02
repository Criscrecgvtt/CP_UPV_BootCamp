#include <bits/stdc++.h>
using namespace std;

int main(){
double num;
string text1;
string line2;
string palabraFinal;
cin >>num>>text1;
cin.ignore();
getline(cin, line2);
cin>>palabraFinal;

cout << line2 << ": " << fixed << setprecision(3) << num << endl;
cout << palabraFinal << endl;
}