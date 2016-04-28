//TO BE CONTINUED
#include <iostream>
#include <algorithm>
using namespace std;

bool waytosort(int i, int g){return i > g;}

int main(){
    int n;
    string get[1000];
    int length[1000];
    int counter = 0;
    string temp;
    cin >> n;
    cin.ignore();
    for(int i = 0; i < n; ++i){
        getline(cin, temp);
        get[i] = temp;
        length[i] = temp.length();
        //cout << length[i];
    }
    sort(length, length + n,waytosort);
    for(int i = counter; i < n; ++i){
        for(int g = 0; g < n; ++g){
            if(length[i] == get[g].length()){
                cout << get[g] << '\n';
                get[g] = ' ';
                counter++;
                break;
            }
        }
    }
}
