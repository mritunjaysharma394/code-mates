package com.company.Array_GFG;

public class Binary_Search {

    public static void main(String[] args)
    {
        int a[]={1,2,3,4,5};
      System.out.println(bin_search(a,0,4,7));

    }

    static int bin_search(int A[], int left, int right,  int k)
    {

        // System.out.println(left+" "+right+" "+A.length);

        if(left==right)
        {
            if(A[left]==k)
            {
                return left;
            }

        }
        else {
            if (left < right) {
                int mid = (left + right) / 2;

                if (A[mid] == k) {
                    return mid;
                }


                if (A[mid] < k) {

                         return  bin_search(A, mid+1, right, k);


                } else {
                  return  bin_search(A, left, mid-1, k);
                }


            }
        }

        return -1;
    }

}
