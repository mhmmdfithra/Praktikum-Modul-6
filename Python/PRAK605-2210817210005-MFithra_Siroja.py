bil= int(input())
MatriksA=[]
print("Matriks A")
for a in range(bil):
    n=list(map(int, input().split()))
    MatriksA.append(n)
MatriksB=[]
print("Matriks B")
for a in range(bil):
    n=list(map(int, input().split()))
    MatriksB.append(n)
MatriksAB=[]
print("Matriks AxB")
for a in range (bil):
    MatriksAB.append([])
    for b in range (bil):
        x=0
        for c in range (bil):
            x= x+MatriksA[a][c]*MatriksB[c][b]
        MatriksAB[a].append(x)
for baris in MatriksAB:
    for c in baris:
        print(c, end=' ')
    print()

    
    