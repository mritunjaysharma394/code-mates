/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) { val = x; }
 * }
 */
class Solution {
    
    ListNode superHead=null;
    
    
    public ListNode swapPairs(ListNode head) {
        
      Solution s1=new Solution();
        s1.swap(null,head);
        return s1.superHead;
    }
    
   public void swap(ListNode prev_h,ListNode next_h)
   {
       ListNode c1=next_h;
       ListNode curr=next_h;
       ListNode prev=null;
       ListNode next=null;
       
       if(next_h==null)
       {
           return;
       }
       
       int count=0;
       
       while(count<2 && curr!=null)
       {
           next=curr.next;
           curr.next=prev;
           prev=curr;
           curr=next;
           count++;
       }
       if(prev_h==null)
       {
           superHead=prev;
       }
        else{
            
            prev_h.next=prev;
        }
       
       swap(c1,curr);
      // return;
       
   }
}