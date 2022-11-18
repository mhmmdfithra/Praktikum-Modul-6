matriks= int(input())
jumlah=[]
bilangan= list(map(int,input().split()))
for i in range (matriks):
    print((i+1)*bilangan[i], end= ' ')