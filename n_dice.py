import random
n=int(input("number of dice"))
print("type \'throw()\'to start")
def throw():
    for i in range (1,n+1):
        a=random.randint(1,6)
        print(a, end="   ")
    print ("type \'throw()\' for next turn")
