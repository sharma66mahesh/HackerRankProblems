#given 2 strings, find out how many times the second string oocurs in the first string
def count_substring(string, sub_string):
    l1 = len(string)
    l2 = len(sub_string)
    count = sum([1 for i in range(l1 - l2 + 1) if string[i:i+l2] == sub_string])
    return count


if __name__ == '__main__':
    string = input().strip()
    sub_string = input().strip()
    count = count_substring(string, sub_string)
    print(count)
