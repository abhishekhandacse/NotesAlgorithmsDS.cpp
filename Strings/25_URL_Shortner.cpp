#include<bits/stdc++.h>

using namespace std;


string idtourl(long int n){
	char map[] = "abcdefghijklmnopqrstuvwxyzABCDEF"
                 "GHIJKLMNOPQRSTUVWXYZ0123456789";
	string url;
	while(n){
		url=(map[n%62])+ url;
		n=n/62;
	}

	return url;
}
long int urltoid(string shortURL){
    long int id = 0; // initialize result
 
    // A simple base conversion logic
    for (int i=0; i < shortURL.length(); i++)
    {
        if ('a' <= shortURL[i] && shortURL[i] <= 'z')
          id = id*62 + shortURL[i] - 'a';
        if ('A' <= shortURL[i] && shortURL[i] <= 'Z')
          id = id*62 + shortURL[i] - 'A' + 26;
        if ('0' <= shortURL[i] && shortURL[i] <= '9')
          id = id*62 + shortURL[i] - '0' + 52;
    }
    return id;
}


int main(){
	int tc;
	cin>>tc;

	while(tc--){
		long long int n;
		cin>>n;
		string url=idtourl(n);
		cout<<url<<endl<<urltoid(url)<<endl;


	}



return 0;}