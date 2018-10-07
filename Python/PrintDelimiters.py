'''Read an integer N.

Without using any string methods, try to print the following:

123...N
Note that "..." represents the values in between.

Input Format

The first line contains an integer N.

Output Format

Output the answer as explained in the task.
'''

if __name__ == '__main__':
    n = int(input())
    print(*range(1, n+1), sep='')	#range returns a list like [1,2,3] but print accepts args like 1,2,3. * does this conversion
    #sep is about changing the separator after each print statement