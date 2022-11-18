A,B=map(int,input().split())
nilai= []
x=0
inputan= list(map(int,input().split()))
for i in range(A):
    nilai.append(inputan[x : x+B])
    x=x+B
for A in nilai:
    for inputan in A:
        print(inputan, end=' ')
    print()
