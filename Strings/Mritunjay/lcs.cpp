#include<iostream>
using namespace std;

int longestCommon(char ch1[],char ch2[],int i,int j)
{
	if(ch1[i]=='\0' || ch2[j]=='\0')
	{
		return 0;
	}

	if(ch1[i]==ch2[j])
	{
		return 1+longestCommon(ch1,ch2,i+1,j+1);
	}
	else
	{
		int op1=longestCommon(ch1,ch2,i,j+1);
		int op2=longestCommon(ch1,ch2,i+1,j);
		return max(op1,op2);
	}
}

int bottomUp(char ch1[],char ch2[])
{
	int length1=strlen(ch1);
	int length2=strlen(ch2);

	int dp[100][100]={0};

	for(int i=0;i<=length1;i++)
	{
		for(int j=0;j<=length2;j++)
		{
			if(i==0 || j==0)
			{
				dp[i][j]=0;
			}
			else if(ch1[i-1]==ch2[j-1])
			{
				dp[i][j]=1+dp[i-1][j-1];
			}
			else
			{
				dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
			}
		}
	}

	for(int i=0;i<=length1;i++)
	{
		for(int j=0;j<=length2;j++)
		{
			cout<<dp[i][j]<<" ";
		}
		cout<<endl;
	}

	return dp[length1][length2];
}

int main()
{
	int T;
	cin>>T;
	while(T--)
	{


	char ch1[100],ch2[100];
	cin>>ch1>>ch2;

	cout<<bottomUp(ch1,ch2)<<endl;

	 }
	// cout<<longestCommon(ch1,ch2,0,0)<<endl;
	return 0;
}