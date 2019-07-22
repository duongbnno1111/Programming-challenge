#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    a[0] = 1;
    a[1] = 1;
    for (int i = 0;i < n;i++)
    {
        if (i == 0) cout << a[0] << endl;
        if (i == 1) cout << a[0] << ' ' << a[1] << endl;
        if (i > 1)
        {
            int b[n-1];
            for (int j = 1;j < i;j++)
            {
                b[j] = a[j-1] + a[j];
            }
            for (int j = 1;j < i;j++)
            {
                a[j] = b[j];
            }
            a[i] = 1;
            for (int j = 0;j <= i;j++) cout << a[j] << ' ';
            cout << endl;
        }
    }
    return 0;
}
