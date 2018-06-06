// Count Number of ones in Binary Representation of No
// It will go to Log N in worst case

// It has almost constant time complexity
// Analyse for the num=15 and you will get to know the worst case

int countOne(int num){
	int Count=0;
	while(num){
		num=((num)&(num-1));
		Count++;
	}
	return Count;
}