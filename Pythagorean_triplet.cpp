#include <bits/stdc++.h>
using namespace std;

int tripletsProduct(int sum)
{

    pair<int, pair<int, int>> res;

    for (int a = 1; a < (sum / 3); a++)
    {
        for (int b = a + 1; b < (sum / 2); b++)
        {
            int c = sum - a - b;
            if (a * a + b * b == c * c)
            {
                res.first = a;
                res.second.first = b;
                res.second.second = c;
            }
        }
    }

    return res.first * res.second.first * res.second.second;
}

int main()
{
    cout << tripletsProduct(1000);

    return 0;
}
