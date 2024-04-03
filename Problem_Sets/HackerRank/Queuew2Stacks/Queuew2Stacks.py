# Enter your code here. Read input from STDIN. Print output to STDOUT
class Queue:
    def __init__(self):
        self.stack1 = []
        self.stack2 = []

    def enqueue(self, data):
        self.stack1.append(data)

    def dequeue(self):
        if not self.stack2:
            while self.stack1:
                self.stack2.append(self.stack1.pop())
        self.stack2.pop()

    def peek(self):
        if self.stack2:
            return self.stack2[-1]
        else:
            while self.stack1:
                self.stack2.append(self.stack1.pop())
            return self.stack2[-1]

def main():
    queries = int(input())
    queue = Queue()

    for _ in range(queries):
        inp = input()
        if " " in inp:
            queue.enqueue(int(inp.split()[1]))
        elif inp == "2":
            queue.dequeue()
        else:
            print(queue.peek())


if __name__ == "__main__":
    main()