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
    ListNode* ReverseList(ListNode* pHead) {//�������ÿ���ڵ����β����½���ͷ��
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