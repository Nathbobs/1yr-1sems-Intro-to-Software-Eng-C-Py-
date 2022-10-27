print('Type in a number')
stars = int(input())
for row in range(0, stars):
    for j in range(0, row + 1):
        print("*", end=' ')
    print()