#include <iostream>
using namespace std;
int main(){
    int n, mi;
    int c[1001];
    cin >> n;
    for(int i=1; i <= n; i++){
        cin >> c[i];
    }
        mi = (n+1) / 2;
        cout << c[mi];

}

