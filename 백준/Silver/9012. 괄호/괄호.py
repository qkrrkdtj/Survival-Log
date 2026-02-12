class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

class Stack:
    def __init__(self):
        self.top = None
    
    def is_empty(self):
        return self.top is None

    def push(self, data):
        new_node = Node(data)
        if self.is_empty():
            self.top = new_node
        else:
            new_node.next = self.top
            self.top = new_node
#            current = self.top
#            self.top = new_node
#            self.top.next = current

    def is_empty(self):
        return self.top is None

    def display(self):
        if self.is_empty():
            print("연결 리스트가 비어 있습니다")
            return

        current = self.top
        while current:
            print(f"|  {current.data}  |")
            current = current.next
        print("")

    def peek(self):
        if self.is_empty():
            return
            
        return self.top.data

        
    def pop(self):
        if self.is_empty():
            return

        current = self.top
        self.top = current.next
        return current.data

def is_check(test):
    vps = Stack()
    
    is_valid = True
    
    for ps in test:
        if ps == "(":
            vps.push(ps)
        else:
            if vps.pop() =="(":
                continue
            else:
                is_valid = False
                break
    
    if not vps.is_empty():
        is_valid = False
    
    if is_valid:
        print("YES")
    else:
        print("NO")


a = int(input())

for i in range(a):
    test = input()

    is_check(test)
        