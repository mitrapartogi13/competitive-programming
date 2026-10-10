tc = int(input())

for i in range(tc):
    inp = int(input())
    aa = input().split()
    res = map(int, aa)
    currMax = max(res)
    print(currMax*inp)
