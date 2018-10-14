def minion_game(string):
    # your code goes here
    kevin = 0
    stuart = 0
    vowels = ['A', 'E', 'I', 'O', 'U']
    for i in range(len(s)):
        if s[i] in vowels:
            for ln in range(i, len(s)):
                kevin = kevin + 1
            # or simply kevin = kevin + len(s)-i
        else:
            for ln in range(i, len(s)):
                stuart = stuart + 1
            # or simply kevin = kevin + len(s)-i
    if kevin > stuart:
        print("Kevin ", kevin)
    elif kevin < stuart:
        print("Stuart ", stuart)
    else:
        print("Draw")

if __name__ == '__main__':
    s = input()
    minion_game(s)
