package com.company.Queue;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.ArrayDeque;
import java.util.Collections;
import java.util.PriorityQueue;

public class Max_Of_All_SubArray_of_K {

    public static void main(String[] args)throws Exception
    {

        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
        int t=Integer.parseInt(br.readLine());
        while(t-->0)
        {

            String[] s1=br.readLine().split(" ");
            String[] s2=br.readLine().split(" ");


            ArrayDeque<Integer> a1=new ArrayDeque<>();
            int k=Integer.parseInt(s1[1]);

            int[] a=new int[Integer.parseInt(s1[0])];
            int i=0;
//            PriorityQueue<Integer> pq=new PriorityQueue<>();
            for(String x:s2)
            {
                a[i]=Integer.parseInt(x);
//                pq.add(a[i]);
                i++;

            }

//            System.out.println(pq);
//            pq.add()
        Algo(a,k);

        }


    }

    public static void Algo(int[] a,int k)
    {
        ArrayDeque<Integer> aq=new ArrayDeque<>();
        for(int i=0;i<k;i++)
        {
            aq.add(a[i]);
        }
        int max= Collections.max(aq);

        StringBuffer sb=new StringBuffer();
        sb.append(max+" ");

        for(int i=k;i<a.length;i++)
        {
            aq.poll();
            aq.add(a[i]);
            max=Collections.max(aq);
            sb.append(max+" ");
        }
        System.out.println(sb.toString());
    }


}
