def main():
	arr = [65,34,3,4232,3,4,34,34]
	length = len(arr)
	for i in range(1,length):
		key = arr[i]
		j = i-1
		while(j>=0 and arr[j]>key):
			arr[j+1] = arr[j]
			j-=1
		arr[j+1] = key
	print(arr)
if __name__ == '__main__':
	main()
