def nonDivisibleSubset(k, s) -> int:
    new_list = list(s)
    current: int = 0
    pointer: int = 0
    while True:
        new_set = set(())
        initial_sum = sum(new_list[0:1])
        if not initial_sum % k:
            new_set.update(new_list[0:1])


# Press the green button in the gutter to run the script.
if __name__ == '__main__':
    print_hi('PyCharm')

# See PyCharm help at https://www.jetbrains.com/help/pycharm/
