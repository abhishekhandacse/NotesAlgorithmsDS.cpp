int Solution::maxSubArray(const vector<int> &A) {
    int curr_max=A[0],msf=A[0];
    
    for(int i=1;i<A.size();i++){
        curr_max=max(A[i],curr_max+A[i]);
        msf=max(msf,curr_max);
    }
    
    return msf;
    
    
}
