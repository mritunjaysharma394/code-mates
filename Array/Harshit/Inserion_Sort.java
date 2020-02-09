package com.company.Array_GFG;

public class Inserion_Sorg {

    public static void main(String[] args)
    {
        int a[]={5,4,3,1,2};
        insertion(a);
        for(int x:a)
        {
            System.out.println(x);
        }

    }

    static void insertion(int[] a)
    {
//        int count=0;
        int i=1;
        while(i<a.length)
        {
            boolean flag=true;
            int i1=i;
//            count++;
            for(int j=i-1;j>=0&&flag;j--)
            {

                if(a[j]>a[i1])
                {
                    int t=a[j];
                    a[j]=a[i1];
                    a[i1]=t;
                    i1=j;
                }
                else{
                    flag=false;
                }
            }
            i++;

        }



    }

}
