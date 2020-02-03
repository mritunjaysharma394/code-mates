#include <iostream>
using namespace std;

int atoi(string str) {
    bool neg = (str[0] == '-') ? true : false;
    int ans = 0;
    const int s_len = str.size();
    int limit = neg ? 0 : -1;
    for(int i = s_len-1, mult = 1; i > limit; --i, mult *= 10) {
        if (str[i] < '0' || str[i] > '9')   return -1;
        else ans += static_cast<int>(str[i] - '0') * mult;
    }
    return ans = neg ? -ans : ans;
}

int main() {
    int t;  cin >> t;
    while(t--) {
        string s;   cin >> s;
        cout << atoi(s) << "\n";
    }
    return 0;
}