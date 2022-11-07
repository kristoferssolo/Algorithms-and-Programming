"""
Autors - Kristiāns Francis Cagulis, kc22015
AuPLa0504. Nosaka ciparu skaitu skaitlī.
Programma izveidota: 03.10.2022.
"""
import sys


def main() -> None:
    """Main function"""
    while True:
        number = get_input("Enter number (q to quit): ")
        integer = get_input(
            "Enter number, amount of which you want to know (q to quit): ")
        print(
            f"Integer {integer} was found {get_times(number, integer)} time(s) in number {number}\n")


def get_times(number: int, integer: int) -> int:
    """Gets amount of integers in given number. Returns integer."""
    length = 0
    while number != 0:
        if number % 10 == integer:
            length += 1
        number //= 10
    return length


def get_input(text) -> int:
    """Gets user input and returns its integer value, if value is numeric"""

    while True:
        value = input(text)

        if value.lower() == "q":
            sys.exit("User closed the program")
        if value.isnumeric():
            return int(value)
        print("Please enter a natural number\n")


if __name__ == "__main__":
    main()
