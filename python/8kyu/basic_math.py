"""
Your task is to create a function that does four basic mathematical operations.

The function should take three arguments -
operation(string/char), value1(number), value2(number).
The function should return result of numbers
after applying the chosen operation.

Examples(Operator, value1, value2) --> output
('+', 4, 7) --> 11
('-', 15, 18) --> -3
('*', 5, 5) --> 25
('/', 49, 7) --> 7
"""


def basic_op(operator, value1, value2):
    result = 0
    try:
        if operator == "+":
            result = int(value1) + int(value2)
        elif operator == "-":
            result = int(value1) - int(value2)
        elif operator == "*":
            result = int(value1) * int(value2)
        else:
            result = int(value1) / int(value2)
            # The challenge seems to expect int only
    except Exception as e:
        print(f"\nCan't divide by zero.\n{e}")
        return False
    return result


def main():
    print(f"4 + 7 is: {basic_op('+', 4, 7)}")
    print(f"15 - 18 is: {basic_op('-', 15, 18)}")
    print(f"5 * 5 is: {basic_op('*', 5, 5)}")
    print(f"49 / 7 is: {basic_op('/', 49, 7)}")
    # Test divide by zero catch err
    print(f"10 / 0 is: {basic_op('/', 10, 0)}")


main()
