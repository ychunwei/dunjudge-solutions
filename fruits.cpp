#include <bits/stdc++.h>
using namespace std;
//n = cases, k is day delay, g is given fruits, e is eatable
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,k,temp;
    vector<int> g,e;
    cin >> n >> k;
    for(int i = 0; i < n; ++i){
        cin >> temp;
        g.push_back(temp);
    }
    for(int i = 0; i < n; ++i){
        cin >> temp;
        e.push_back(temp);
    }

}

