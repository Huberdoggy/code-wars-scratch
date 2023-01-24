# Your classmates asked you to copy some paperwork for them. You know that
# there are 'n' classmates and the paperwork has 'm' pages.

# Your task is to calculate how many blank pages do you need. If n < 0 or m <
# 0 return 0.

# Example:
# n= 5, m=5: 25
# n=-5, m=5:  0


def paperwork(n, m):
    try:
        if n > 0 and m > 0:
            result = n * m
            return result
        else:
            return 0
    except Exception as e:
        print(e)


def main():
    print(f"Number of blank pages needed: {paperwork(5, 5)}")
    print(f"Number of blank pages needed: {paperwork(-5, 5)}")


main()
