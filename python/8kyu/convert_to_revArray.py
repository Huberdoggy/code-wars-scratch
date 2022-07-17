"""
Given a random non-negative number, you have to return the digits of this
number within an array in reverse order.

Example(Input => Output):
348597 => [7,9,5,8,4,3]
0 => [0]
"""


def digitize(n):
    rev_digs = []
    str_num = str(n)
    length = len(str_num)
    if length == 1:
        rev_digs.append(n)
        return rev_digs
    first_el = str_num[0]
    for i in range(int(length), int(first_el) - 1, -1):
        rev_digs.append(i)
    return rev_digs


def main():
    print(f"Reversed array is: {digitize(0)}")
    print(f"Reversed array is: {digitize(12345)}")


main()
