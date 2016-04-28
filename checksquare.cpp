#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n, compare;
    double check;
    cin >> n;
    check = sqrt(n);
    compare = check;
    (check == compare) ? cout << "yes" : cout << "no";
}
