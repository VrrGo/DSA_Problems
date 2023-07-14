class Solution{
    public:
        long long pairWithMaxSum(long long arr[], long long N)
    {
        
         long long max_sum = INT_MIN;
    for (long long i = 0; i < N-1; i++)
        max_sum = max(max_sum, arr[i]+arr[i+1]);
    return max_sum;
        
    }
};
