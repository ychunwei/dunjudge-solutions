#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int a,b,c,d;
    bool aboo = false,bboo = false,cboo = false,dboo = false;
    cin >> a >> b >> c >> d;
    if(a > 2){
        for(int i = 2; i<= sqrt(a); ++i){
        if(a % i == 0){
            aboo = false;
            break;
        }else{
            aboo = true;
        }
    }
    }

     if(b > 2){
        for(int i = 2; i<= sqrt(b); ++i){
        if(b % i == 0){
            bboo = false;
            break;
        }else{
            bboo = true;
        }
    }
    }
     if(c > 2){
        for(int i = 2; i<= sqrt(c); ++i){
        if(c % i == 0){
            cboo = false;
            break;
        }else{
            cboo = true;
        }
    }
    }
     if(d > 2){
        for(int i = 2; i<= sqrt(d); ++i){
        if(d % i == 0){
            dboo = false;
            break;
        }else{
            dboo = true;
        }
    }
    }

    if(a == 2 || a == 3){
        aboo = true;
    }
     if(b == 2 || b == 3){
        bboo = true;
    }
     if(c == 2 || c == 3){
        cboo = true;
    }
     if(d == 2 || d == 3){
        dboo = true;
    }
    if(aboo && bboo && cboo && dboo){
        cout << "Opening...";
    }else{
        cout << "Wrong code";
    }
}
