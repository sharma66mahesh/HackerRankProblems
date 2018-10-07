L = []

noOfOp = int(input().strip())	#strip to remove unnecessary whitespaces at the beginning and end

for _ in range(noOfOp):
	operation = input().strip().split()

	if(operation[0] == 'print'):
		print(L)
	else:
		getattr(L, operation[0])(*list(map(int, operation[1:])))	#get attribute(i.e data or function) of a data structure by variable name
		