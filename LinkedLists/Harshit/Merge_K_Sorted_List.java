/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) { val = x; }
 * }
 */
class Solution {
    public ListNode mergeKLists(ListNode[] lists) {
        
        if(lists.length==0)
        {
            return new ListNode(0).next;
        }
        ListNode temp=lists[0];
        
        for(int i=1;i<lists.length;i++)
        {
            temp=mergeTwoLists(temp,lists[i]);
            
        }
        return temp;
        
        
        
        
    }
    
    public static ListNode mergeTwoLists(ListNode l1, ListNode l2) {
     
        ListNode res=new ListNode(0);
        ListNode r1=res;
        while(l1!=null && l2!=null)
        {
            if(l1.val<=l2.val)
            {
                res.next=new ListNode(l1.val);
                res=res.next;
                
                if(l1.val==l2.val)
                {
                    res.next=new ListNode(l2.val);
                    res=res.next;
                    l2=l2.next;
                }
                l1=l1.next;
                
            }
            else{
                
                res.next=new ListNode(l2.val);
                res=res.next;
                l2=l2.next;
            }
            
        }
        
        while(l1!=null)
        {
           
            res.next=new ListNode(l1.val);
                res=res.next;
            l1=l1.next;
        }
        
        while(l2!=null)
        {
           
            res.next=new ListNode(l2.val);
                res=res.next;
            l2=l2.next;
        }
        
        return r1.next;
        
        
        
    }
}