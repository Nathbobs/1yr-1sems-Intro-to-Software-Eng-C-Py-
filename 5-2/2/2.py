def problemDescription():
    print('* Number of divisor *')
    
def getNumOfDivisors(number):
    p=0
    for i in range(1,number+1):
        if number%i==0:
            p = p+1
    return p
problemDescription()
print('Type the first number:')
n=int(input())
print('Type the second number:')
m=int(input())
print('Number of divisors of the first number is ', getNumOfDivisors(n))
print('Number of divisors of the second number is ', getNumOfDivisors(m))