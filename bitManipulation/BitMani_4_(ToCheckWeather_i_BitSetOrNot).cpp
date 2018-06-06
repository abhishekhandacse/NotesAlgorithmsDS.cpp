bool check(int N,int I){
	if( ((N)&(1<<I)) ) return true;
	else return false;
}