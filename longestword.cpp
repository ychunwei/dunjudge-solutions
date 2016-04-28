#include <iostream>
using namespace std;
int main(){
    int n;
    int m = 0;
    string s[1000];
    string temp,high;
    cin >> n;
    for(int i = 0; i < n; ++i){
        cin >> s[i];
        temp = s[i];
        if(temp.length() > m){
            m = temp.length();
            high = temp;
        }
    }
    cout << high;
}
