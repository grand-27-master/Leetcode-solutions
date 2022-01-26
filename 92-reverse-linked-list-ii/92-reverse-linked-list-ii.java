/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode reverseBetween(ListNode head, int left, int right) {
        
        // base case
        if(left==right)
            return head;
        
        ListNode leftprev=head;
        if(left==1)
            leftprev=null;
        for(int i=2;i<left;i++)
            leftprev=leftprev.next;
        
        // 2 pointers
        ListNode leftpointer=head;
        ListNode rightpointer=head;
        
        // iterate both through left & right
        for(int i=1;i<left;i++)
            leftpointer=leftpointer.next;
        
        for(int i=1;i<right;i++)
            rightpointer=rightpointer.next;
        
        ListNode rightnext=rightpointer.next;
        
        // reverse given part
        ListNode p = rightnext;
        ListNode q = rightnext;
        ListNode r = leftpointer;
        
        while (r!=rightnext) {
	        p = q;
	        q = r;
	        r = r.next;
	        q.next = p;
        }
        if (leftprev!=null)
            leftprev.next = q;
        else
            head=q;
        return head;
    }
}