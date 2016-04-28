#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,k;
    int counter = 0;
    int input[100];
    cin >> n >> k;
    cin >> input[0];
    for(int i = 1; i < n; ++i){
        cin >> input[i];
        if(input[i-1] - input[i] >= k){
            counter++;
        }
    }
    cout << counter;
}
