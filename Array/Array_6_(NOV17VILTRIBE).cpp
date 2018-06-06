#include <iostream>
#include <cstring>
using namespace std;
int main(){
	int tc;
	cin>>tc;
	while(tc--){
		char *str=new char[100001];
		cin>>str;
		int A=0,B=0,ActualA=0,ActualB=0;
		char prev='D';
		for(int i=0;i<strlen(str);i++){
			// Base conditions
			if(prev=='A' && str[i]=='A'){
				A+=ActualA;ActualA=0;
			}else if(prev=='A' && str[i]=='B'){
				ActualA=0;ActualB=0;
			}else if(prev=='B' && str[i]=='B'){
				B+=ActualB;ActualB=0;
			}else if(prev=='B' && str[i]=='A'){
				ActualA=0;ActualB=0;
			}

			if(str[i]=='A'){
				A++;
				prev='A';
			}else if(str[i]=='B'){
				B++;
				prev='B';
			}
			if(str[i]=='.'){
				if(prev=='A'){
					ActualA++;
				}else if(prev=='B'){
					ActualB++;
				}
			}

		}

		cout<<A<<" "<<B<<endl;
	}
return 0;}