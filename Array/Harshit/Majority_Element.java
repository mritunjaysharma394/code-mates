package com.company.Array_GFG;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.HashMap;

public class Majority_Element {

    public static void main(String[] args)throws Exception
    {

        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
        int t=Integer.parseInt(br.readLine());
        while(t-->0)
        {
            int n=Integer.parseInt(br.readLine());
            HashMap<String,Integer> hm=new HashMap<>();
            String s[]=br.readLine().split(" ");
            for(String x:s)
            {
                if(hm.containsKey(x))
                {
                   int p= hm.get(x);
                   hm.replace(x,p+1);
                }
                else{
                    hm.put(x,1);
                }

            }
            int comp=n/2;
            boolean flag=false;
            for(String x:hm.keySet())
            {
                if(hm.get(x)>comp)
                {
                    flag=true;
                    System.out.println(x);
                }

            }
            if(!flag)
            {
                System.out.println("-1");
            }

//            hm.forEach(String );


        }



    }

}
