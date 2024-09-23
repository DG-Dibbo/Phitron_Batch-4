#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; ++i)
    {
        cin >> A[i];
    }
    vector<long long> prefixSum(N);
    prefixSum[0] = A[0];
    for (int i = 1; i < N; i++)
    {
        prefixSum[i] = prefixSum[i - 1] + A[i];
    }
    
    // Print the prefix sum array in reverse order
    for (int i = N - 1; i >= 0; i--)
    {
        cout << prefixSum[i] << " ";
    }

    return 0;
}
