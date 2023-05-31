#include <bits/stdc++.h>
using namespace std;

int main()
{
    int space, rows;

    cout <<"Enter number of rows: ";
    cin >> rows;

    for(int i = 1, k = 0; i <= rows; i++, k = 0)
    {
        for(space = 1; space <= rows-i; space++)
        {
            cout <<"  ";
        }

        while(k != i)
        {
            if(i==1)
                cout << "  x"<<"+"<<k+1<<" ";
            else
                cout << "x^"<<i<<"+"<<k+1<<" ";
            k++;
        }
        cout << endl;
    }
    return 0;
}
