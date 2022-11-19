#전역변수선언
checkList = [0]*4
myList = [0]*4
checkSecret=0
#DNA 문자열이 A C G T로 이루어져 있으므로 *4로 설정

#함수 선언
def myadd(c):
    global checkList,myList,checkSecret
    if c=='A':
        myList[0]+=1
        if myList[0]==checkList[0]:
            checkSecret+=1
    elif c=='C':
        myList[1]+=1
        if myList[1]==checkList[1]:
            checkSecret+=1
    elif c=='G':
        myList[2]+=1
        if myList[2]==checkList[2]:
            checkSecret+=1
    elif c=='T':
        myList[3]+=1
        if myList[3]==checkList[3]:
            checkSecret+=1                

def myremove(c):
    global checkList,myList,checkSecret
    if c=='A':
        if myList[0]==checkList[0]:
            checkSecret-=1
        myList[0]-=1
    elif c=='C':
        if myList[1]==checkList[1]:
            checkSecret-=1
        myList[1]-=1
    elif c=='G':
        if myList[2]==checkList[2]:
            checkSecret-=1
        myList[2]-=1    
    elif c=='T':
        if myList[3]==checkList[3]:
            checkSecret-=1
        myList[3]-=1        

S, P = map(int,input().split())
Result =0
A = list(input()) #문자열 저장 리스트 A 선언 
checkList =list(map(int,input().split()))

for i in range(4):
    if checkList[i]==0:
        checkSecret+=1

for i in range(P):
    myadd(A[i])
    
if checkSecret == 4:
    Result+=1

for i in range(P, S):
    j = i-P
    myadd(A[i])
    myremove(A[j])
    if checkSecret==4:
        Result+=1
        
print(Result)