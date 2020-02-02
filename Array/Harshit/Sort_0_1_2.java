package com.company.Array_GFG;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.TreeSet;

public class Sort_0_1_2 {

    public static void main(String[] args)throws Exception
    {
        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
        int t=Integer.parseInt(br.readLine());
        while(t-->0){
            int n=Integer.parseInt(br.readLine());
            String[] s=br.readLine().split(" ");
            HashMap<Integer,StringBuffer> hm=new HashMap<>();

            TreeSet<Integer> al=new TreeSet<>();

            for(String x:s)
            {
                int x1=Integer.parseInt(x);

                if(hm.containsKey(x1))
                {

                    hm.replace(x1,hm.get(x1).append(x+" "));
                }
                else{
                    hm.put(x1,new StringBuffer(x+" "));
                    al.add(x1);
                }
            }

            for(int x:al)
            {
                System.out.print(hm.get(x));
            }

            System.out.println();


        }

    }

}
