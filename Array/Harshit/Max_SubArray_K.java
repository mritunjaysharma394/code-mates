package com.company.Array_GFG;

public class Max_SubArray_K {

    public static void main(String[] args)
    {
        int a[]={100,200,500,100};
        int k=2;
//        System.out.println(naive_approach(a,k));
System.out.println(sliding_window(a,k));

    }


    //Brute Force Approach
    public  static int naive_approach(int[] a,int k)
    {
        int n=a.length;

        int max=Integer.MIN_VALUE;

        for(int i=0;i<=n-k;i++)
        {
            int curr=0;
            for(int j=0;j<k;j++)
            {
                curr+=a[i+j];
            }
            max=Math.max(max,curr);

        }

        return max;

    }

//Sliding Window
    public static int sliding_window(int[] a,int k)
    {
        int max=0;
        for(int i=0;i<k;i++)
        {
            max+=a[i];
        }
        int sub=max;
        for(int i=k;i<a.length;i++)
        {
            sub=sub+a[i]-a[i-k];
            max=Math.max(max,sub);
        }
        return max;

    }

}
