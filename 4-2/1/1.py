total = 0
print('Input a set of integers and input 0 to terminate')

while True:
    sets = input()
    sets = int(sets)
    if sets == 0:
        break
    total += sets #note that += is the same as Total = Total + sets
print("Sum of integers = ", total)