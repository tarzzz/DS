## Linked list implementation ...
## Inserts in O(1)
## Search in O(n)

class node(object):
    def __init__(self, val):
        if isinstance(val, (int, float)):
            self._val = val
        self.next = None
        self.previous = None
    
    def val(self):
        return self._val
    

class LinkedList(object):
    def __init__(self):
        self.head = None
    def insert(self, key):
        if self.head is None:
            n = node(key)
            self.head = n
            
        else:    
            previous_node = self.head
            n = node(key)
            n.previous = previous_node
            previous_node.next = n
            self.head = n
        
    def traverse(self):
        i = self.head
        while i != None:
            print i.val()
            i = i.previous
       
    def delete(self, val):
        i = self.head
        while i != None:
            if i.val() == val:
                i.next.previous = i.previous
                i.previous.next = i.next
                return
            i = i.previous    
                      
            
            
               
        


