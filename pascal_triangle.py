row=int(input("Enter number of rows to print"))
a=[1]
p=[]
for i in range (row+1):
    
    a.extend(p)
    print(" ".join([str(i) for i in a]))
    del (p)
    p=[1]
    for b in range (i):
        if b<=(len(a)-1):
            p.extend([a[b]+a[b+1]])
    p.append(1)
    del (a)
    a=[]
