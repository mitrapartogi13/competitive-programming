
def MEX(arr):
    arr = sorted(arr)
    m = 0
    for num in arr:
        if num == m:
            m+=1
        else:
            break
    print(m)
        
tc = int(input())
    
for i in range(tc):
    arrlen = int(input())
    mylist = []
    mylist = list(map(int, input().split()))    

    myarr = list(set(mylist))

    myarr = sorted(myarr)
    aaa = min(myarr)
    if min(myarr) == 0:
        MEX(myarr)
    elif min(myarr) < 0:
        for j in range(len(myarr)):
            myarr[j]+= abs(aaa)
        MEX(myarr)
    elif min(myarr) > 0:
        for j in range(len(myarr)):
            myarr[j]+= -1*(aaa)
        MEX(myarr)

    
