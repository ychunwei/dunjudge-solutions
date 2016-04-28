//PARTIAL 10
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n;
    cin >> n;
    if(n == 0){
        cout << 0;
    }
    else if(2 * (int)log(n) + 2 < 2 * log(n)){
        cout << (int)log(n) + 1;
    }
    else{
        cout << (int)log(n);
    }
}
