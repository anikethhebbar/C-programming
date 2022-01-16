#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d, e, f, t;
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> c;
        cin >> d >> e >> f;
        if ((a + b + c) > (d + e + f))
            cout << "Dragon\n";
        else if ((a + b + c) < (d + e + f))
            cout << "Sloth\n";
        else
        {
            if ((a > d))
                cout << "Dragon\n";
            else if ((d > a))
                cout << "Sloth\n";
            else
            {
                if (b > e)
                    cout << "Dragon\n";
                else if (e > b)
                    cout << "Sloth\n";
                else
                    cout << "Tie\n";
            }
        }
    }
    return 0;
}