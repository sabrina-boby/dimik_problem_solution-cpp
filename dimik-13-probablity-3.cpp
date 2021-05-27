t = int(input())

def fact(n):
    f = 1
    for x in range(2, n+1):
        f *= x
    return f

for i in range(t):
    word = input().split()
    word.sort()
    l = len(word)
    s = set(word)
    mf = 1
    for j in s:
        count = 0
        for k in word:
            if j == k:
                count += 1
        if count > 1:
            mf *= fact(count)

    npr = fact(l) // mf
    print('1/',npr,sep='')
