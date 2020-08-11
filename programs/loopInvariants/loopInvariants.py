def main():
	arr = [6,5,4,3,2,1]
	smallestSoFar = arr[0]
	nextIndexToCheck = 1;
	length = len(arr)
	while(nextIndexToCheck!=length):
		if arr[nextIndexToCheck]<smallestSoFar:
			smallestSoFar = arr[nextIndexToCheck]
		nextIndexToCheck+=1
	print(smallestSoFar)
if __name__ == '__main__':
	main()
