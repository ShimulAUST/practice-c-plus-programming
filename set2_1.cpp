#include<bits/stdc++.h>
using namespace std;

int factorial(int num){
	 int fact=1;
	 for(int i=num ;i>0;i--)
	 {
		fact=fact*i;
	 }
	 return fact;
}


int main()
{
    int n ;
	float x,sum=0;

    cout<<"enter number of elements in series: ";
    cin>>n;

    cout<<"enter value of number 'x' in series: ";
    cin>>x;

    for(int i=1;i<n;i++)
    {
        sum += x*((pow(x,2*i)*pow(-1,i+1))/factorial(2*i));
    }
    cout<<"Sum of the series is : "<<x+sum;

return 0;
  }
