#input a string, split it at space and join again using hyphen(-)

def split_and_join(line):
    # write your code here
    # line = line.split() # or split(" ")
    # out = "-".join(line)
    # return out

    return "-".join(line.split())
    ###########OR########
    #return line.replace(" ", "-")


if __name__ == '__main__':
    line = input()
    result = split_and_join(line)
    print(result)
