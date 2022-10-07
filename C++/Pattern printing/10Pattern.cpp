// * * * * * 
// * A B C * 
// * D E F * 
// * G H I * 
// * * * * *
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, x=1;
    cout << ("\nEnter number of rows: ");
    cin >> n;
    //where i and j are row and column number.
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(i== 1 || i== n|| j== 1 || j== n)
            {
                cout << ("* ");
            }
            else 
            {
                cout << ((char)(64+x)) << (" ");
                x++;
            }
        }
        cout << endl;
    }
    return 0;
}
