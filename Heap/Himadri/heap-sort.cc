/* Main function to do heap sort. This function uses buildHeap()
   and heapify()
void heapSort(int arr[], int n)  {
    buildHeap(arr, n);
    for (int i=n-1; i>=0; i--)  {
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
} */
// The functions should be written in a way that array become sorted
// in increasing order when above heapSort() is called.
// To heapify a subtree rooted with node i which is  an index in arr[].
// n is size of heap. This function  is used in above heapSor()
void heapify(int arr[], int n, int i)  {
      // Your Code Here
      int root = i;
      int left = 2*i + 1;
      int right = 2*i + 2;

      if(left <n && arr[left]>arr[root]) root = left;
      if(right <n && arr[right]>arr[root]) root = right;

      if(root!=i) {
          swap(arr[i], arr[root]);
          heapify(arr, n, root);
      }
}

// Rearranges input array so that it becomes a max heap
void buildHeap(int arr[], int n)  {
    // Your Code Here
    int start =  (n/2) -1;
    for(int i=start; i>=0; i--){
        heapify(arr, n, i);
    }
}
