// longest substring without repeating characters
// time complexity: O(n)
// space complexity: O(min(m,n)) where m is the size of the charset


#include <bits/stdc++.h>
using namespace std;
int lengthOfLongestSubstring(string s) {
    vector<int>last(256,-1);
    int l=0, maxLen=0;
    for (int r = 0; r < s.size(); r++) {
        if (last[s[r]] >= l) {
            l = last[s[r]] + 1;  // move left pointer
        }
        last[s[r]] = r;
        maxLen = max(maxLen, r-l +1);
    }

    return maxLen;
}

int main() {
    cout << lengthOfLongestSubstring("zxyzxyz"); 
}
