
#include <iostream>
#include <algorithm>
using namespace std;

bool waytosort(int i, int j){
    return i > j;
}

int main(){
    int n;
    int sum = 0;
    int divisor = 0;
    bool toggle = true;
    int a[100];
    cin >> n;
    for(int i = 0; i < n; ++i){
        cin >> a[i];
        sum += a[i];
    }
    sort(a,a+n,waytosort);

    if(n > 3){
        for(int i = 0; i < n; ++i){
            if((i+1) % 4 == 0){
                sum -= a[i];
            }
        }
    }

    cout << sum;
}
