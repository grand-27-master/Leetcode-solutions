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
    public ListNode sortList(ListNode head) {
        
        // base case
      if (head == null || head.next == null)
            return head;
        
        // use merge sort
        
        ListNode mid=getMid(head);
        ListNode left=sortList(head);
        ListNode right=sortList(mid);
        return mergeLists(left,right);
    }
    static ListNode getMid(ListNode head)
    {
         ListNode midPrev = null;
        while (head != null && head.next != null) {
            midPrev = (midPrev == null) ? head : midPrev.next;
            head = head.next.next;
        }
        ListNode mid = midPrev.next;
        midPrev.next = null;
        return mid;
    }
    
    static ListNode mergeLists(ListNode l1, ListNode l2)
    {
        ListNode l3=new ListNode();
        ListNode temp=l3;
        
       
        
        while(l1!=null && l2!=null)
        {
            if(l1.val<l2.val)
            {
                temp.next=l1;
                l1=l1.next;
                temp=temp.next;
            }
            else
            {
                 temp.next=l2;
                l2=l2.next;
                temp=temp.next;
            }
        }
       
         if(l1==null)
            temp.next=l2;
        else
            temp.next=l1;
        return l3.next;
    }
}