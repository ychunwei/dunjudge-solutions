#include <iostream>
using namespace std;
int main(){
    int h,w;
    int sum = 0;
    char c[500][500];
    cin >> h >> w;
    for(int i = 0; i < h; ++i){
        for(int j = 0; j < w; ++j){
            cin >> c[i][j];
            if (c[i][j] == '#'){
                ++sum;
            }
        }
    }
    cout << sum;
}
