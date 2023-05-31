#include<bits/stdc++.h>
#include<iomanip>

using namespace std;

int main()
{
	float itemWeight[100], pricePerKg[5];
	float sumOfPrice = 0.0;

	int n;

	cout<<"Enter number of items: ";
	cin>>n;

	for(int i=1;i<=n ; i++)
	{
        cout<<"Enter number of kgs of item"<<i<<": ";
        cin>>itemWeight[i];
        cout<<"enter price per kg of item"<<i<<": ";
        cin>>pricePerKg[i];
	}

	for(int j=1;j<=n;j++)
	{
		float tempPrice=itemWeight[j]*pricePerKg[j];

		cout<<"item"<<j+1;
		cout<<setw(20);
		cout<<itemWeight[j] <<"kgs\t\t"<<"Rs. "<<setprecision(3)<<tempPrice<<endl;
		sumOfPrice +=tempPrice;

	}
	cout<<"Total amount of all the items is :"<<setw(10)<<setprecision(3)<<"Rs. "<<sumOfPrice;

	return 0;
}
