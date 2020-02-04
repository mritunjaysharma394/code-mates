package com.company.Array_GFG;

public class Quick_Sort {


    public static void main(String[] args)
    {

        int a[]=new int[]{5,4,3,2,1};

        quick_sort(a,0,4);

        for(int x:a)
        {
            System.out.println(x);
        }

    }

    public static void quick_sort(int a[],int l,int r)
    {
        if(l<r)
        {

            int p=partition(a,l,r);
            quick_sort(a,l,p-1);
            quick_sort(a,p+1,r);


        }

    }

    public static int partition(int a[],int l,int r)
    {

        int pivot=r;
        int i=l-1;


        for(int j=l;j<r;j++)
        {

            if(a[j]<a[pivot])
            {
                i++;
                int t=a[j];
                a[j]=a[i];
                a[i]=t;
            }

        }
        int t=a[pivot];
        a[pivot]=a[i+1];
        a[i+1]=t;
        return i+1;



    }

}
