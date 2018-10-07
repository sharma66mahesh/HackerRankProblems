#input a string. Then supply the index and new char. Then change that index to the supplied character

def mutate_string(string, position, character):
    # lst = list(string)
    # lst[position] = character
    # return "".join(lst)
    ###############another method by slicing the string##################
    return string[:position] + character + string[position+1:]

if __name__ == '__main__':
    s = input()
    i, c = input().split()
    s_new = mutate_string(s, int(i), c)
    print(s_new)
