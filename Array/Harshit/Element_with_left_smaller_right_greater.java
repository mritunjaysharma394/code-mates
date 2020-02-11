package com.company.Array_GFG;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.Scanner;

public class Element_with_left_smaller_right_greater {

    public static void main(String[] args)throws Exception
    {

        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
        int t=Integer.parseInt(br.readLine());
        while(t-->0)
        {
            int n=Integer.parseInt(br.readLine());
            String[] s=br.readLine().split(" ");
            int i=0;
            int[] a=new int[n];
//            Scanner sc=new Scanner(System.in);


            for(String x:s)
            {
                a[i]=Integer.parseInt(x);
                i++;
            }
            algo(a);
        }
    }

    public static void algo(int[] a)
    {

//        int i=1;
        int m1=1;
        int m2=1;
        int n=a.length;
        while(m2<n && m1<n)
        {
            if(a[m1]<a[m1-1])
            {
                m1++;
                m2++;
            }
            else{

                m2++;
                if(m2<n)
                {
                    if(a[m2]<a[m1])
                    {
                        m1++;
                    }
                    else{

                        m2++;

                    }
                }

//                if(a[m2]<a[m1])



            }





        }

        if(m1!=n-1)
        {
            System.out.println(a[m1]);
        }
        else{
            System.out.println("-1");
        }






    }

}
