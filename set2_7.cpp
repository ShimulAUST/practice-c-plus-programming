#include<bits/stdc++.h>
using namespace std;

int main()
{
	string str;
	cout<<"Enter the string : ";
	getline(cin,str);
	cout<<"Given string before : "<<str<<endl;

	for(int i=0;i<str.length();i++)
	{
		if(str[i+1]==str[i]||str[i]==str[i-1])
		{
            for(int j=i;j<str.length();j++)
            {
                str[j]=str[j+1];
            }

		}
	}

	cout<<"Given string after :"<<str<<endl;

	return 0;
}
