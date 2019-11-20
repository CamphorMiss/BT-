/*
struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
			val(x), next(NULL) {
	}
};*/
class Solution {
public:
    ListNode* ReverseList(ListNode* pHead) {//把链表的每个节点依次插入新劫镖头中
        ListNode* newhead=NULL;
        ListNode* cur=pHead;
        ListNode* ret=cur;
        for(;cur!=NULL;)
        {
            ret=cur->next;
            cur->next=newhead;
            newhead=cur;
            cur=ret;
        }
        return newhead;

    }
};