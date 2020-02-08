package com.company.Linked_List;

class ListNode{
    int val;
    ListNode next;
    ListNode(int val)
    {
        this.val=val;
        this.next=null;
    }
}


public class Add_Two_Numbers {

    public ListNode addTwoNumbers(ListNode l1, ListNode l2) {

        ListNode l=new ListNode(0);

        ListNode p=l1,q=l2,curr=l;
        int c=0;

        while(p!=null || q!=null)
        {
            int x=(p!=null)?p.val:0;
            int y=(q!=null)?q.val:0;
            int sum=x+y+c;
            c=sum/10;
            curr.next=new ListNode(sum%10);
            curr=curr.next;
            if(p!=null){
                p=p.next;
            }
            if(q!=null)
            {
                q=q.next;
            }

        }

        if(c!=0)
        {
            curr.next=new ListNode(c);
        }
        return l.next;





    }


}
