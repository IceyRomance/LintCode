/**
 * Definition of ListNode
 * class ListNode {
 * public:
 *     int val;
 *     ListNode *next;
 *     ListNode(int val) {
 *         this->val = val;
 *         this->next = NULL;
 *     }
 * }
 */


class Solution {
public:
    /*
     * @param node: the node in the list should be deletedt
     * @return: nothing
     */
    void deleteNode(ListNode * node) {
        // write your code here
        if(node == NULL)
        	return;
        if(node->next != NULL){
        	ListNode *pNext = node->next;
        	node->val = pNext->val;
        	node->next = pNext->next;
        	delete pNext;
        	pNext = NULL;
        }
    }
};