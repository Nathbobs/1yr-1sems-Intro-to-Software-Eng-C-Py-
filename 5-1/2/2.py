print('Input 2 integers and i will show the sum, difference, multiplication, division, and mod of the two given numbers')
n = int(input('insert the first number: '))
m = int(input('insert the second number: '))
def add(n ,m):
    addition = n + m
    return addition
def sub(n ,m):
    difference = n - m
    return difference
def prod(n ,m):
    product = n * m
    return product
def div(n ,m):
    division = n / m
    return division
def rem(n ,m):
    remainder = n % m
    return remainder
def printMsg():
    return ('completed')

print('Sum: ', add(n,m))
print('difference: ', sub(n,m))
print('product: ', prod(n,m))
print('division: ', div(n,m))
print(printMsg())