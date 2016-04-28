#include <iostream>
using namespace std;
int main(){
    int n,a,b,sum,check = 0;
    char op,eqsign;
    int sponge = 0, patrick = 0;
    cin >> n;
    for(int i = 0; i < n; ++i){
        cin >> a >> op >> b >> eqsign >> sum;
        if(op == '+'){
            check = a + b;
        }else if(op == '-'){
            check = a - b;
        }else if(op == '*'){
            check = a * b;
        }else{
            check = a / b;
        }
        if(check == sum){
            ++sponge;
        }
    }
    for(int i = 0; i < n; ++i){
        cin >> a >> op >> b >> eqsign >> sum;
        if(op == '+'){
            check = a + b;
        }else if(op == '-'){
            check = a - b;
        }else if(op == '*'){
            check = a * b;
        }else{
            check = a / b;
        }
        if(check == sum){
            ++patrick;
        }
    }
    cout << "Spongebob: " << sponge << '\n';
    cout << "Patrick: " << patrick << '\n';

}
