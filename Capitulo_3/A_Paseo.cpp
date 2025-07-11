#include <bits/stdc++.h>
using namespace std;

int main(){
string tiempo;
int grados;

cin >> tiempo >> grados;
string res = "Vienen a pasear:";

if (tiempo == "Soleado" && grados >= 20){ res += " Adrian";}
if (tiempo == "Soleado" || grados > 15){ res += " Barbara";}
if (tiempo == "Soleado" || tiempo == "Nublado"){ res += " Carmen";}
if (tiempo != "Tormenta"){ res += " Dario";}




cout << res <<endl;
}

