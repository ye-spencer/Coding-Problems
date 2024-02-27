class MinStack(object):

    def __init__(self):
        self.stack = []
        self.minValue = sys.maxint
        
    def push(self, val):
        self.minValue = min(val, self.minValue)
        self.stack.append([val, self.minValue])

    def pop(self):
        self.stack.pop()
        if (len(self.stack) == 0):
            self.minValue = sys.maxint
        else:
            self.minValue = self.getMin() 

    def top(self):
        return self.stack[-1][0]
        
    def getMin(self):
        return self.stack[-1][1]