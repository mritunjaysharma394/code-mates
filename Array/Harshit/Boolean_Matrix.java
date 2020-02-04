package com.company.Array_GFG;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.HashMap;
import java.util.Stack;

public class Boolean_Matrix {

    public static void main(String[] args)throws Exception
    {
//        int[][] a={{1,0,0},{1,0,0},{1,0,0},{0,0,0}};
        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
        int t=Integer.parseInt(br.readLine());
        while(t-->0)
        {

            String s1[]=br.readLine().split(" ");
            int n=Integer.parseInt(s1[0]);
            int m=Integer.parseInt(s1[1]);
            int[][] a=new int[n][m];

            for(int i=0;i<n;i++)
            {
                String s2[]=br.readLine().split(" ");
                int j=0;
                for(String x:s2)
                {
                    a[i][j]=Integer.parseInt(x);
                    j++;
                }
            }
            bool_matrix(a);


        }

//        bool_matrix(a);


    }

    public static void bool_matrix(int a[][])
    {
//        int[] rows=new int[a.length];
//        int[] cols=new int[a/[0].length];

        HashMap<Integer, Stack<Integer>> hm=new HashMap<>();


        for(int i=0;i<a.length;i++)
        {
            for(int j=0;j<a[i].length;j++)
            {

                if(a[i][j]==1)
                {
                    if(hm.containsKey(i))
                    {
                        Stack<Integer> s=hm.get(i);
                        s.push(j);
                        hm.replace(i,s);
                    }
                    else{
                        Stack<Integer> s1=new Stack<>();
                        s1.push(j);
                        hm.put(i,s1);
                    }
                }
//                System.out.print(a[i][j]+" ");
            }
//            System.out.println();

        }

        for(int i:hm.keySet())
        {

            for(int k=0;k<a[i].length;k++)
            {
                a[i][k]=1;
            }



            for(int x:hm.get(i))
            {
                for(int k=0;k<a.length;k++)
                {
                    a[k][x]=1;
                }
//                System.out.print(x+" ");
            }
//            System.out.println();

        }

        StringBuffer[] sb=new StringBuffer[a.length];

        for(int i=0;i<a.length;i++) {
            sb[i]=new StringBuffer();
            for (int j = 0; j < a[i].length; j++) {
                sb[i].append(a[i][j]+" ");
//                System.out.print(a[i][j]+" ");
            }
            System.out.println(sb[i]);
        }




    }


}
