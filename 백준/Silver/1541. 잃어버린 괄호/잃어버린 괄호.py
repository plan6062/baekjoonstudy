expression = input()
first_minus = expression.find('-')

if first_minus != -1:  # '-'가 있다면
    before = expression[:first_minus]
    after = expression[first_minus:]
    after = after.replace('+', '-')
    
    # before 부분 계산 (예: "10+5" → 15)
    before_parts = before.split('+')
    before_sum = 0
    for part in before_parts:
        before_sum += int(part)
    
    # after 부분 처리 (예: "-3-2" → ['', '3', '2'])
    after_parts = after.split('-')
    result = before_sum
    
    # after_parts[0]은 빈 문자열이므로 1부터 시작
    for i in range(1, len(after_parts)):
        result -= int(after_parts[i])
        
else:  # '-'가 없는 경우 (모두 덧셈)
    parts = expression.split('+')
    result = 0
    for part in parts:
        result += int(part)

print(result)