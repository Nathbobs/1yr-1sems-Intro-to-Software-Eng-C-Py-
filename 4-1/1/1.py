print('I will like to know you, what is your name?')
username = input()
username = str(username)
print('Hey ' + username + ' give me a number and i will print out all the numbers from 1 to the number you give me.')
n = input()
n = int(n)
for i in range(1,n+1):
    print(i)