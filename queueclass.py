class queues:
    def __init__(self):
        self.arr=[]

    def enqueue(self,n):
        self.arr.append(n)
    def dequeue(self):
        try:
            n=self.arr.pop(0)
        except:
            print("Empty list")

obj=queues()
obj.dequeue()
obj.enqueue(2)
obj.enqueue(4)
obj.enqueue(5)
print(obj.arr)
obj.dequeue()
obj.enqueue(5)
print(obj.arr)
obj.enqueue(5)