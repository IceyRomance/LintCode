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
	/*
	* @param head: a ListNode
	* @param val: An integer
	* @return: a ListNode
	*/
	ListNode * removeElements(ListNode * head, int val) {
		// write your code here
		if(head == NULL)
			return head;
		ListNode *pre = head;
		ListNode *curr = head->next;
		while(curr != NULL){
			if(curr->val == val){
				pre->next = curr->next;
				curr = curr->next;
			}
			else{
				pre = curr;
				curr = curr->next;
			}
		}

		if(val == head->val)
			head = head->next;
		return head;
	}
};