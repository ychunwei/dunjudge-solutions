
#include <iostream>
using namespace std;
int main(){
    int n,c,temp,counter = 1;
    cin >> n >> c;
    temp = n;
    if(c > 0){
        for(int i = 1; i < c; ++i){
            if(temp != 1){
                (temp % 2 == 0) ? temp = temp / 2 : temp = 3*temp + 1;
                ++counter;
            }
        }
        if(c <= counter){
             cout << temp;
        }
        else cout << "-1";
    }
}
