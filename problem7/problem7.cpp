// jump game 
// time complexity: O(n)
// space complexity: O(1)


#include <bits/stdc++.h>
using namespace std;
int jump(vector<int>& nums){
    int jumps =0, end = 0, farthest = 0;
    for(int i =0; i < nums.size() - 1; i++){
        farthest = max(farthest, i + nums[i]);
        if(i==end){
            jumps++;
            end =farthest;
        }
    }
    return jumps;
}
int main() {
    vector<int> nums = {2, 4, 1, 1, 1, 1};
    cout<<jump(nums);
}
