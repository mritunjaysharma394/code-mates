package com.company.Array_GFG;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.TreeSet;

public class Kth_Smallest_Element {
    public static void main(String[] args)throws Exception
    {

        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
        int t=Integer.parseInt(br.readLine());
        while(t-->0)
        {
            int n=Integer.parseInt(br.readLine());
            String s[]=br.readLine().split(" ");
            int index=Integer.parseInt(br.readLine());
//            int a[]=new int[n];
            int i=0;
            TreeSet<Integer> ts=new TreeSet<>();
            for(String x:s)
            {
                ts.add(Integer.parseInt(x));
//                i++;
            }

            for(int x:ts)
            {
                if(i==index-1)
                {
                    System.out.println(x);
                    break;
                }
                i++;
            }


//            System.out.println(ts.);






        }
    }
}
