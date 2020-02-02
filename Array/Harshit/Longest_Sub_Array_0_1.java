package com.company.Array_GFG;

public class Longest_Sub_Array_0_1 {

    public static void main(String[] args)
    {

    int a[]={0,0,1,0,0};

    for(int i=0;i<a.length;i++)
    {
        if(a[i]==0)
        {
            a[i]=-1;
        }
    }
    System.out.println(maxLen(a));

    }

    public static int maxLen(int a[])
    {
        int max=0;

        for(int i=0;i<a.length;i++)
        {


            for(int j=a.length;j>=i;j--)
            {
                int sum=0;
                int count=0;

                for(int k=i;k<j;k++)
                {
                    sum+=a[k];
                    count++;
                }


                if(sum==0)
                {

                    if(count>max)
                    {
                        max=count;
                    }

                }



            }

        }


        return max;


    }


}
