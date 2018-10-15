from collections import OrderedDict

def merge_the_tools(string, k):
    # your code goes here
    for i in range(0, len(string), k):
        print("".join(list(OrderedDict.fromkeys(string[i:i+k]))))
        # fromkeys forms a dictionary with individual character of the argument string as keys. can also pass the key's value as next argument
        # dict to list conversion takes only keys and inserts them into list
        # we didn't use set because it doesn't preserve order
if __name__ == '__main__':
    string, k = input(), int(input())
    merge_the_tools(string, k)
