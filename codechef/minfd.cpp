#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int fd[n];
        for (int i = 0; i < n; i++)
        {
            cin >> fd[i];
        }
        sort(fd, fd + n);
        int count = 0;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (sum < x)
            {
                sum = sum + fd[n - 1 - i];
                count++;
            }
            else
            {
                break;
            }
        }
        if (sum < x)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << count << endl;
        }
    }
    return 0;
}