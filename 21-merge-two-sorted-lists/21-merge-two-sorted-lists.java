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
    public ListNode mergeTwoLists(ListNode list1, ListNode list2) {
        
        //base case
        if(list1==null && list2==null)
            return null;
        
        // edge cases
        if(list1==null)
            return list2;
        
        if(list2==null)
            return list1;
        
         // declaring new list 
         ListNode list3=new ListNode();
         ListNode temp=list3;
        
         while(list1!=null && list2!=null)
         {
             // compare values from both lists
             if(list1.val<=list2.val)
             {
                 // add value in new list
                 temp.next=list1;
                 
                 // to search for next value
                 list1=list1.next;
                 temp=temp.next;
             }
             else{
                 temp.next=list2;
                 list2=list2.next;
                 temp=temp.next;
             }
         }
        
        // what if one of the lists is empty
        temp.next=(list1==null)?list2:list1;
        
        return list3.next;
        
    }
}