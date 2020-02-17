/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode(int x) { val = x; }
 * }
 */
class Solution {
    public ListNode removeNthFromEnd(ListNode head, int n) {
        
        ListNode t=head;
        ListNode t1=head;
        int count=0;
        while(t!=null)
        {
            t=t.next;
            count++;
        }
        
        int res=count-n;
        
        
        if(res==0)
        {
            head=head.next;
            return head;
        }
        else{
            
            int c1=0;
            
            while(c1!=res-1)
            {    
                head=head.next;
                c1++;
            }
            head.next=head.next.next;
            
            return t1;
            
        }
            
            
        
    }
}

// Another Optimized Solution 

class Solution {
    public ListNode removeNthFromEnd(ListNode head, int n) {
        
        ListNode t1=head;
        ListNode t2=head;
        
        for(int i=1;i<=n+1;i++)
        {
            try{
            t1=t1.next;
            }
            catch(Exception e)
            {
                head=head.next;
                return head;
            }
        }
        while(t1!=null)
        {
            t1=t1.next;
            t2=t2.next;
        }
        
        t2.next=t2.next.next;
        
//         if(head!=null)
//         {
        
        return head;
       
        
            
            
        
    }
}