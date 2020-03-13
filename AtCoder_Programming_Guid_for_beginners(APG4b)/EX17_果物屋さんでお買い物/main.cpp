#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, s;
    cin >> n >> s;
    vector<int> a(n), p(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a.at(i);
    }

    for (int i = 0; i < n; i++)
    {
        cin >> p.at(i);
    }

    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((a.at(i) + p.at(j)) == s)
            {
                cnt++;
            }
        }
    }

    cout << cnt << endl;
}
