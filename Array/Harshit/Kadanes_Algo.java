package com.company.Array_GFG;

import com.company.Array;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.Arrays;

public class Kadanes_Algo {

    public static void main(String[] args) throws Exception
    {


        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
        int t=Integer.parseInt(br.readLine());
        while(t-->0)
        {
        int n=Integer.parseInt(br.readLine());
        String[] s=br.readLine().split(" ");
        int a[]=new int[n];



        int i=0;

        for(String x:s)
        {
            a[i]=Integer.parseInt(x);

            i++;
        }




System.out.println(max_sub(a));






        }





    }


    public static int max_sub(int a[])
    {
        int m1=0;
        int m2=0;
//        int sum=0;
        boolean flag=true;
        for(int x:a)
        {
            m1+=x;
            if(m1<0)
            {
                m1=0;
            }
            if(m2<m1)
            {
                flag=false;
                m2=m1;
            }

        }

        if(flag)
        {
            Arrays.sort(a);
            m2=a[a.length-1];

        }


        return m2;




    }



}
