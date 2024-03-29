#include <bits/stdc++.h>
using namespace std;

int lowerBound(vector<int> &arr, int k)
{
    int n = arr.size();

    int low = 0, high = n - 1;
    int ans = n;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] >= k)
        {
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    return ans;
}

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; cin >> arr[i++])
        ;

    int k;
    cin >> k;
    cout << lowerBound(arr, k);
}