"""
Autors - Kristiāns Francis Cagulis, kc22015
B24. Atrod divus pirmskaitļus, kuru summa ir n.
Programma izveidota: 05.10.2022.
"""

import sys
from math import sqrt


def main() -> None:
    """Main function"""
    while True:
        n_value = get_input()
        # loop till half of `number + 1`
        for i in range(2, n_value // 2 + 1):
            if is_prime(i) and is_prime(n_value - i):
                print(f"{i} + {n_value - i} = {n_value}")

        ask_continue = input("Continue program? [1/0] ")
        yes = ["y", "yes", "j", "ja", "jā", "", "1"]
        if ask_continue.lower().strip() not in yes:
            sys.exit("User closed the program")


def is_prime(number: int) -> bool:
    """Returns `True` if `number` is prime"""
    if number % 2 == 0 and number > 2:  # get rid of even numbers
        return False
    # loop till square root of `number + 1` with `step 2`
    return all(number % i for i in range(3, int(sqrt(number)) + 1, 2))


def get_input() -> int:
    """Gets user input and returns its `int` value"""
    while True:
        value = input("Enter number (q for exit): ").strip()
        if value.lower() == "q":
            sys.exit("User closed the program")
        if value.isdecimal():
            int_value = int(value)
            if int_value > 2 and int_value % 2 == 0:
                return int_value
        print("Please enter number that is even and greater than 2\n")


if __name__ == "__main__":
    main()
