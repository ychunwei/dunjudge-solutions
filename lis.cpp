//FLAWED LOGIC - PARTIAL 10
#include <iostream>
#include <algorithm>
using namespace std;
bool wayToSort(int j, int k){
    return j > k;
}

int main(){
    int n, counter = 0;
    int longest = 0;
    int combi[5100];
    int a[5100];
    cin >> n;
    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }
    for(int b = 0; b < n; ++b){
        for(int i = counter; i < n; ++i){
            if(a[i] < a[i+1]){
                ++longest;
            }else{
                a[i+1] = a[i];
            }
        }
        combi[b] = longest;
        ++counter;
        longest = 0;
    }
    sort(combi, combi + n, wayToSort);
    cout << combi[0] + 1;

}
