
//https://leetcode.com/problems/palindrome-linked-list/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
private:
    ListNode* getmid(ListNode* &head){
        ListNode* slow = head;
        ListNode* fast = head->next;
        
        while(fast!=NULL && fast->next!=NULL){
            fast = fast->next->next;
            slow = slow->next;
        }
        return slow;
    }
    ListNode* reverse(ListNode* & head){
        ListNode* curr = head;
        ListNode* prev = nullptr;
        ListNode* nxt =  nullptr;
        
        while(curr!=nullptr){
            nxt = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nxt;
        }
        return prev;
    }
public:
    bool isPalindrome(ListNode* head) {
        //Approach2:
        if(head == nullptr || head->next == nullptr){
            return true;
        }
        //step1: find middle
        ListNode* middle = getmid(head);
        //step2: reverse mid ke aage ki linked list
        ListNode* temp = middle->next;
        middle->next = reverse(temp);
        //step3: compare both halves
        ListNode* head1 = head;
        ListNode* head2 = middle->next;
        
        while(head2!=nullptr){
            if(head2->val != head1->val){
                return false;
            }
            head1 = head1->next;
            head2 = head2->next;
        }
        //step4 : linked list ko wapis sahi kardo
        temp = middle->next;
        middle->next = reverse(temp);
        
        
        return true;
    }
};