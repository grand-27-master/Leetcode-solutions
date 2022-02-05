# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def mergeKLists(self, lists: List[Optional[ListNode]]) -> Optional[ListNode]:
        
        arr = []
        node = ListNode()
        start = node
        for i in range(len(lists)):
            while lists[i] != None:
				#we merge all the value of the linked list into a single array
                arr.append(lists[i].val)
                lists[i] = lists[i].next
        
		#after we loop through the sorted array. Then we add all its values one per one into the listNode
        for i in sorted(arr):
            start.next = ListNode(i)
            start = start.next
        
		#we return the list.
        return node.next