#include <iostream>
using namespace std;

long MergeOperation(int a[], int temp[], int left, int mid, int right) {
    int i=left, j=mid+1, k=left;
    long count=0;
    while((i<=mid) && (j<=right)) {
        if(a[i] <= a[j]) temp[k++] = a[i++];
        else {
            temp[k++]=a[j++];
            count += mid-i+1;
        }
    }
    while(i<=mid) temp[k++] = a[i++];
    while(j<=right) temp[k++] = a[j++];
    for(int p=left; p<=right; p++) a[p] = temp[p];

    return count;
}

long MergeSort(int a[], int temp[], int left, int right) {
    int mid;
    long inversions=0;
    if(right > left) {
        mid = (left + right) /2;
        inversions += MergeSort(a, temp, left, mid);
        inversions += MergeSort(a, temp, mid+1, right);
        inversions += MergeOperation(a, temp, left, mid, right);
    }
    return inversions;
}

int main() {
	//code
	int T, n;
  long inversions;
	cin >> T;
	while(T--) {
	    cin >> n;
	    int a[n], temp[n];
	    for(int i=0; i<n; i++) {
	        cin >> a[i];
	    }
	    inversions = MergeSort(a, temp, 0, n-1);
	    cout << inversions << endl;
	}
	return 0;
}
