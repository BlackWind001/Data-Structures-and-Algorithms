def myInsertionSort(arr, n):
	for i in range(0,n):
		j = i
		while(j-1>=0):
			if arr[j]<arr[j-1]:
				arr[j], arr[j-1] = arr[j-1], arr[j]
			else:
				break
			j = j - 1
def main():
	print("No of elements")
	x = int(input());
	arr = []
	for i in range(0,x):
		arr.append(int(input()))
	myInsertionSort(arr,len(arr))
	for i in arr:
		print(str(i)+"\t",end="")
	print()
if __name__ == '__main__':
	main()
