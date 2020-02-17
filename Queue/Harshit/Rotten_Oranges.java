package com.company.Queue;

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.ArrayDeque;
import java.util.Queue;

public class Rotten_Oranges {

    public static void main(String[] args)throws Exception
    {
        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
        int t=Integer.parseInt(br.readLine());
        while(t-->0)
        {
            String[] s1=br.readLine().split(" ");
            String[] s2=br.readLine().split(" ");
            int n=Integer.parseInt(s1[0]);int m=Integer.parseInt(s1[1]);
            int k=0;


            ArrayDeque<Two_Int> a1=new ArrayDeque<>();
            ArrayDeque<Two_Int> a2=new ArrayDeque<>();
//            a1.poll();

            int[][] a=new int[n][m];
            boolean flag=true;

            int max=n*m;
            int c2=0;
            int c1=0;

            for(int i=0;i<n;i++)
            {
                for(int j=0;j<m;j++)
                {
                    a[i][j]=Integer.parseInt(s2[k]);
                    k++;

                    if(a[i][j]==2)
                    {
                        a1.push(new Two_Int(i,j));
                        flag=true;
                        c1++;
                    }
                    if(a[i][j]==0)
                    {
                        c2++;
                    }
                }
            }

            max-=c2;
            int count=0;

            while((!a1.isEmpty())&& flag)
            {
                flag=false;
                while(!a1.isEmpty())
                {
                    Two_Int t1=a1.poll();
                    int i1=t1.x;
                    int j1=t1.y;

                    if(i1-1>=0)
                    {
                        if(a[i1-1][j1]==1){
                            a[i1-1][j1]=2;
                            a2.push(new Two_Int(i1-1,j1));
                            flag=true;
                            c1++;
                        }
                    }
                    if(j1-1>=0)
                    {
                        if(a[i1][j1-1]==1){
                            a[i1][j1-1]=2;
                            a2.push(new Two_Int(i1,j1-1));
                            flag=true;
                            c1++;
                        }

                    }
                    if(i1+1<n)
                    {
                        if(a[i1+1][j1]==1){
                            a[i1+1][j1]=2;
                            a2.push(new Two_Int(i1+1,j1));
                            flag=true;
                            c1++;
                        }
                    }
                    if(j1+1<m)
                    {
                        if(a[i1][j1+1]==1){
                            a[i1][j1+1]=2;
                            a2.push(new Two_Int(i1,j1+1));
                            flag=true;
                            c1++;
                        }
                    }
                }
                if(flag)
                {
                    count++;
                }

                while(!a2.isEmpty())
                {
                    a1.push(a2.poll());
                }

            }

//            if(count)
//
            if(max==c1) {
                System.out.println(count);
            }
            else{
                System.out.println("-1");
            }



        }

    }





}


class Two_Int{

    int x,y;
    public Two_Int(int x,int y)
    {
        this.x=x;
        this.y=y;
    }

}
