package Linked_List;

//public class{
//
//}

//{ Driver Code Starts
import java.util.*;
class QueueNode
{
	int data;
	QueueNode next;
	QueueNode(int a)
	{
	    data = a;
	    next = null;
	}
}

public class  Implement_Queue_Using_LL  {
	public static void main(String args[])
	{
		 Scanner sc = new Scanner(System.in);
		 int t=sc.nextInt();
		 while(t>0)
		 {
			MyQueue obj = new MyQueue();
			int Q = sc.nextInt();
			while(Q>0)
			{
				int QueryType = 0;
				QueryType = sc.nextInt();
				if(QueryType == 1)
				{
					int a = sc.nextInt();
					
					obj.push(a);
					
				}else if(QueryType == 2)
				{
				System.out.print(obj.pop()+" ");
				}
				Q--;
			}
			System.out.println("");
			t--;
		 }
	}
}




//} Driver Code Ends
/*The structure of the node of the queue is
class QueueNode
{
	int data;
	QueueNode next;
	QueueNode(int a)
	{
	    data = a;
	    next = null;
	}
}*/

class MyQueue
{
 QueueNode front, rear;
 
 // This function should add an item at
 // rear
	void push(int a)
	{
	    
	    if(rear==null && front==null)
	    {
	        rear=new QueueNode(a);
	        front=rear;
	    }
	    else{
	        
	        rear.next=new QueueNode(a);
	        rear=rear.next;
	    }
	    
	    
	    
     // Your code here
	}
	
 // This function should remove front
 // item from queue and should return
 // the removed item.
	int pop()
	{
	    if(front==null && rear==null)
	    {
	        return -1;
	    }
	    int y=front.data;
	    if(front.next==null)
	    {
	        front=null;
	        rear=null;
	        return y;
	    }
	    
	    front=front.next;
	    return y;
     // Your code here
	}
}




