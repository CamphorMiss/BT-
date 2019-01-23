#define _CRT_SECURE_NO_WARNINGS 1
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeElements(struct ListNode* head, int val) {
    
    struct ListNode* pcur=NULL;
    struct ListNode*pcurpre=NULL;
    pcur=head;
    pcurpre=pcur;
    if(head==NULL)
    {
        return NULL;
    }
    else
    {
        while(pcur)
        {
            if(pcur->val==val)
            {
                if(head==pcur)
                {
                    head=head->next;
                    free(pcur);
                    pcur=head;
                }
                else
                {
                     pcurpre->next=pcur->next;
                     free(pcur);
                      pcur=pcurpre->next;
                }
               
            }
            else
            {
                pcurpre=pcur;
                pcur=pcur->next;
            }
        }
    }
   
    return head;
    
}

