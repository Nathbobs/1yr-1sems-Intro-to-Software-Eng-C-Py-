print('input an integer and i will give you the multiples of 2 and 3')
n = int(input('insert an integer: '))
for n in range(1, n+1):
    if n%2== 0 or n%3 == 0:
        print(n)


#using the def function;
print('input an integer and i will give you the multiples of 2 and 3')
n = int(input('insert an integer: '))
def multiples(n):
    for n in range(1, n+1):
        if n%2== 0 or n%3 == 0:
            print(n);
multiples(n)