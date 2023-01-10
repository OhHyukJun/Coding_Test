# 병합정렬은 분할 정복 방식을 사용해 데이터를 분할하고 분할한 집합을 정렬하며 합치는 알고리즘- 시간 복잡도 = O(nlogn)
import sys
input = sys.stdin.readline
print = sys.stdout.write
'''
풀이 1

N = int(input())
array = []

for i in range(N):
    array.append(int(input()))
    
array.sort()
for i in array:
    print(i)


풀이 2

def merge_sort(s,e):
    if e-s<1: return
    m = int(s+(e-s)/2)
    merge_sort(s,m)
    merge_sort(m+1,e)
    for i in range(s,e+1):
        tmp[i] = A[i]
    k=s
    index1 = s #앞 그룹 시작점
    index2 = m+1 #뒷 그룹 시작점
    while index1<=m and index2<=e: #중간점과 끝점에 올 때까지
        if tmp[index1] > tmp[index2]:
            A[k] = tmp[index2]
            k+=1
            index2+=1
        else:
            A[k] = tmp[index1]
            k+=1
            index1+=1
    while index1 <= m: #한쪽 그룹이 모두 선택된 후 남아있는 값 정리
        A[k] = tmp[index1]
        k+=1
        index1+=1
    while index2 <=e:
        A[k] = tmp[index2]
        k+=1
        index2+=1
N = int(input())
A = [0]*int(N+1)
tmp = [0]*int(N+1)

for i in range(1,N+1):
    A[i]=int(input())
    
merge_sort(1,N)

for i in range(1,N+1):
    print(str(A[i])+'\n')
'''
def merge_sort(s,e):
    if(e-s)<1: return #시작점과 끝점이 같아지면 정렬이 종료
    m = int(s+ (e-s)/2) #중간지점을 정의함
    merge_sort(s,m) #s에서 m까지 정렬
    merge_sort(m+1,e) #m+1에서 e까지 정렬
    for i in range(s,e=1): 
        tmp[i] = A[i] #A는 입력값을 받는 배열
    k=s #k값 초기화
    index1 = s
    index2 = m+1 #두 번째 그룹 시작점
    while index1<=m and index2<=e: 
        if tmp[index1] > tmp[index2]:
            A[k] = tmp[index2] #정렬
            k+=1
            index2+=1
        else:
            A[k] = tmp[index1]
            k+=1
            index1+=1
            