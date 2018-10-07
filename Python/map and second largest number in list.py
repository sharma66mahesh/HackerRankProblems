if __name__ == '__main__':
    n = int(input())    #size
    
    arr = list(map(int, input().split())) #split on space while entering a line of input and convert each of these split into an int using map function. map object is then converted into list

    #arr = map(int, input().split())[:n] #even better than above code as it takes only n numbers into consideration and the rest are ignored
    
    mx = max(arr)

    while max(arr) == mx:
        arr.remove(max(arr))
    
    print(max(arr))