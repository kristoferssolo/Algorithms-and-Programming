"""
Autors - Kristiāns Francis Cagulis, kc22015
AuPLa0406. Nosaka ievadītā skaitļa lielāko ciparu pierakstā.
Programma izveidota: 27.09.2022.
"""
import sys
from math import floor, log10


def main():
    """Main function"""
    while True:
        user_input = get_input("Enter number (q for exit): ")
        print(f"The biggest integer of number {user_input} is\
                {get_biggest_int(user_input)}")


def get_biggest_int(number: int) -> int:
    """Return biggest number from given integer"""
    biggest_int = 0
    length = floor(log10(number) + 1)
    for i in range(length):
        num = (number // (10 ** i)) % 10
        if num > biggest_int:
            biggest_int = num
    return biggest_int


def get_input(text) -> int:
    """Gets user input and returns its integer value, if value is numeric"""
    while True:
        value = input(text)

        if value.lower() == "q":
            sys.exit("User closed the program")
        if value.isdecimal():
            return int(value)
        print("Please enter a natural number\n")


if __name__ == "__main__":
    main()
