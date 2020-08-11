#include <stdio.h>
int main(int argc, char* argv){
	int n = 6;
	int arr[] = {5,4,3,2,1,0};
	//Initialization of loop invariant
	int smallestSoFar = arr[0];
	int nextToCheck = 1;
	while(nextToCheck!=n){		
		if(arr[nextToCheck]<smallestSoFar){
			smallestSoFar = arr[nextToCheck];
		}
		nextToCheck++;
		//Maintenance of the loop invariant
		//At the end of the loop the loop invariant (smallestSoFar) is maintained because, from 0 to nextToCheck-1, smallestSoFar is the smallest number. As the term "loop invariant" basically means staying the same through the loop, since smallestSoFar satisfies the condition that it is the smallest from 0 to nextToCheck - 1, it is the loop invariant.
	}
	//Loop termination + Invariant = goal of finding the smallest number in the loop
	//The three steps of the loop invariant are also satisfied by smallestSoFar:
	//Loop initialization where the condition of smallestSoFar being the smallest number is satisfied.
	//Loop maintenance where the above condition is still satisfied from 0 to nextToCheck - 1
	//Loop termination and invariant's value together achieve the goal of finding the smallest number in the loop.
	printf("The smallest number in the bunch is : %d\n",smallestSoFar);
	return 0;
}
