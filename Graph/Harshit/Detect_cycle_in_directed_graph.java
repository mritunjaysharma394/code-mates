// { Driver Code Starts
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
            }
            if(new DetectCycle().isCyclic(list, nov) == true)
                System.out.println("1");
            else System.out.println("0");
        }
    }
}// } Driver Code Ends
/*Complete the function below*/

/*
ArrayList<ArrayList<Integer>> list: to represent graph containing 'v'
                                    vertices and edges between them
V: represent number of vertices
*/
class DetectCycle
{
    static boolean is_it(ArrayList<ArrayList<Integer>> list,int i,boolean[] vis,boolean[] rec)
    {
        if(rec[i])
        {
            return true;
        }
        if(vis[i])
        {
            return true;
        }
        
        rec[i]=true;
        vis[i]=true;
        
        ArrayList<Integer> al=list.get(i);
        
        for(int x:al)
        {
            if(is_it(list,i,vis,rec))
            {
                return true;
            }
        }
        
        rec[i]=false;
        
        return false;
        
    }
    
    static boolean is_cyclic(ArrayList<ArrayList<Integer>> list,int i,HashMap<Integer,Boolean> hm)
    {
        if(hm.get(i))
        {
            return true;
        }
        // hm.get(i)=true;
        hm.replace(i,true);
        
        ArrayList<Integer> al=list.get(i);
        
        for(int x:al)
        {
            if(hm.containsKey(x))
            {
                if(hm.get(x)==false)
                {
                     if(is_cyclic(list,x,hm))
                     {
                         return true;
                     }
                     hm.replace(x,false);
                }
                else{
                    return true;
                }
            }
            
            
        }
        
        
        
        return false;
        
        
        
    }
    
    
    static boolean dfs(ArrayList<ArrayList<Integer>> list,int i,boolean[] vis,boolean[] st)
    {
        if(!vis[i])
        {
            vis[i]=true;
            st[i]=true;
            
            ArrayList<Integer> al=list.get(i);
            
            for(int x:al)
            {
                if(!vis[x])
                {
                    if(dfs(list,x,vis,st))
                    {
                     return true;   
                    }
                }
                else if(st[x])
                {
                    return true;
                }
            }
            
            
        }
        st[i]=false;
        return false;
        
    }
    
    
    static boolean isCyclic(ArrayList<ArrayList<Integer>> list, int V)
    {
        
        boolean[] vis=new boolean[V];
        boolean[] rec=new boolean[V];
        
        for(int i=0;i<V;i++)
        {
            if(dfs(list,i,vis,rec))
            {
                return true;
            }
        }
        
        
            
            // for(int j=0;j<vis.length;j++)
            // {
            //     vis[j]=false;
            // }
        
        // int i=0;
        
        // HashMap<Integer,Boolean> hm=new HashMap<>();
        
        // for(i=0;i<list.size();i++)
        // {
        //   if(list.get(i).size()>0)
        //   {
        //       hm.put(i,false);
        //  }
        // }
        
        // // System.out.println(hm.keySet());
        
        // // boolean[] vis=new boolean[list.size()];
        
        // for(int j:hm.keySet())
        // {
        //     // HashMap<>
        //     HashMap<Integer,Boolean> hp=new HashMap<>(hm);
            
        //     if(is_cyclic(list,j,hm))
        //     {
        //         return true;
        //     }
            
            
            
            // hm.replace(j,true);
            // // vis[i]=true;
            // ArrayList<Integer> al=list.get(j);
            
            
            
            
            
            // for(int x:al)
            // {
                
    
            //     if(hm.containsKey(x))
            //     {
            //     if(hm.get(x)==false)
            //     {
            //         hm.replace(x,true);
            //     }
            //     else{
            //         // System.out.println(x+" j "+j);
            //         return true;
            //     }
            //     }
                
            // }
            
            
            
            // vis[i]=false;
            
            // 
            // boolean[] rec=new boolean[V];
    
            // if(is_it(list,i,vis,rec))
            // {
            //     return true;
            // }
         
            // System.out.print(i+" ");
            // System.out.println(al);
            // i++;
        // }
        
        // return true;
        
        
        
        
        return false;
        
        
        
        // add your code here
    }
}