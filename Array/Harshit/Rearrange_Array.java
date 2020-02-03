package com.company.Array_GFG;

import java.util.*;
import java.lang.*;
import java.io.*;

public class Rearrange_Array {
    public static void main (String[] args) throws Exception{

        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));

        int n=Integer.parseInt(br.readLine());

        for(int i=0;i<n;i++) {

            int t=Integer.parseInt(br.readLine());
            String s1=br.readLine();

            int[] a=new int[t];

            String[] x1=s1.split(" ");
            int j=0;

            for(String p:x1)
            {
                a[j]=Integer.parseInt(p);
                j++;
            }


            int len = a.length;

            int min = 0;
            int max = a.length - 1;

            ArrayList<Integer> al = new ArrayList<>();


            while (min < max) {
                al.add(a[max]);
                al.add(a[min]);
                min++;
                max--;
            }

            if (len % 2 != 0) {
                int mid = len / 2;
                al.add(a[mid]);
            }

            for (int b : al) {
                System.out.print(b + " ");
            }
            System.out.println();
        }





        //code
    }
}
