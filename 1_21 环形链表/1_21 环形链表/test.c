#define _CRT_SECURE_NO_WARNINGS 1
Definition for singly-linked list.
* struct ListNode {
	*     int val;
	*     struct ListNode *next;
	* };
	*/
		bool hasCycle(struct ListNode *head) 
	{
		struct ListNode *low=NULL;
		struct ListNode*fast=NULL;
		int ret=0;
		low=head;
		fast=head;
		while(fast&&fast->next)
		{
			fast=fast->next->next;
			low=low->next;
			if(fast==low)
			{
				ret=1;
				break;
			}
		}
		if(ret==0)
		{ 
			return false;
		}
		else
		{
			return true;
		}



	}

