// add two numbers 
// time complexity: O(max(m,n)) where m and n are the lengths of the two lists
// space complexity: O(max(m,n))



#include <bits/stdc++.h>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummy = new ListNode(0);
        ListNode* curr = dummy;
        int carry = 0;
        while (l1 || l2 || carry) {
            int sum = carry;
            if (l1) {
                sum += l1->val;
                l1 = l1->next;
            }
            if (l2) {
                sum += l2->val;
                l2 = l2->next;
            }
            carry = sum / 10;
            int digit = sum % 10;

            curr->next = new ListNode(digit);
            curr = curr->next;
        }
        return dummy->next;
    }
};
ListNode* createList(vector<int>& nums) {
    ListNode* head = new ListNode(nums[0]);
    ListNode* temp = head;
    for (int i = 1; i < nums.size(); i++) {
        temp->next = new ListNode(nums[i]);
        temp = temp->next;
    }
    return head;
}
void printList(ListNode* head) {
    while (head) {
        cout << head->val;
        if (head->next) cout << " -> ";
        head = head->next;
    }
    cout << endl;
}
int main() {
    vector<int> a = {1,2,3};
    vector<int> b = {4,5,6};

    ListNode* l1 = createList(a);
    ListNode* l2 = createList(b);

    Solution sol;
    ListNode* result = sol.addTwoNumbers(l1, l2);

    printList(result);  // Output: 5 -> 7 -> 9
}
