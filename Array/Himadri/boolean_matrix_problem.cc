#include <iostream>
using namespace std;

int main() {
	//code
	int T, r, c, i, j, k;
	cin >> T;
	while(T--){
	    cin >> r >> c;
	    int m[r][c], row[r], column[c];
	    for(i=0; i<r; i++){
	        for(j=0; j<c; j++){
	           cin >> m[i][j];
	           if(m[i][j] > 0) {
	               row[i] = 1;
	               column[j] = 1;
	           }
	        }
	    }

			//cout << "Rows" << endl;
			//for(int x=0; x<r; x++) cout << row[x] << " ";
			//cout << endl;

			//cout << "Columns" << endl;
			//for(int x=0; x<c; x++) cout << column[x] << " ";
			//cout << endl;

			//cout << "output: " << endl;

	    for(i=0;i<r; i++){
	        for(j=0;j<c;j++){
	            if(row[i]==1 || column[j]==1) cout << "1 ";
	            else cout << "0 ";
	        }
	        cout << endl;
	    }


	}
	return 0;
}
