
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,a,b;
    long long int sum = 0;
    cin >> n;
    for(int i = 0; i < n; ++i){
        cin >> a >> b;
        sum += a * b;
    }
    cout << sum;
}
