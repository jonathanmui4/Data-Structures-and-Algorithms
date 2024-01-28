class Solution:
    def isValid(self, s: str) -> bool:
        openBrackets = []
        closeBrackets = {')': '(', ']': '[', '}': '{'}
        for char in s:
            if char in closeBrackets:
                if openBrackets and openBrackets[-1] == closeBrackets[char]:
                    openBrackets.pop()
                else:
                    return False
            else:
                openBrackets.append(char)
        return True if not openBrackets else False