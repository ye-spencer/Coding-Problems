class Solution(object):
    def isValid(self, s):
        stack = []
        for ch in s:
            if ch == '(' or ch == '[' or ch == '{':
                stack.append(ch)
            elif ch == ')':
                if not len(stack) or stack.pop() != '(':
                    return False
            elif ch == ']':
                if not len(stack) or stack.pop() != '[':
                    return False
            elif ch == '}':
                if not len(stack) or stack.pop() != '{':
                    return False
        return not len(stack)