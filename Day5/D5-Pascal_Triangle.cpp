#include <iostream>
using namespace std;

int fact(int n)
{
    int factorial = 1;
    for (int i = n; i >= 1; i--)
    {
        factorial = factorial * i;
    }
    return factorial;
}

int NCR(int n, int r)
{
    int val1 = fact(n);
    int val2 = fact(n - r);
    int val3 = fact(r);
    int ncr = val1 / (val2 * val3);
    return ncr;
}

int main()
{
    // int ans=fact(20);
    // cout<<ans<<endl;
    int n;
    cout << "Enter the n:";
    cin >> n;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col <= row; col++)
        {
            int print = NCR(row, col);
            cout << print << " ";
        }
        cout << endl;
    }
    return 0;
}