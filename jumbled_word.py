import random
def choose():
    words=["umbrella","rain","computer","laptop","brother"]
    pick=random.choice(words)
  #  choosen=words[pick]
    return pick
def jumbled(word):
   jumble= "".join(random.sample(word,len(word)))
   return jumble
    


p1name=input("whats is your name player 1")
p2name=input("what is your name player 2")
p1p=0
p2p=0
turn=0
c=1
while(c==1):
    if(turn%2==0):
        choosed_word=choose()
        question=jumbled(choosed_word)
        print(question)
        
        print("player 1 your turn")
        ans=input("enter your answer")
        if(ans==choosed_word):
            print("great its the correct answer")
            p1p=p1p+1
        else:
            print("oh no its not the correct answer")
            print("the correct answer is",choosed_word)
        turn=turn+1
    else:
        choosed_word=choose()
        question=jumbled(choosed_word)
        print(question)
        print("player 2 its your turn")
        ans=input("enter your answer")
        if(ans==choosed_word):
            print("great its the correct answer")
            p2p=p2p+1
        else:
            print("oh no its not the correct answer")
            print("the correct answer is",choosed_word)
        turn=turn+1
    c=int(input("do u want to continue(0/1)"))
print("thank u for playing")
print("player 1 ur points:",p1p)
print("player 2 ur points:",p2p)
        