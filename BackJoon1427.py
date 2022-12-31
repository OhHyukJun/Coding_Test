import sys
out = sys.stdout.write #값을 출력할 때 사용
A = list(input())
N = len(A)

for i in range(N):
    Max = i
    for j in range(i+1,N):
        if A[j]>A[Max]: #오름차순일 경우에는 최솟값을 찾는다
            Max=j 
    if A[i] < A[Max]:
        temp = A[i]
        A[i] = A[Max]
        A[Max] = temp # 두 값을 바꿔준다
for i in range(N):
    out(A[i])
