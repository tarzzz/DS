from linked_list import *

s = LinkedList()
for i in range(10):
    s.insert(i)
    
s.traverse()    

for i in range(2,6):
    s.delete(i)
    
print ('------------------')    
s.traverse()    

