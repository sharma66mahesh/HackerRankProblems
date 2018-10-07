if __name__ == '__main__':
	arr = []
	outArr = []
	for _ in range(int(input())):
		name = input()
		score = float(input())
		arr.append([name, score]) #append adds the list while extend adds these 2 values as 2 different elements

###---------------METHOD--1---------------------
	# minScore = min(arr[i][1] for i in range(len(arr)))
	
	# i = 0
	# while i < len(arr):
	# 	if arr[i][1] == minScore:
	# 		arr.remove([arr[i][0], arr[i][1]])
	# 		continue	#if found, it should not increment value of i
	# 	i = i + 1

	# minScore = min(arr[i][1] for i in range(len(arr)))

	# for i in range(len(arr)):
	# 	if arr[i][1] == minScore:
	# 		outArr.append([arr[i][0], arr[i][1]])

	# outArr = sorted(outArr, key = lambda x: x[0])	#sort based on second element

	# for [i,j] in outArr:
	# 	print(i)

##---------METHOD--2--------------------
arr = sorted(arr, key = lambda x: x[1])

for i in range(len(arr)):
	if arr[0][1] == arr[i][1]:
           continue

	outArr.append([arr[i][0], arr[i][1]])

	if(i + 1 < len(arr) and arr[i+1][1] != arr[i][1]):
		break
	index = index + 1

outArr = sorted(outArr, key = lambda x: x[0])
for [i,j] in outArr:
	print(i)