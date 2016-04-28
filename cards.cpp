#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int m,k,length,store;
    string temp;
    deque <int> cards;
    cin >> m >> k;
    cin >> temp;
    for(int i = 0; i < m; ++i){
        cards.push_back(i);
    }

    length = temp.length();

    for(int i = 0; i < temp.length(); ++i){
         if(temp[i] == '.'){
            break;
        }
        else if(temp[i] == 'A'){
            cards.push_back(cards.front());
            cards.pop_front();
        }
        else if(temp[i] == 'B'){
            cards.push_back(cards[1]);
            store = cards.front();
            cards.pop_front();
            cards.pop_front();
            cards.push_front(store);
        }
    }
    cout << cards[k-1] << ' ' << cards[k] << ' ' << cards[k+1] << '\n';

}


