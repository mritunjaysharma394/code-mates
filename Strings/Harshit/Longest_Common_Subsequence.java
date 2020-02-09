package com.company.String;

import java.io.BufferedReader;
import java.io.InputStreamReader;



public class Longest_Common_SubSequence {

    public static void main(String[] args) throws Exception
    {

        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
        int t=Integer.parseInt(br.readLine());
        while(t-->0)
        {

            String[] s=br.readLine().split(" ");
            String s1=br.readLine();
            String s2=br.readLine();

            int n=Integer.parseInt(s[0]);
            int m=Integer.parseInt(s[1]);

            int a[][]=new int[n+1][m+1];

            for(int i=1;i<=n;i++)
            {
                char c1=s1.charAt(i-1);

                for(int j=1;j<=m;j++)
                {
                   char c2= s2.charAt(j-1);
                   if(c1==c2)
                   {
                       a[i][j]=a[i-1][j-1]+1;
                   }
                   else{
//                       a[i][j]=0;
                       a[i][j]=Math.max(a[i-1][j],a[i][j-1]);
                   }

                }

            }

            System.out.println(a[n][m]);

        }

    }


}
