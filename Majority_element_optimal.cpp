
class Solution{
  public:
     
    int majorityElement(int a[], int size)
    {
        int count = 0 ;
        
        int prev_ele ;
        
        for(int i = 0 ;i<size;i++){
        
        if(count == 0){
            prev_ele = a[i];
            
        }
        
        if(prev_ele == a[i]){
            count++;
            
        }else{
            count--;
        }
            
        }
        
        count = 0 ;
        
        for(int i = 0 ;i<size;i++){
            
            if(a[i]==prev_ele){
                count++;
            }
            
        }
        
        if(count>(size/2)){
            return prev_ele;
        }else{
            return -1;
        }     
    }
};
