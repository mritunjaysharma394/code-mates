package com.company.Array_GFG;

import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Stock_Buy_Sell {

    public static void main(String[] args)throws Exception
    {

//        int[] a={23, 13, 25, 29, 33, 19 ,34 ,45 ,65 ,67};
//        Stock_buy_algo(a);

        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
        int t=Integer.parseInt(br.readLine());
        while(t-->0)
        {
            int n=Integer.parseInt(br.readLine());
            String[] s=br.readLine().split(" ");
            int i=0;
            int[] a=new int[n];
            for(String x:s)
            {
                a[i]=Integer.parseInt(x);
                i++;
            }
            Stock_buy_algo(a);
        }


    }

    public static void Stock_buy_algo(int[] a)
    {
        int n=a.length;

        int min=0;
        int max=0;

        int count=0;

        StringBuffer sb=new StringBuffer();

        for(int i=1;i<n;i++)
        {
            if(a[min]>a[i]){
                min=i;
                max=i;
            }
            else if(a[max]<a[i])
            {
                max=i;
                if(i+1<n)
                {
                    if(a[i+1]<a[i])
                    {
                        sb.append("("+min+" "+max+")");
//                        System.out.println(min+" "+max);
                        min=i+1;
                        max=i+1;
                        count++;
//                        min=i+1
                    }

                }
                else{
                    sb.append("("+min+" "+max+")");
//                    System.out.println(min+" "+max);
                    count++;
                }


            }


        }

        if(count==0)
        {
            System.out.println("No Profit");

        }
        else{

            System.out.println(sb.toString());
        }




    }




}
