#include <bits/stdc++.h>
#define ll long long
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define pi pair<int, int>
#define vi vector<ll>
#define ln '\n'
using namespace std;
const ll N = 2e5 + 9;

int main(int argc, char const *argv[])
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (j < n)
        {
            cout << "a";
            j++;
        }
        if (j < n)
        {
            cout << "b";
            j++;
        }
        if (j < n)
        {
            cout << "b";
            j++;
        }
        if (j < n)
        {
            cout << "a";
            j++;
        }
    }
    return 0;
}