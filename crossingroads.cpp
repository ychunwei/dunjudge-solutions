#include <iostream>
using namespace std;
int main(){
    int l,s,h;
    int total = 0,total1 = 0;
    cin >> l >> s >> h;
    total = l - s + l - h;
    total1 = s + h;
    (total < total1) ? cout << total : cout << total1;
}
