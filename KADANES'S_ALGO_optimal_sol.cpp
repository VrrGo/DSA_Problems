class Solution{
    public:
   
    long long maxSubarraySum(int arr[], int n){
        
        long long sum = arr[0] ;
        
        long long max_sum = arr[0] ;
        
        for(int i=1 ;i<n;i++){
            
            
            
            if(sum<=0){
                sum = arr[i];
            }else{ 
                sum += arr[i];
            }
            
            max_sum = max(max_sum,sum); 
        }
        
        return max_sum;
    }
};
