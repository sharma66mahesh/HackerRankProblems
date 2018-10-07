#str.isalpha(), str.isalnum(),str.isdigit(), str.islower(), str.isupper()
"""
In the first line, print True if  has any alphanumeric characters. Otherwise, print False.
In the second line, print True if  has any alphabetical characters. Otherwise, print False.
In the third line, print True if  has any digits. Otherwise, print False.
In the fourth line, print True if  has any lowercase characters. Otherwise, print False.
In the fifth line, print True if  has any uppercase characters. Otherwise, print False.
"""

if __name__ == "__main__":
    s = input().strip()
    func = ["isalnum", "isalpha", "isdigit", "islower", "isupper"]

    lst = []

    for f in func:
        temp = [getattr(s[i], f)() for i in range(len(s))]
        if True in temp:
            lst.append(True)
        else:
            lst.append(False)
    [print(lst[i]) for i in range(len(func))]

#######################another short method####################
# print(any(s[i].isalnum() for i in range(len(s))))
# print(any(s[i].isalpha() for i in range(len(s))))
# print(any(s[i].isdigit() for i in range(len(s))))
# print(any(s[i].islower() for i in range(len(s))))
# print(any(s[i].isupper() for i in range(len(s))))
