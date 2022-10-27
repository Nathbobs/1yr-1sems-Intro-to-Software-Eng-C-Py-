n = int(input())
def addTotal(n):
    sum = 0
    for i in range(1,n+1):
        sum = sum + i
    return sum
def mulTotal(n):
    mul = 1
    for i in range(1,n+1):
        mul = mul * i
    global gMul
    gMul= mul
    return mul
print('addTotal: ', addTotal(n))
mulTotal(n)
print('gMul: ', gMul)
