#define _CRT_SECURE_NO_WARNINGS 1
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* middleNode(struct ListNode* head) 
{
    struct ListNode*fast=NULL;
    struct ListNode*low=NULL;
    fast=head;
    low=head;
  
         while(fast&&fast->next)
       {
        fast=fast->next->next;
        low=low->next;
       }

      return low;
    
    
}

