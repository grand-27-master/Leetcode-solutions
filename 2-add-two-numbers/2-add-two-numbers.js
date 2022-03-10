/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} l1
 * @param {ListNode} l2
 * @return {ListNode}
 */
var addTwoNumbers = function(l1, l2) {
    let dummy = new ListNode();
  let cur = dummy;
  let carry = 0;

  while (l1 || l2 || carry) {
    var sum = (l1?.val || 0) + (l2?.val || 0) + carry;
    var resultNode = new ListNode(sum % 10);
    carry = sum > 9 ? 1 : 0;

    l1 = l1?.next;
    l2 = l2?.next;
    cur.next = resultNode;
    cur = cur.next;
  }

  return dummy.next;
};