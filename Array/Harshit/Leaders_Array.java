package com.company.Array_GFG;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.Collections;

public class Leaders_Array {

    public static void main(String[] args) throws Exception
    {
        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
        int t=Integer.parseInt(br.readLine());
        while(t-->0)
        {
            int n=Integer.parseInt(br.readLine());
            String s[]=br.readLine().split(" ");

            int i=0;
            int a[]=new int[n];
            for(String x:s)
            {
                a[i]=Integer.parseInt(x);
                i++;
            }

            int max=a[n-1];
            // StringBuilder sb=new StringBuilder();
            int[] s1=new int[n];
            int o=0;
            s1[o]=max;
            o++;
            // sb.append(max);
// sb.append(" ");
            // ArrayList<Integer> al=new ArrayList<>();
            // al.add(max);

            for(i=n-2;i>=0;i--)
            {
                if(a[i]>=max)
                {
                    max=a[i];
                    s1[o]=max;
                    o++;
                    // sb.append(max);
                    // sb.append(" ");
                    // al.add(max);
                }

            }
            // Collections.reverse(al);

            StringBuilder sb=new StringBuilder();
            // int tn=al.size();
            for(i=o-1;i>=0;i--)
            {
                sb.append(s1[i]+" ");
                // System.out.print(s1[i]+" ");
            }

            // sb.reverse();
//
            System.out.println(sb);



        }

    }


}
