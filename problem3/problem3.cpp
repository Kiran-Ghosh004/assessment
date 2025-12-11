// two sum problem implementation in C++
// time complexity: O(n)
// space complexity: O(n)

#include<bits/stdc++.h>
using namespace std;

vector<int>twosum(vector<int>nums,int target){
    unordered_map<int,int>mp;
    vector<int>res;
    for(int i=0;i<nums.size();i++){
        int complement=target-nums[i];
        if(mp.find(complement)!=mp.end()){
            res.push_back(mp[complement]);
            res.push_back(i);
            return res;
        }
        mp[nums[i]]=i;
    }
    return res;
}

int main(){
    vector<int>nums={2,7,11,15};
    int target=9;
    vector<int>result=twosum(nums,target);
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }
    return 0;
}

   