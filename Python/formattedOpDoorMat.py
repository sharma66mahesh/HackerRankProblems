#input n
#Size: 7 x 21 (n x 3n)
#---------.|.---------
#------.|..|..|.------
#---.|..|..|..|..|.---
#-------WELCOME-------
#---.|..|..|..|..|.---
#------.|..|..|.------
#---------.|.---------

if __name__ == "__main__":
    n = int(input())
    
    midPoint = int((n-1)/2)
    print(midPoint)
    m = 3 * n
    
    for i in range(n):
        if i < midPoint:
            print((".|." * (2*i+1)).center(m, '-'))
        elif i > midPoint:
            print((".|." * (2*(n-i-1)+1)).center(m, '-'))
        else:
            print("WELCOME".center(m,'-'))
            
####################PYTHONIC WAY#############################
    # n, m = map(int,input().split())
    # pattern = [('.|.'*(2*i + 1)).center(m, '-') for i in range(n//2)]
    # print('\n'.join(pattern + ['WELCOME'.center(m, '-')] + pattern[::-1])) #[::-1] reverses a list
    