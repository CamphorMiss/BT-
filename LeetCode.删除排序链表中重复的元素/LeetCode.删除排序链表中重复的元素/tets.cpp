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
        //�Һ����һ���뵱ǰ�ڵ�ֵ����ͬ�Ľڵ㣬�����ڵ�ǰ�ڵ����
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