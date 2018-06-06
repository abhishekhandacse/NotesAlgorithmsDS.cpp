/*
   http://www.studytonight.com/cpp/stl/stl-numeric-algorithms
   http://www.geeksforgeeks.org/c-magicians-stl-algorithms/
1) sort(first_iterator,last_iterator)
2) reverse(first_iterator,last_iterator)
3) *max_element(first_iterator,last_iterator)
4) *min_element(first_iterator,last_iterator)
5)  accumulate(first_iterator, last_iterator, initial value of sum)
*/
#include <algorithm>
#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

// Passing vector to funtion by reference
void print(vector<int> vect){
	vector<int>::iterator it;
	for(it=vect.begin();it!=vect.end();it++){
		cout<<*it<<" ";
	}
	cout<<endl;
}
int myoperator(int a,int b){
	return a*b;
}
int main(){
	int arr[]={10,20,5,23,42,15,5,5,5};
	int n=sizeof(arr)/sizeof(arr[0]);
	vector<int> vect(arr,arr+n);
	cout<<"Before sorting"<<endl;
	print(vect);
	vector<int>::iterator it;
	//1) sorting
	sort(vect.begin(),vect.end());
	print(vect);
	//2) Reversing
	reverse(vect.begin(),vect.end());
	print(vect);
	//3) and 4) Max Element
	cout<<"Min and Max elements are"<<endl;
	cout<<*max_element(vect.begin(),vect.end())<<" ";
	cout<<*min_element(vect.begin(),vect.end())<<endl;
	//5) accumulate(first_iterator,last)//Very important function//Good use cases possible for this
	int sum=0,fact=0;
	cout<<accumulate(vect.begin(),vect.end(),sum);
	cout<<"Sum is-->"<<sum<<endl;
	// Now to multiply all the nums use
	// accumulate(it.begin(),it.end(),sum,myoperator)
	// Doubt in accumulate
	cout<<accumulate(vect.begin(),vect.end(),fact,myoperator);
	cout<<"Product is-->"<<fact<<endl;
	//6) find(element)
	if(find(vect.begin(),vect.end(),23)!=vect.end()){
		cout<<"Element found"<<endl;
	}else{
		cout<<"No Element found"<<endl;
	}
	//7) count(Occurences of x in vector)
	cout<<count(vect.begin(),vect.end(),5);
return 0;}