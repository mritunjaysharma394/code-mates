package graph;

//public class  {
//
//}
//{ Driver Code Starts
import java.util.*;
import java.io.*;
import java.lang.*;

class DriverClass
{
 public static void main (String[] args)throws IOException 
 {
     BufferedReader read = new BufferedReader(new InputStreamReader(System.in));
     int t = Integer.parseInt(read.readLine());
     
     while(t-- > 0)
     {
         ArrayList<ArrayList<Integer>> list = new ArrayList<>();
         String st[] = read.readLine().trim().split("\\s+");
         int edg = Integer.parseInt(st[0]);
         int nov = Integer.parseInt(st[1]);

         for(int i = 0; i < nov+1; i++)
             list.add(i, new ArrayList<Integer>());
             
         String s[] = read.readLine().trim().split("\\s+");
         int p = 0;
         for(int i = 1; i <= edg; i++)
         {    int u = Integer.parseInt(s[p++]);
              int v = Integer.parseInt(s[p++]);
              list.get(u).add(v);
             
         }
         
         
         int res[] = new int[10001];
          res = new Topological_Sort().topoSort(list, nov);
         boolean valid = true;
         
         for(int i = 0; i < nov; i++)
         {
             int n = list.get(res[i]).size();
             for(int j = 0; j < list.get(res[i]).size(); j++)
             {
                 for(int k = i+1; k < nov; k++)
                 {
                     if(res[k]==list.get(res[i]).get(j))
                         n--;
                 }
             }
             if(n!=0)
             {
                 valid = false;
                 break;
             }
         }
         if(valid == true)
             System.out.println("0");
         else
             System.out.println("1");
		}
 }
}
//} Driver Code Ends
/*Complete the function below*/

/*
ArrayList<ArrayList<>Integer>list: to represent graph containing 'N' vertices
                                 and edges between them
N: represent number of vertices
*/
public class Topological_Sort
{
 static int[] topoSort(ArrayList<ArrayList<Integer>> list, int N)
 {
     // StringBuffer sb
     int[] res=new int[N+1];
     int j=0;
     int x1=list.size();
     ArrayList<Integer> a=new ArrayList<>();
         
         for(int i=0;i<x1;i++)
         {
             a.add(i);
         }
     
     while(!a.isEmpty())
     {
         
         TreeSet<Integer> temp=new TreeSet<>();
         
         ArrayList<Integer> b=new ArrayList<>();
         for(int x:a)
         {
             b.add(x);
         }
         
         
         for(int in:b)
         {
             ArrayList<Integer> al=list.get(in);
             for(int x:al)
             {
                 a.remove(new Integer(x));
                 temp.add(x);
             }
             
         }
         
         for(int x:a)
         {
          res[j]=x;
         //  a.remove(new Integ)
         //  list.remove(x);
          j++;
         }
         
         a.clear();
         for(int y:temp)
         {
             a.add(y);
         }
         
         
         
         
         
     }
     
     return res;
     
    // add your code here
 }
}


