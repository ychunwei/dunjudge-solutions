//FAILED

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, highest = 0, sum;
    int temp;
    vector <int> pot;
    cin >> n;
    for(int i = 0; i < n; ++i){
        cin >> temp;
        pot.push_back(temp);
        if(pot[i] < 0 ){
            sum = 0;
        }else{
            sum += pot[i];
        }
        if(sum > highest){
            highest = sum;
        }
    }
    cout << highest;
}
