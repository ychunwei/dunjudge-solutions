//CODE BREAKS - out of memory on CPU, but server accepted
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n;
    int a[3000000];
    cin >> n;
    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }
    sort(a, a + n);
    for(int b = 0; b < n; ++b){
        cout << a[b] << ' ';
    }
    cout << "\n";

}
