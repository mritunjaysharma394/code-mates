#include <iostream>
using namespace std;

int main() 
{
    int T;
    cin >> T;
    getchar();
    char c;
    while (T)
    {
        int count[256] = {0};
        while (((c = getchar()) != '\n') && (c != EOF))
        {
            if (count[c]++ == 0)
                putc(c, stdout);
        }
        printf("\n");
    }
	
	return 0;
}