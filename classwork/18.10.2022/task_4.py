#!/usr/bin/python
"""
AuPLa07
"""


def main():
    """Prints X"""
    length = int(input("n = "))

    level_2 = []
    for i in range(length):
        level_1 = ["_" for _ in range(length)]
        level_1[i] = "\\"
        level_1[-i-1] = "/"
        if level_1[i] == level_1[-i-1]:
            level_1[i] = "X"
        level_2.append(level_1)

    for i in level_2:
        print("".join(i))


if __name__ == "__main__":
    main()
