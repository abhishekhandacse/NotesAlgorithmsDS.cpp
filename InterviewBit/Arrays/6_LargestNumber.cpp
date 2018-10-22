bool compare(string a,string b){
    string first=a+b;
    string second=b+a;
    
    return ((first.compare(second)>0) ? true:false);
}

string Solution::largestNumber(const vector<int> &arr) {
    vector<string> vect;
    for(auto i:arr)
        vect.push_back(to_string(i));
        
    sort(vect.begin(),vect.end(),compare);
    
     string ans="";
    for(auto i:vect){
        if(ans=="" && (i.compare("0")!=0) || ans!=""){
            ans+=i;
            
        }
    }
        
    if(ans.size()==0)
        return "0";
    else return ans;
    
    
}
