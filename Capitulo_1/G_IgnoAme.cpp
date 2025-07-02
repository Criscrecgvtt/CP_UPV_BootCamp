#include <bits/stdc++.h>
using namespace std;

int main(){
double num;
string text1;
string line2;
string line3;
cin >>num>>text1;
cin.ignore();
getline(cin, line2);
getline(cin, line3);
cout<< line2+": "<< fixed << setprecision(3) <<num<<endl;
cout << line3.at(0) << endl;
}