class Node:
    def __init__(self, data):
        self.data = data
        self.next = None
        
class Queue:
    def __init__(self):
        self.head = None
        self.tail = None
        self.cnt = 0

    def is_empty(self):
        return self.head is None and self.tail is None

    def push(self, data):
        new_node = Node(data)
        if self.is_empty():
            self.head = new_node
            self.tail = new_node
            self.cnt += 1
        else:
            current = new_node
            self.tail.next = current
            self.tail = current
            self.cnt += 1

    def pop(self):
        if self.is_empty():
            return -1
        current = self.head
        self.head = current.next
        self.cnt -= 1

        if self.head is None:
            self.tail = None
        return current.data

    def display(self):
        if self.is_empty():
            print("X")
            return -1

        current = self.head
        while current:
            print(f"{current.data} -> ", end="")
            current = current.next
        print("")

    def size(self):
        return self.cnt
        
    def front(self):
        if self.is_empty():
            return -1
        return self.head.data

    def back(self):
        if self.is_empty():
            return -1
        return self.tail.data


a = int(input())
b = Queue()
for i in range(1, a+1):
    b.push(i)

j = 1
while b.size() != 1:
    if j % 2 != 0:
        b.pop()
    else:
        b.push(b.pop())
    j+=1
print(b.front())