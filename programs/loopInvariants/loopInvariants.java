class loopInvariants{
	public static void main(String args[]){
		int arr[] = {9,87,7,4,7,7789};
		int len = arr.length;
		int smallestSoFar = arr[0];
		int nextIndexToCheck = 1;
		while(nextIndexToCheck!=len){
			if(arr[nextIndexToCheck]<smallestSoFar){
				smallestSoFar = arr[nextIndexToCheck];
			}
			nextIndexToCheck++;
		}
		System.out.println(smallestSoFar);
	}
}
