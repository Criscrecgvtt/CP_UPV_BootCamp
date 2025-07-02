#include <bits/stdc++.h>
using namespace std;

int main(){
string text;
getline(cin, text);
for (char &c : text) {
     c = tolower(c);
}
cout<<text<<endl;
for (char &c : text) {
     c = toupper(c);
}
cout<<text<<endl;
}