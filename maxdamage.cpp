#include <iomanip>
#include <bits/stdc++.h>
using namespace std;
int main(){
    char type;
    double p,s,a,b,c,d,attack;
    double maxattack;
    cin >> type;
    cin >> p >> s;
    cin >> a >> b >> c >> d;
    attack = a + b + c + d;
    if(type == 'G'){
        maxattack = 1.6 * (4 * p + s) * (attack / 100);
    }else{
        maxattack = 1.7 * (4 * p + s) * (attack / 100);
    }
    cout << fixed << setprecision(2);
    cout << maxattack;
}

