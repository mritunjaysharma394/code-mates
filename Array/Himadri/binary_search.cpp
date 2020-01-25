iusing namespace std;



int bin_search(int A[],int left,int right,int k);



int main()

{

    int t;

    cin>>t;



    while(t--)

    {

        int N;

        cin>>N;

        int a[N];

        for(int i=0;i<N;i++)

            cin>>a[i];

        int key;

        cin>>key;

        int found = bin_search(a,0,N-1,key);

        cout<<found<<endl;

    }

}

/*This is a function problem.You only need to complete the function given below*/

/*You need to complete this function */

int bin_search(int A[], int left, int right, int k)

{

    if(left==right){

	   if(A[left]==k) return left;

	   else  return -1;

  }

  else{

    int mid =(int) (left+right)/2;

    if(A[mid]==k) return mid;

    else if(A[mid] < k) bin_search(A, mid+1, right,k);

    else if(A[mid] > k) bin_search(A,left, mid-1, k);

    else return -1;

    }



}
