#include<bits/stdc++.h>
using namespace std;

int main() {
    double x; cin >> x;
    double sinx = 0; // gia tri cua sin(x)
    
    long double curx = 1;
    for(int i=1; i<10000000; i++) { 
        curx = curx * x / i; // x^i / i!
        if(i % 4 == 1) sinx += curx; 
        if(i % 4 == 3) sinx -= curx;
    }

    cout << fixed << setprecision(6) << sinx << endl; // in ra 6 chu so sau dau phay
}