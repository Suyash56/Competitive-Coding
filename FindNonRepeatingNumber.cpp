#include<iostream>

using namespace std;
int main()
{
	string s;
	int i,j,flag=0;
	cout<<"Enter String =";
	cin>>s;
	for(i=0;i<s.length();i++)
	{
		for(j=0;j<s.length();j++)
		{
			if(i!=j && s.at(i) == s.at(j))
			{
				flag = 1;
				break;
			}
		}
		if(flag==0)
		{
			cout<<s.at(i);
			break;
		}
		flag=0;
	}
	return 0;
}
