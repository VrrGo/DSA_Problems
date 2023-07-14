class Solution{
    public:
   
    long long maxSubarraySum(int arr[], int n){
        
       
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
