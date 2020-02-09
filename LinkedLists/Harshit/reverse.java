package com.company.Linked_List;

class  LLNode{
    int data;
    LLNode next;

    public LLNode(int data)
    {
        this.data=data;
        this.next=null;
    }
}


public class reverse {

    public static void main(String[] args)
    {
        LLNode l1=new LLNode(5);
        l1.next=new LLNode(4);
        l1.next.next=new LLNode(3);
        l1.next.next.next=new LLNode(2);
        l1.next.next.next.next=new LLNode(1);

        l1=reverse(l1);

        while(l1!=null)
        {
            System.out.println(l1.data);
            l1=l1.next;
        }



    }

    public static LLNode reverse(LLNode l)
    {
        LLNode prev=null;
        LLNode curr=l;
        LLNode next=null;

        while(curr!=null)
        {
            next=curr.next;
            curr.next=prev;
            prev=curr;
            curr=next;
        }

        return prev;

    }


}
