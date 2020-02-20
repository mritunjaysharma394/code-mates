// { Driver Code Starts

import java.io.*;
import java.util.*;
import java.lang.*;


class Node
{
    int key, value;
    Node next, pre;

    Node(int key, int value)
    {
        this.key = key;
        this.value = value;
        next = pre = null;
    }
}

public class LRUDesign {

    public static void main(String[] args)throws IOException {
        BufferedReader read = new BufferedReader(new InputStreamReader(System.in));

        int t = Integer.parseInt(read.readLine());

        while(t-- > 0)
        {

            int capacity = Integer.parseInt(read.readLine());
            int queries = Integer.parseInt(read.readLine());
            LRUCache cache = new LRUCache(capacity);
            String str[] = read.readLine().trim().split(" ");
            int len = str.length;
            int itr = 0;

            for(int i = 0; (i < queries) && (itr < len); i++)
            {
                String queryType = str[itr++];
                if(queryType.equals("SET"))
                {
                    int key = Integer.parseInt(str[itr++]);
                    int value = Integer.parseInt(str[itr++]);
                    cache.set(key, value);
                }
                if(queryType.equals("GET")){
                    int key = Integer.parseInt(str[itr++]);
                    System.out.print(cache.get(key) + " ");
                }

            }
            System.out.println();

        }
    }
}

// } Driver Code Ends

/*
class Node
{
    int key, value;
    Node next, pre;

    Node(int key, int value)
    {
        this.key = key;
        this.value = value;
        next = pre = null;
    }
}
*/

class LRUCache
{
    private static HashMap<Integer, Node> map;
    private static int capacity, count;
    private static Node head, tail;

    LRUCache(int cap)
    {
        capacity=cap;
        
        map=new HashMap<>();
        capacity=cap;
        count=0;
        head=new Node(0,0);
        tail=new Node(0,0);
        head.next=tail;
        tail.pre=head;
        head.pre=null;
        tail.next=null;
        
        // Intialize the cache capacity with the given 
        // cap
    }
    
    public static void addToHead(Node node)
    {
         node.next = head.next; 
        node.next.pre = node; 
        node.pre = head; 
        head.next = node; 
        
    }
    
    public static void delNode(Node node)
    {
        node.next.pre=node.pre;
        node.pre.next=node.next;
        
        
    }
    

    // This method works in O(1)
    public static int get(int key)
    {
        if(map.containsKey(key))
        {
            Node node=map.get(key);
            int r=node.value;
            delNode(node);
            addToHead(node);
            return r;
    
        }
        return -1;
        
        
        // your code here
    }

    // This method works in O(1)
    public static void set(int key, int value)
    {
        if(map.containsKey(key))
        {
            Node node=map.get(key);
            node.value=value;
            delNode(node);
            addToHead(node);
            // map.replace(key,node);
           
        }
        else{
            
            Node node=new Node(key,value);
            map.put(key,node);
          
        if(count<capacity)
        {
            addToHead(node);
            count++;
            
        }
        else{
            map.remove(tail.pre.key);
            delNode(tail.pre);
            addToHead(node);
            
        }
            
            
        }
        
        // count++;
        
        
        
        
        
        
        
        
        
        
        
        // your code here
    }
}

