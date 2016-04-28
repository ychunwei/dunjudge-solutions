//PARTIAL 40
#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int power(int b,int j){
    if(j == 0){
        return 1;
    }
    else{
       return b * power(b,j-1);
    }
}

int main(){
    string input;
    char bin[32];
    int length = 0,temp = 0, maxi = 0;
    unsigned int sum = 0;
    cin >> input;
    length = input.length() - 1;
    strcpy(bin, input.c_str());
    maxi = length;
    for(int i = 0; i <= length; ++i){
        if(bin[i] == '1'){
            sum += power(2,maxi);
        }
        --maxi;
    }
    cout << sum;
}
