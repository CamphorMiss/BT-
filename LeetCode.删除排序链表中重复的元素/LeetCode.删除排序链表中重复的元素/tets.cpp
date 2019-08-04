/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        //找后面第一个与当前节点值不相同的节点，链接在当前节点后面
        if(head==NULL||head->next==NULL)
            return head;
        ListNode *pcur=head;
         ListNode *ret=pcur->next;
        while(pcur)
        {
            ret=pcur->next;
        while(ret&&pcur->val==ret->val)
        {
            ret=ret->next;
        }
        pcur->next=ret;
        pcur=pcur->next;
    }
        return head;
    }
};