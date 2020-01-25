// Cprogram for implementation of Merge Sort
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int l, int m, int r);

/* l is for left index and r is right index of the
   sub-array of arr to be sorted */
void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        // Same as (l+r)/2, but avoids overflow for
        // large l and h
        int m = l+(r-l)/2;

        // Sort first and second halves
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);

        merge(arr, l, m, r);
    }
}

/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// Driver program to test above functions
int main()
{
    int arr[1000],n,T,i;

    scanf("%d",&T);

    while(T--){

    scanf("%d",&n);

    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);

    mergeSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}// } Driver Code Ends
/* The task is to complete merge() which is used
   in below mergeSort() */
/*   l is for left index and r is right index of the
   sub-array of arr to be sorted
void mergeSort(int arr[], int l, int r) {
    if (l < r)   {
        int m = l+(r-l)/2;
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);
        merge(arr, l, m, r);
    }
} */

// Merges two subarrays of arr[].  First subarray is arr[l..m]
// Second subarray is arr[m+1..r]
void merge(int a[], int l, int m, int r)
{
     int n1,n2,i,j;
		n1 = m-l+1;
		n2=r-m;
		int L[n1+1],R[n2+1];//increase  the length of the array by 1 to store sentinal value
		for(i=1;i<=n1;i++)//avoid initializiing i and j with 0, instead use 1 here.
		{
			L[i]=a[i+l-1];
		}
		for(j=1;j<=n2;j++)
		{
			R[j]=a[m+j]; 
		}
		L[n1+1] = 99999;//sentinal value to avoid extra checking
		R[n2+1] = 99999;//sentinal value to avoid extra checking
		i=1;j=1; int k;// use for loop for k = l to k = h
		for(k=l;k<=r;k++)
		{
			if(L[i]<=R[j])
			{ 
			        a[k] = L[i];
				i=i+1;
			}
			else
			{
				a[k] = R[j];
				j = j+1;
			}
		}
}