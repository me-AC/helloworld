N=int(input("enter the number: "))
ON=N
RN=0
while(N>0):
    A=N%10
    N=N//10
    RN=(RN*10)+A
if(RN==ON):
    print("it is a palindrome number")
else:
    print("it is not a palindrome number")
