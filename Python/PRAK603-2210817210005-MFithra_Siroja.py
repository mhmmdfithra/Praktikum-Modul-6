line1,line2= map(int, input().split())
if(line1==line2):
    baris1= list(map(int,input().split()))
    baris2= list(map(int,input().split()))
    for i in range(line1):
        print(baris1[i]*baris2[i], end= ' ')
else:
    print('Jumlah tidak sama')