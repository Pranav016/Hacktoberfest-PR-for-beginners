#program to print GP. 
  
def GP(a, r, n):  
    for i in range(0, n):  
        current_term = a * pow(r, i) 
        print(current_term, end =" ") 
      
  
# Driver code 
  
a = 2 # starting number 
r = 3 # Common ratio 
n = 5 # N th term to be find 
  
GP(a, r, n) 
