def swap_case(s):
    t = []
    for i in range(len(s)):
        t.extend([s[i].lower() if s[i].isupper() else s[i].upper()]) #note I'm using extend, not append. Extend treats even list as a series of elements
    return "".join(t)

if __name__ == '__main__':
    s = input().strip()
    result = swap_case(s)
    print(result)
