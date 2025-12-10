#include <bits/stdc++.h>
using namespace std;

string frequencySort(string s) {
    unordered_map<char,int> freq;
    for (char c : s) freq[c]++;

    vector<pair<int,char>> arr;  // (frequency, character)
    for (auto &p : freq) arr.push_back({p.second, p.first});

    sort(arr.begin(), arr.end());      // ascending by frequency
    reverse(arr.begin(), arr.end());   // make it descending

    string result = "";
    for (auto &p : arr) {
        result.append(p.first, p.second);
    }

    return result;
}

int main() {
    string s = "tree";
    cout << frequencySort(s);
}
