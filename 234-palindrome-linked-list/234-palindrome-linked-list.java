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
    public boolean isPalindrome(ListNode head) {
        
        // find middle
        ListNode mid=findMiddle(head);
        
        // find the reverse of LL from mid
        ListNode midHead=reverse(mid);
        
        while(head!=null && midHead!=null)
        {
            if(head.val==midHead.val)
            {
                head=head.next;
                midHead=midHead.next;
            }
            else
                return false;
        }
        return true;
        
    }
    static ListNode reverse(ListNode head)
    {
        ListNode temp=head;
        ListNode prev=null;
        
        while(temp!=null)
        {
            ListNode forward=temp.next;
            temp.next=prev;
            prev=temp;
            temp=forward;
        }
        return prev;
    }
    static ListNode findMiddle(ListNode head)
    {
        ListNode slow=head, fast=head;
        
        while(fast!=null && fast.next!=null)
        {
            slow=slow.next;
            fast=fast.next.next;
        }
        return slow;
    }
}