#include <iostream>
using namespace std;
int main(){
 int r;
    int cap = 0;
    int b = 0;
    cin >> r;
    //top half of diamond
    for(int i = r-1; i > 0; --i){
        for(int a = i; a > 0; --a){
            cout << ' ';
        }
        while(b <= cap + r - 1){
            cout << 'x';
            b++;
        }
        cap = cap + 2;
        b = 0;
        cout << '\n';
    }
    //bottom half of diamond
    for(int i = 0; i < r; ++i){
        for(int a = 0; a < i; ++a){
            cout << ' ';
        }
        while(b <= cap + r - 1){
            cout << 'x';
            b++;
        }
        cap = cap - 2;
        b = 0;
        cout << '\n';
    }
}
