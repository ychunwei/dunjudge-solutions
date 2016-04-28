
#include <iostream>
using namespace std;
int main(){
    int n;
    string b[100];
    string temp;
    char last;
    cin >> n;
    for(int i = 0; i < n; ++i){
        cin.ignore();
        getline(cin,b[i]);
    }
    for(int i = 0; i < n; ++i){
        temp = b[i];
        last = temp[temp.length()-1];
        ((int)last % 2 == 0) ? cout << "even" << '\n' : cout << "odd" << '\n';
    }
}
