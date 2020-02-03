#include <iostream>
#include <bits/stdc++.h>
using namespace std;



int LongestCommon(string x, string y, int nx, int ny) {
    int max=0;
    int dp[nx][ny];

    //cout << "new testcase " << x << ' ' << y<< endl;

    for(int i=0; i<nx; i++) {
        //cout << "i = " << i << endl;
        for(int j=0; j<ny; j++) {
            dp[i][j] = 0;
            if(i==0){
                if(x[0]==y[j]) dp[0][j] = 1;
                //cout << "case 1 " << endl;
            }
            else if(j==0) {
                if(x[i]==y[0]) dp[i][0] = 1;
                //cout << "case 2 " << endl;
            }
            else {
                if(x[i]==y[j]) dp[i][j]=dp[i-1][j-1] + 1;
                //cout << "case 3 " << endl;
            }



            if(max<dp[i][j]) max = dp[i][j];
            //cout << dp[i][j] << ' ';
        }
        //cout << "max " << max << ' ' ;
        //cout << endl;
    }

    //cout << "outside of for loop ";

    //cout << max <<endl;
    return max;
}

int main() {
	//code
	int t, n, m;
	string strx, stry;
	cin >> t;
	while(t--) {
	    cin >> n >> m;
	    cin >> strx >> stry;
	    cout << LongestCommon(strx, stry, n, m) << endl;
	}
	return 0;
}
