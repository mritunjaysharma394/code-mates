#include <iostream>
using namespace std;

void merge(long long arr[], int l, int m, int r);

/* l is for left index and r is right index of the
   sub-array of arr to be sorted */
void mergeSort(long long arr[], int l, int r)
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
void merge(long long a[], int l, int m, int r)
{
     int n1,n2,i,j;
		n1 = m-l+1;
		n2=r-m;
		long long L[n1+1],R[n2+1];//increase  the length of the array by 1 to store sentinal value
		for(i=1;i<=n1;i++)//avoid initializiing i and j with 0, instead use 1 here.
		{
			L[i]=a[i+l-1];
		}
		for(j=1;j<=n2;j++)
		{
			R[j]=a[m+j]; 
		}
		L[n1+1] = 99999999999;//sentinal value to avoid extra checking
		R[n2+1] = 99999999999;//sentinal value to avoid extra checking
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

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int N;
		cin>>N;
		long long A[N],B[N],s;
		s = 0;
		for(int i = 0; i<N;i++)
		{
			cin>>A[i];
			
		}
		for(int i = 0; i<N;i++)
		{
			cin>>B[i];
			
		}

		mergeSort(B,0,N-1);

		/*for(int i = 0; i<N;i++)
		{
			
			cout<<B[i]<<" ";
		}*/
		cout<<endl;

		for(int i=0; i<N;i++)
		{
			if(A[i]>B[i])
			{
				s = s + B[i];
			}
			else
			{
				s = s + A[i];
			}
		}

		cout<<s<<endl;
	}
}