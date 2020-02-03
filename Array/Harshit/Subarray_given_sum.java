package com.company.Array_GFG;

import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Subarray_given_sum {
    public static void main(String[] args)throws Exception
    {
        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
        int t=Integer.parseInt(br.readLine());
        while(t-->0)
        {
            String s1[]=br.readLine().split(" ");
            String s2[]=br.readLine().split(" ");

            int a[]=new int[s2.length];
            int i=0;
            for(String s:s2)
            {
                a[i]=Integer.parseInt(s);
                i++;
            }

            check_sum(a,Integer.parseInt(s1[1]));

        }
    }

    public static void check_sum(int a[],int k)
    {

        int sum=0;
        for(int x:a)
        {
            sum+=x;
        }
        boolean flag=true;

        for(int i=0;i<a.length&&flag;i++)
        {
            int sum1=a[i];
            sum-=a[i];
            int sum2=sum;

            if(a[i]==k)
            {
                System.out.println((i+1)+" "+(i+1));
                flag=false;
            }



            for(int j=a.length-1;j>i&&flag;j--)
            {

                if(sum1+sum2==k)
                {
                    System.out.println((i+1)+" "+(j+1));
                    flag=false;

                }
                sum2-=a[j];
            }
        }
        if(flag)
        {
            System.out.println("-1");
        }




    }


}
