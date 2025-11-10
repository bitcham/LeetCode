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

    public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
        ListNode results = new ListNode(9999);
        ListNode current = results;
        int carry = 0;
        while(l1 != null || l2 != null){
            int result = 0;
            if(l1 != null){
                result += l1.val;
                l1 = l1.next;
            }

            if(l2 != null){
                result += l2.val;
                l2 = l2.next;
            }
            
            result += carry;
            carry = 0;
            
            if(result >= 10){
                result -= 10;
                carry++;
            }

            if(current.val == 9999){
                current.val = result;
            } else{
                current.next = new ListNode(result);
                current = current.next;
            }
        }
        if(carry == 1){
            current.next = new ListNode(1);
        }
        return results;

    }
}