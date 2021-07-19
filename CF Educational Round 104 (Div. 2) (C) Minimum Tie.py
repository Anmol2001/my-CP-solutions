for t in range(int(input())):
    n=int(input())
    if n==2:
        print(0)
        continue
        
    elif n%2==1:
        for i in range(1,n+1):
            for j in range(i+1,n+1):
                if j-i==1:
                    print(-1,end=" ")
                elif j-i==n-1 and i==1:
                    print(1,end=" ")
                elif (j-i)%2 ==0:
                    print(-1,end=" ")
                else:
                    print(1,end=" ")
    else:
        for i in range(1,n+1):
            for j in range(i+1,n+1):
                if j-i==1 :
                    print(-1,end=" ")
                elif j-1==n-1 and i==1:
                    print(1,end=" ")
                elif (j-i-1)== n//2 -1:
                    print(0,end=" ")   
                elif j<i+n//2:
                    print(-1,end=" ")
                else:
                    print(1,end=" ")
    print()
        
