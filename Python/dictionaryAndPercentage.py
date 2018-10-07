from functools import reduce

if __name__ == '__main__':
    n = int(input())
    student_marks = {}
    for _ in range(n):
        name, *line = input().split()	#split ip into 2. line is a list
        scores = list(map(float, line))
        student_marks[name] = scores
    query_name = input()

    sum = reduce((lambda x, y : x + y), student_marks[query_name])
    print("%.2f" % (sum/len(student_marks[query_name])))