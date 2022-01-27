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
    public ListNode rotateRight(ListNode head, int k) {
        if(k==0 || head==null || head.next==null)
            return head;
        
        // find length of list
        int length=1;
        ListNode curr=head;
        
        while(curr.next!=null)
        {
            length++;
            curr=curr.next;
        }
        
        curr.next=head; // forming a cycle
        k=k%length; // to avoid unecessary rotations
        k=length-k;
        
        while(k-- > 0)
            curr=curr.next;
        
        // break the node
        head=curr.next;
        curr.next=null;
        
        return head;
    }
}