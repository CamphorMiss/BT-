#define _CRT_SECURE_NO_WARNINGS 1
struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};*/
class PalindromeList {
public:
	bool chkPalindrome(ListNode* A) {

		// write code here
		int arr[900]={0};
		int left=0;
		int right=0;
		ListNode * ret=A;
		int count=0;
		while(ret!=NULL)
		{
			arr[count]=ret->val;
			count++;
			ret=ret->next;
		}
		right=count-1;
		while(left<=right)
		{
			if(arr[left]!=arr[right])
			{
				return false;
			}
			left++;
			right--;
		}
		return true;

	}
};

