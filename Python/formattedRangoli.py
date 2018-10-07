def print_rangoli(size):
    # your code goes here
    string = "abcdefghijklmnopqrstuvwxyz"
    lst = list(string)

    out_str = []

    for i in range(size-1, -1, -1):
    	out = [lst[j] for j in range(i, size)]
    	# r_out = out[::-1]		#reverse list
    	# r_out = r_out[:-1]	#remove the last element i.e the first element of out list
    	r_out = out[:0:-1]	#begin reversing after 0th index only (index 0 excluded). recall that [::-1] means reverse

    	out_str.append("-".join(r_out+out).center(size*4-3, "-"))

    print("\n".join(out_str[:-1] + out_str[::-1]))

if __name__ == '__main__':
    n = int(input())
    print_rangoli(n)


######################################ELEGANT METHOD###################################################

# for i in range(n):
#     s = "-".join(alpha[i:n])
#     L.append((s[::-1]+s[1:]).center(4*n-3, "-"))
# print('\n'.join(L[:0:-1]+L))	#begin reversing after 0th index only (index 0 excluded)