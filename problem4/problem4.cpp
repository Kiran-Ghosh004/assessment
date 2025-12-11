#include <bits/stdc++.h>
using namespace std;

int lastStoneWeight(vector<int>& stones) {
    priority_queue<int> pq;
    for (int s : stones) pq.push(s);
    while (pq.size() > 1) {
        int y = pq.top(); pq.pop(); 
        int x = pq.top(); pq.pop();  
        if (y != x) pq.push(y - x);
    }
    return pq.empty() ? 0 : pq.top();
}
int main() {
    vector<int> stones = {2,3,6,2,4};
    cout << lastStoneWeight(stones);
}
