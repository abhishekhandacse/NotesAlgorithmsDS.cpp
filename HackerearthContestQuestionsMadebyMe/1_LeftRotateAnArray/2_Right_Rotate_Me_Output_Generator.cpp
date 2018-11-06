#include<bits/stdc++.h>

using namespace std;


void PrintRotatedArr(vector<int> &arr,int k,ofstream &output){

	int size=arr.size();
	k=k%size;
	
	for(int i=0;i<size;i++){
		output<<arr[ ((i+k)%size) ]<<" ";
	}

	output<<"\n";

}

int main(){

	// Time settings done


   
    

    

    
	// Configuring output file
		ofstream output;
		output.open("z4_Output.txt");
		

	// Reading input file
		
		ifstream input("z4_Input.txt");
		string line;
		int counter=0;
		vector<int> arr;
		int k;
		// high_resolution_clock::time_point t1 = high_resolution_clock::now();
		while(getline(input,line)){
			// cout<<line<<endl;
			stringstream lineStream(line);
			int value;
			while(lineStream>>value){
	
				if( (counter%2)==0)
					k=value;
				else arr.push_back(value);
			}


			if(counter%2==1)
				PrintRotatedArr(arr,k,output);
			
		if( (counter%2)==1)
			arr.clear();
		counter++;
		}

		// high_resolution_clock::time_point t2 = high_resolution_clock::now();	

		// auto duration = duration_cast<microseconds>( t2 - t1 ).count();
		// cout<<"duration is ->"<<duration
	// Generating output file
return 0;}