#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    cout<<"Enter the number of rows: ";
    cin>>n;

    int v1 = 1;
    int v2 = 1;

    for (int i = 0; i < n; i++) {
        for (int j = n - 1; j > i; j--) {
            cout << " ";
        }

        for (int k = 1; k <= v1; k++) {
            cout << abs(k - v2);
        }

        v1+=2;
        v2++;
        cout <<endl;
    }

    return 0;
}
