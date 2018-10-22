vector<int> Solution::plusOne(vector<int> &A) {
    // New vector w/o leading zeros
   int flag=0;
   vector<int> removee;
   
   for(int i=0;i<A.size();i++){
       if(flag==1)
            removee.push_back(A[i]);
        else if(A[i]!=0 && flag==0){
            flag=1;
            removee.push_back(A[i]);
        }
   }
   //
   
   
   reverse(removee.begin(),removee.end());
   
   int sum=0,carry=1;
   for(int i=0;i<removee.size();i++){
       int temp=removee[i]+carry;
       sum=temp%10;
       removee[i]=sum;
       carry=temp/10;
   }
    if(carry)
        removee.push_back(carry);
    
    reverse(removee.begin(),removee.end());
    
    return removee;
    
    
}
