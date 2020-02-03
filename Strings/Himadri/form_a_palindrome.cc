#include <iostream>
#include<bits/stdc++.h>
using namespace std;

//Learned from solution by user @Yash Arora 3 on Geeksforgeeks

int dp[41][41];

int FormPalindrome(string s, int l, int h) {
    int output = INT_MAX;
    if(l==h) return 0;
    if(l==h-1) return (s[l]==s[h]) ? 0 : 1;
    if(dp[l][h]!=-1) return dp[l][h];
    if (s[l]==s[h]) output=min(output,FormPalindrome(s,l+1,h-1));
    output = min(output, FormPalindrome(s,l+1,h)+1);
    output = min(output, FormPalindrome(s,l,h-1)+1);
    return dp[l][h] = output;
}

int main() {
	//code
	int t;
	cin >> t;
	while(t--) {
	    string s;
	    cin >> s;
	    int n= s.length();
	    memset(dp,-1,sizeof(dp));
	    cout << FormPalindrome(s, 0, n-1) << endl;
	}
	return 0;
}
