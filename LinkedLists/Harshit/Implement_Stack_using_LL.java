package Linked_List;


//{ Driver Code Starts
import java.util.*;

class StackNode {
 int data;
 StackNode next;
 StackNode(int a) {
     data = a;
     next = null;
 }
}

public class Implement_Stack_using_LL {

 public static void main(String args[]) {
     Scanner sc = new Scanner(System.in);
     int t = sc.nextInt();
     while (t > 0) {
         MyStack obj = new MyStack();
         int Q = sc.nextInt();
         while (Q > 0) {
             int QueryType = 0;
             QueryType = sc.nextInt();
             if (QueryType == 1) {
                 int a = sc.nextInt();
                 obj.push(a);
             } else if (QueryType == 2) {
                 System.out.print(obj.pop() + " ");
             }
             Q--;
         }
         System.out.println("");
         t--;
     }
 }
}
//} Driver Code Ends
/*
The structure of the node of the stack is
class StackNode
{
 int data;
 StackNode next;
 StackNode(int a)
 {
    data = a;
    next = null;
 }
}
*/
class MyStack {

 // Note that top is by default null
 // in Java
 StackNode top;

 void push(int a) {
     
     if(top==null)
     {
         top=new StackNode(a);
         
     }
     else{
         StackNode x=new StackNode(a);
         StackNode t=top;
         
         while(t.next!=null)
         {
             t=t.next;
         }
         t.next=x;
     }
     
     
     // Add your code here
 }
 int pop() {
     
     if(top==null)
     {
         return -1;
     }
     else{
         int res;
         StackNode t=top;
         if(t.next==null)
         {
             res=t.data;
             top=null;
             return res;
         }
         
         
         
         while(t.next.next!=null)
         {
             t=t.next;
         }
         res=t.next.data;
         t.next=null;
         return res;
         
         
     }
     // Add your code here
 }
}
