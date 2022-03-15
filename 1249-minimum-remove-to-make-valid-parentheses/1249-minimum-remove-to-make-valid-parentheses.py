class Solution:
    def minRemoveToMakeValid(self, s: str) -> str:
        
        opened_parentheses, chars = deque(), [[False, e] for e in s]

        for i, e in enumerate(s):
            if e == '(':
                opened_parentheses.append(i)
            elif e == ')':
                if opened_parentheses:
                    last_opened_p_idx = opened_parentheses.pop()
                    chars[last_opened_p_idx][0] = chars[i][0] = True
            else:
                chars[i][0] = True

        return ''.join(e for valid, e in chars if valid)
        