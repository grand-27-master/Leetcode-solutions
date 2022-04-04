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
    public ListNode swapNodes(ListNode head, int k) {
//         int n=arr.length;
//         ArrayList<Integer>arr=new ArrayList<>();
       
        
//         while(head!=null)
//         {
//             arr.add(head.val);
//             head=head.next;
//         }
        
        
       ListNode fast = head, second = head, first = head;
        for(int i=0; i<k-1; i++)    fast = fast.next;
        first = fast;
        while(fast.next != null){
            fast = fast.next;
            second = second.next;
        }
        int temp = first.val;
        first.val = second.val;
        second.val = temp;
        return head;
    }
}