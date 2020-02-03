package com.company.Array_GFG;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.Collection;
import java.util.Collections;

public class Equilibrium_point {

    public static void main(String[] args)throws Exception
    {
        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
        int t=Integer.parseInt(br.readLine());
        while(t-->0)
        {
            int n=Integer.parseInt(br.readLine());
            String[] s=br.readLine().split(" ");
            if(n==1)
            {
                System.out.println(n);
            }
            else{

                int[] a=new int[n];
                int i=0;
                ArrayList<Integer> al=new ArrayList<>();
                for(String x:s){
                    a[i]=Integer.parseInt(x);
                    i++;
//                    al.add() ;
                }
//                int sum=0;
               System.out.println(check(a));









            }
        }
    }

    public static int check(int a[])
    {

        int sum=0;
        for(int x:a)
        {
            sum+=x;
        }
        sum-=a[0];

        int sum1=a[0];

        for(int i=1;i<a.length-2;i++)
        {
            sum=sum-a[i];

            if(sum==sum1)
            {
                return i+1;
            }
            sum1+=a[i];
        }

        return -1;






    }


}
