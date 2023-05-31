#include <bits/stdc++.h>

using namespace std;


int main()
{

    int rows =3,columns =3;
    int matrix[rows][columns];
    cout<<"Enter the "<<rows<<"*"<<columns<<" matrix values:"<<endl;

    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            cout<<"Enter the value of element "<<i<<j<<": ";
            cin>>matrix[i][j];
        }
    }

    cout<<"The "<<rows<<"*"<<columns<<" matrix is:"<<endl;
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            cout<<matrix[i][j]<<"\t";
        }
        cout<<endl;
    }


    return 0;

}
