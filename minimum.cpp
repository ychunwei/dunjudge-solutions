//PARTIAL 50
#include <iostream>
using namespace std;
int findMin(int N, int A[]){
    int m;
    m = A[0];
    for(int i = 1; i < N; ++i){
        if(A[i] < m){
            m = A[i];
        }
    }
    return m;
}
int main(){

}
