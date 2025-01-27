int removeDuplicates(vector<int> &arr, int n) {
	// Write your code here.
	int count=1;
	// if (arr[0]!=arr[1]){
	// 	count++;
	// }
	//&& arr[i-1] != arr[i]
	for(int i=0;i<n-1;i++){
		if(arr[i] != arr[i+1] )
		{
			count++;
		}
	}
	// if(arr[n-1]!=arr[n-1]){
	// 	count++;
	// }
	return count;
}
