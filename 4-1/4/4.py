print('I will like to know you, what is your name?')
username = input()
username = str(username)
print('Hey ' + username + ' give me a number and let us create a multiplication table')
n = input()
n = int(n)
print('enter the last number of the table')
m = input()
m = int(m)
i=1
while i<=m:
    print(n, "x",i, "=",n*i)
    i=i+1