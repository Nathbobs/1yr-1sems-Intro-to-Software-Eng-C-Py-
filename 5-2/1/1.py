def printLine(n):
    for i in range(1,n+1):
        for j in range(1,i+1):
            print(j, end = '')
        print('\n',end='')
    for i in range(n+1,1,-1):
        for j in range(1,i):
            print(j, end = '')
        print('\n',end='')


n = int(input('insert a positive integer "n" '))
printLine(n)