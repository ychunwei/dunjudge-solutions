//PARTIAL 60
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    int result[22];
    string temp;
    cin >> n;
    for(int i = 0; i < n; ++i){
        cin >> temp;
        if(temp[0] == '#'){
            result[i] = 1;
        }else{
             result[i] = 0;
        }
        for(int b = 1; b <= n; b++){
            if(temp[b] == 'A'){
            result[i] = 1;
            }
            else if(temp[b] == 'B'){
                result[i] = 1;
            }
            else if(temp[b] == 'C'){
                result[i] = 1;
            }
            else if(temp[b] == 'D'){
                result[i] = 1;
            }
            else if(temp[b] == 'E'){
                result[i] = 1;
            }
            else if(temp[b] == 'F'){
                result[i] = 1;
            }
            else if(temp[b] == '0'){
                result[i] = 1;
            }
            else if(temp[b] == '1'){
                result[i] = 1;
            }
            else if(temp[b] == '2'){
                result[i] = 1;
            }
            else if(temp[b] == '3'){
                result[i] = 1;
            }
            else if(temp[b] == '4'){
                result[i] = 1;
            }
            else if(temp[b] == '5'){
                result[i] = 1;
            }
            else if(temp[b] == '6'){
                result[i] = 1;
            }
            else if(temp[b] == '7'){
                result[i] = 1;
            }
            else if(temp[b] == '8'){
                result[i] = 1;
            }
            else if(temp[b] == '9'){
                result[i] = 1;
            }
            else{
                result[i] = 0;
                break;
            }
        }
    }
    for(int i = 0; i < n; ++i){
        (result[i] == 1) ? cout << "Hexadecimal" << '\n' : cout << "Not Hexadecimal" << '\n';
    }
}
