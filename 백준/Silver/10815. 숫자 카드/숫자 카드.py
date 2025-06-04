import sys

input = sys.stdin.readline

card_num = int(input())

card_own_list = list(map(int, input().rstrip().split()))

sorted_card_own_list = sorted(card_own_list)

card_amount_to_find = int(input())

card_list_to_find = list(map(int, input().rstrip().split()))


def binary_search(sorted_card_own_list, card_num_to_find):
    left = 0
    right = len(sorted_card_own_list) - 1
    middle = (left + right) // 2

    while left <= right:

        if card_num_to_find > sorted_card_own_list[middle]:
            left = middle + 1
            middle = (left + right) // 2
        elif card_num_to_find < sorted_card_own_list[middle]:
            right = middle - 1
            middle = (left + right) // 2
        else:
            return 1

    return 0


for i in range(card_amount_to_find):
    print(binary_search(sorted_card_own_list, card_list_to_find[i]), end=" ")