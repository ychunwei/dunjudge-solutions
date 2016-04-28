#include <bits/stdc++.h>
using namespace std;
int main(){
    int h,w;
    int potato = 0,peanut = 0;
    char temp;
    cin >> h >> w;
    for(int i = 0; i < h; ++i){
        for(int i = 0; i < w; ++i){
            cin >> temp;
            if(temp == 'O'){
                potato++;
            }
            else if(temp == 'N'){
                peanut++;
            }
        }
    }
    cout << potato << ' ' << peanut;
}
