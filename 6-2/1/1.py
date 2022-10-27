#dictionary = {}
#print('input 3 students names and scores')
#name1= str(input()), int(input())
#name2= str(input()), int(input())
#name3= str(input()),int(input())

#students = {name1 , name2 , name3}
#n = input(str('Which student score?'))
#if n == students.get():
    #print (students)
students = dict()
for i in range(3):
    name, mark = input().split()
    students[name] = int(mark)
print(students)
print("'Which student's score? ")
x = input()
if (x in students.keys())==True:
    print("'"+x+"'"+" score : "+str(students[x])) 
    print("'%s's score : %d" %(x, students[x]))
else:
    print(x,'is not in the database')
