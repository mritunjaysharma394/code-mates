package com.company.Array_GFG;

import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Inversion_of_array {

    long count=0;

    public static void main(String[] args)throws Exception
    {
//        int a[]={1,2,3,4,5};

        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
        int t=Integer.parseInt(br.readLine());

        while(t-->0) {

            int n=Integer.parseInt(br.readLine());
            String[] s=br.readLine().split(" ");
            int i=0;
            long a[]=new long[n];

            for(String x:s)
            {
                a[i]=Long.parseLong(x);
                i++;
            }

            Inversion_of_array i_a = new Inversion_of_array();
            long temp[]=new long[n];
            i_a.merge_sort(a,temp, 0, n-1);

            System.out.println(i_a.count);
        }
    }


    public void merge_sort(long a[],long temp[],int l,int r)
    {
        if(l<r)
        {
            int mid=(l+r)/2;
            merge_sort(a,temp,l,mid);
            merge_sort(a,temp,mid+1,r);
            merge(a,temp,l,mid,r);
        }

    }

    public  void merge(long a[],long t[],int l,int mid,int r)
    {

        int i1,i2,e1,e2;
        i1=l;
        i2=mid+1;
        e1=mid;
        e2=r;
        int i=0;

        while((i1<=e1) && (i2<=e2))
        {
            if(a[i1]<=a[i2])
            {
                t[i++]=a[i1++];

            }
            else{
                t[i++]=a[i2++];

                count+=(e1-i1+1);
            }

        }

        while(i1<=e1){
            t[i++]=a[i1++];

        }

        while(i2<=e2){
            t[i++]=a[i2++];

        }

        int j=0;
        for(i=l;i<=r;i++)
        {
            a[i]=t[j++];
        }

    }

}
