package com.company.Array_GFG.Stack;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.Stack;

public class Next_Larger_Element {

    public static void main(String[] args)throws Exception
    {

//        int[] a={1,3,2,4};
        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
        int t=Integer.parseInt(br.readLine());

        while(t-->0)
        {
            int n=Integer.parseInt(br.readLine());
            String[] s=br.readLine().split(" ");
            long[] a=new long[n];
            int i=0;
            for(String x:s)
            {
                a[i]=Long.parseLong(x);
                i++;
            }
            next_ele(a,n);
        }








    }

    public static void next_ele(long[] a,int n)
    {
        Stack<Long> s=new Stack<>();
        long[] next=new long[n];

//        int n=
        for(int i=n-1;i>=0;i--)
        {
            while(!s.isEmpty() && a[i]>=s.lastElement()){
                s.pop();
            }
            if(s.isEmpty())
            {
                next[i]=-1;
            }
            else{
                next[i]=s.lastElement();
            }
            s.push(a[i]);
        }

        StringBuffer sb=new StringBuffer();
        for(long x:next)
        {
            sb.append(x+" ");
//            System.out.println(x);
        }
        System.out.println(sb.toString());




    }
}
