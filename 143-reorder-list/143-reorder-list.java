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
    public void reorderList(ListNode head) {
        ListNode mid=getMid(head);
        ListNode midnext=mid.next; //breaking the list into 2 parts
        mid.next=null;
        
        ListNode p2=reverse(midnext); //reversing 2nd part of list
        
        ListNode p1=head,p1next;
        
        while(p1!=null && p2!=null)
        {
            p1next=p1.next;
            p1.next=p2;
            p1=p2;
            p2=p1next;
        }
        
    }
    static ListNode getMid(ListNode head)
    {
        ListNode slow=head,fast=head;
        
        while(fast!=null && fast.next!=null)
        {
            slow=slow.next;
            fast=fast.next.next;
        }
        return slow;
    }
     static ListNode reverse(ListNode head)
     {
         ListNode curr=head;
         ListNode prev=null;
         ListNode forward=null;
         
         while(curr!=null)
         {
             forward=curr.next;
             curr.next=prev;
             prev=curr;
             curr=forward;
         }
         return prev;
     }
}