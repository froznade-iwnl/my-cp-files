n = int(input()) + 1


def allCharIsDifferent(s): 
    s = str(s)
    s = sorted(s)
    for i in range(1, len(s)):
        if s[i] == s[i-1]:
            return True
    return False

while(allCharIsDifferent(n)):
    n = int(n)
    n += 1 

print(n)

