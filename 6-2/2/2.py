import random
ls = []
def Rand(start, stop, number):
    for j in range(number):
        ls.append(random.randint(start, stop))
def findMax(ls):
    max_value=0
    num=ls[0]
    for num in ls:
        if (max_value is None or num > max_value):
            max_value = num
    return max_value
def findMin(ls):
    min_value=1001
    num=ls[0]
    for num in ls:
        if (min_value is None or num < min_value):
            min_value = num
    return min_value
Rand(1, 1000, 100)
for i in range(100):
    print(ls[i], end=" ")
print("\n")
print('Max value:', findMax(ls))
print()
print('Min value:', findMin(ls))
