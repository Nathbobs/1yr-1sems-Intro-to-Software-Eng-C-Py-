print('Enter a number')
n = input()
n = int(n)
row =0
while row < n:          #Note: when row value is less than 0, execute this while loop.
    star = row+1
    while star > 0:
        print('*', end="")
        star = star - 1
    row = row+1
    print()