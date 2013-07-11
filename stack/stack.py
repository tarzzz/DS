#Implementation of stack ...

class Stack(object):
    def __init__(self):
        self.stack = []
        self.length = -1
        
    def push(self,*args):
        increment = 0
        for num in args:
            print num
            self.stack.append(num)
            increment = increment+1
            
        self.length = self.length + increment
        
    def pop(self):
        if self.length == -1:
            print 'Stack underflow'
            return
        self.length = self.length - 1
        return self.stack[self.length+1]
        
            
