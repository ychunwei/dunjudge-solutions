//CLEARED

#include <iostream>
using namespace std;
int main(){
    int mod;
    int n;
    long long fibo[2000];
    fibo[0] = 0;
    fibo[1] = 1;
    cin >> n >> mod;
    if(n >= 2){
         for(int i = 2; i <= n; ++i){
            fibo[i] = (fibo[i-1] + fibo[i-2]) % mod;
        }
    }
    cout << fibo[n];
}
