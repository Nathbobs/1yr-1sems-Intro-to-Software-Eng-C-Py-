dictionary={}
for i in range(2,10,2):
    list=[]
    for j in range(1,10):
        list.append(i*j)
        dictionary[i]=list
print(dictionary)