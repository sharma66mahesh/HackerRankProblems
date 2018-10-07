if __name__ == "__main__":
	
	size = input()

	NumbersList = tuple(map(int, input().split()))
#instead of map u can use list comprehension like IntNumList = [int(num) for num in NumList]

	print(hash(NumbersList))	#hash the tuple