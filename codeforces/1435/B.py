from sys import stdin
for _ in range(int(input())):
    n,m=map(int,stdin.readline().split())

    new = [[0]*m for i in range(n)]

    rs,cs=[],[]
    for r in range(n): rs.append(list(map(int,stdin.readline().split())))
    for c in range(m): cs.append(list(map(int,stdin.readline().split())))

    fc=0
    
    found=0
    for i in rs:
        a=i[0]
        for j in cs:
            b=j[0]
            if a==b:
                fc=i
                found=1
                break
        if found: break

    for i in range(m):
        new[0][i]=fc[i]

    c=0
    for i in fc:
        r=1
        for j in cs:
            if j[0]==i:
                for k in j[1:]:
                    new[r][c]=k
                    r+=1
        c+=1
                    
            

    
            
        
    #print(new)
    print('\n'.join([' '.join([str(i) for i in j]) for j in new]))