package com.company.Array_GFG;


import java.util.HashMap;

public class Two_Sum {

    public static void main(String[] args)
    {

        int a[]=new int[]{2,7,11,15};

        int target=22;

        int x[]=two_sum(a,target);





    }

    public static int[] two_sum(int a[],int target)
    {

        HashMap<Integer,Integer> hm=new HashMap<>();

        for(int i=0;i<a.length;i++)
        {
            hm.put(a[i],i);
        }


        for(int i=0;i<a.length;i++)
        {

            int comp=target-a[i];

            if(hm.containsKey(comp) && hm.get(comp)!=i)
            {
                return new int[]{i,hm.get(comp)};
            }

        }

        return new int[2];

    }


}
