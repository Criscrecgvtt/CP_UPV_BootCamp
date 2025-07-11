#include <bits/stdc++.h>
using namespace std;

int main(){
long long n;
string operador;
long long  d;

cin >> n >> operador >> d;

if (operador == "+"){
cout << n+d <<endl;
}
else if (operador == "-"){
cout << n-d <<endl;
}
else if (operador == "*")
cout << n*d <<endl;
else{
    if (d == 0){
        cout << "ERROR" << endl;
    }
    else{
        cout << fixed << setprecision(2) << double(n)/double(d) << endl;
    }
} 


}

