#define _CRT_SECURE_NO_WARNINGS 1
ListNode* FindKthToTail(ListNode* pListHead, unsigned int k) {
	ListNode*fast=pListHead;
	ListNode*low=pListHead;
	if(pListHead==NULL||k==0)
	{
		return NULL;
	}
	while(k--)
	{
		if(fast)
			fast=fast->next;
		else
			return NULL;
	}
	while(fast)
	{
		fast=fast->next;
		low=low->next;
	}
	return low;
}

