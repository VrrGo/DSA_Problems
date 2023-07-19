class Solution{
public:
    vector<int> nextP(vector<int> &A , int n) {
    
    int bp = -1;
    
    for (int i = n - 2; i >= 0; i--) {
        if (A[i] < A[i + 1]) {
            
            bp = i;
            break;
        }
    }
    
    if (bp == -1) {
        
        reverse(A.begin(), A.end());
        return A;
    }

    for (int i = n - 1; i > bp; i--) {
        if (A[i] > A[bp]) {
            swap(A[i], A[bp]);
            break;
        }
    }
    reverse(A.begin() + bp + 1, A.end());

    return A;
}
};
