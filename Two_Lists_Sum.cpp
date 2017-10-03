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
     * @param l1: the first list
     * @param l2: the second list
     * @return: the sum list of l1 and l2 
     */
    ListNode * addLists(ListNode * l1, ListNode * l2) {
        // write your code here
        if(l1 == NULL){
        	return l2;
        }
        if(l2 == NULL){
        	return l1;
        }
        int c = 0;
        int t = 0;
        ListNode *head = new ListNode(0);
        ListNode *p = head;
        while(l1 != NULL && l2 != NULL){
        	t = l1->val + l2->val + c;
        	c = t/10;
        	t = t%10;
        	p->next	= new ListNode(t);
        	p = p->next;
        	l1 = l1->next;
        	l2 = l2->next;
        }
        while(l1 != NULL && l2 == NULL){
        	t = l1->val + c;
        	c = t/10;
        	t = t%10;
        	p->next = new ListNode(t);
        	p = p->next;
        	l1 = l1->next;
        }
        while(l1 == NULL && l2 != NULL){
        	t = l2->val + c;
        	c = t/10;
        	t = t%10;
        	p->next = new ListNode(t);
        	p = p->next;
        	l2 = l2->next;
        }
        if(c != 0){
        	p->next = new ListNode(c);
        }
        return head->next;
    }
};