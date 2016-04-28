#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;
    for (int i = 1; i <= a; ++i){
        for (int b = 1; b <= a; ++b){
            if (b % 2 != 0 && i % 2 != 0){
                cout << 'o';
            }
            else if(b % 2 != 0 && i % 2 == 0){
                cout << 'x';
            }
            else if(b % 2 == 0 && i % 2 != 0){
                cout << 'x';
            }
            else{
                cout << 'o';
            }
        }
        cout << endl;
    }
    return 0;
}
