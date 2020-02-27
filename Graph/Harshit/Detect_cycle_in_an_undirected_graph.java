// { Driver Code Starts
//Initial Template for Java

import java.util.*;
import java.io.*;
import java.lang.*;

class DriverClass
{
    public static void main (String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        
        while(t-- > 0)
        {
            ArrayList<ArrayList<Integer>> list = new ArrayList<>();
            int nov = sc.nextInt();
            int edg = sc.nextInt();
            
            for(int i = 0; i < nov+1; i++)
                list.add(i, new ArrayList<Integer>());
                
            for(int i = 1; i <= edg; i++)
            {
                int u = sc.nextInt();
                int v = sc.nextInt();
                list.get(u).add(v);
                list.get(v).add(u);
            }
            if(new DetectCycle().isCyclic(list, nov) == true)
                System.out.println("1");
            else System.out.println("0");
        }
    }
}// } Driver Code Ends
//User function Template for Java

/*
ArrayList<ArrayList<Integer>> list: represent graph containing 'V' number of
                                    vertices and edges between them
V: represent number of vertices
*/
class DetectCycle
{
    
    static boolean is_cyclic(ArrayList<ArrayList<Integer>> list,int i,boolean[] vis,int parent)
    {
        vis[i]=true;
        
        ArrayList<Integer> al=list.get(i);
        
        for(int x:al)
        {
            if(!vis[x])   
           { if(is_cyclic(list,x,vis,i))
            {
                return true;
            }
           }
            else if(x!=parent)
            {
                return true;
            }
            
            
        }
        
        return false;
        
        
        
       
    }
    
    
    
    
    
    
    static boolean isCyclic(ArrayList<ArrayList<Integer>> list, int V)
    {
        // int i=0;
        // boolean flag=false;
        // for(ArrayList<Integer> al:list)
        // {
        //     boolean[] vis=new boolean[list.size()];
            
        //     for(int j=0;j<vis.length;j++)
        //     {
        //         vis[j]=false;
        //     }
            
        //   flag=is_it(list,i,i,vis);
        //   if(flag)
        //   {
        //       return true;
        //   }
            
        // }
           boolean[] vis=new boolean[V];
        for(int i=0;i<V;i++)
        {
            if(!vis[i]){
            if(is_cyclic(list,i,vis,-1))
            {
                return true;
            }
            }
        }
        
        return false;
        
        
       // add your code here
    }
}