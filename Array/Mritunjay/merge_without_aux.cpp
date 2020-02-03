#include<iostream>
#include <bits/stdc++.h>

using namespace std;

void merge_sorted( int arr1[], int arr2[], int n1, int n2){
    int i =0;
    int j =0;
    while( i < n1 && j <n2 ){
        if(arr1[i] > arr2[j]){
            cout << arr2[j] <<" ";
            j++;
        }
        else{
            cout << arr1[i] <<" ";
            i++;
        }
    }
    while(j < n2){
        cout << arr2[j] <<" ";
        j++;
    }
    while(i < n1){
        cout << arr1[i] <<" ";
        i++;
    }
}
int main()
 {
	int test_cases;
	cin >> test_cases;
	while(test_cases--){
	    int n1, n2;
	    cin >> n1;
	    cin >> n2;
	    int arr1[n1], arr2[n2];
	    for(int i =0; i < n1; ++i){
	        cin >> arr1[i];
	    }
	    for(int i =0; i< n2; ++i){
	        cin >> arr2[i];
	    }
	    merge_sorted(arr1, arr2, n1, n2);
	    cout <<endl;
	}
	return 0;
}