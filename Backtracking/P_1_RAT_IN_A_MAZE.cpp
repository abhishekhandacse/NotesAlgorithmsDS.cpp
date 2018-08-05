void recur(int M[MAX][MAX],int n,vector<string> &correct,string str="",int x=0,int y=0){

	if(x==n-1 && y==n-1){
		correct.push_back(str);
		return;
	}

	if(M[x][y]){
		// Left
		if(x>0)
			recur(M,n,correct,str+'L',x-1,y);
		// Right
		if(x<n-1)
			recur(M,n,correct,str+'R',x+1,y);
		// Top
		if(y<n-1)
		recur(M,n,correct,str+'U',x,y+1);
		// Down
		if(y>0)
		recur(M,n,correct,str+'D',x,y-1);
	}
	// Failure
	// Will return automatically
}



vector<string> printPath(int m[MAX][MAX], int n){
 	vector<string> correct;
 	recur(m,n,correct);
 	sort(correct.begin(),correct.end());
 	return correct;
}