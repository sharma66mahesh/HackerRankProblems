###############################general method########################################
#def wrap(string, max_width):
    #str_lst = list(string)
    #i = 0
    #while i < len(str_lst):
        #i = i + max_width
        #str_lst.insert(i,"\n")
        #i = i + 1
    
    #return "".join(str_lst)

import textwrap

def wrap(string, max_width):
    return "\n".join([string[i:i+max_width] for i in range(0, len(string), max_width)])


if __name__ == '__main__':
    string, max_width = input(), int(input())
    result = wrap(string, max_width)
    print(result)
    #print textwrap.fill(string, max_width)