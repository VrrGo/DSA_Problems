class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){
        
        // Your code here
        long long max_sum=arr[0];
        for(int i=0;i<n;i++) {
            long long sum=0;
            for(int j=i;j<n;j++) {
                sum += arr[j];
                max_sum = max(max_sum,sum);
            }
        }
        return max_sum;
    }
};
