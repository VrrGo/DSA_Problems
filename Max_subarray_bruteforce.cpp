class Solution{
    public:
        long long pairWithMaxSum(long long arr[], long long N)
    {
         int n = N;
    int maxSum = INT_MIN;

    for (int i = 0; i < n; i++) {
        int smallest = INT_MAX;
        int secondSmallest = INT_MAX;

        for (int j = i; j < n; j++) {
            if (arr[j] <= smallest) {
                secondSmallest = smallest;
                smallest = arr[j];
            } else if (arr[j] < secondSmallest && arr[j] != smallest) {
                secondSmallest = arr[j];
            }

            int currentSum = smallest + secondSmallest;
            if (currentSum > maxSum) {
                maxSum = currentSum;
            }
        }
    }

    return maxSum;
};







};
