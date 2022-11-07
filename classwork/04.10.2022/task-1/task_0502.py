"""
Autors - Kristiāns Francis Cagulis, kc22015
AuPLa0502. Izvada n lielu piramīdu.
Programma izveidota: 03.10.2022.
"""
import sys


def main() -> None:
    """Main function"""
    while True:
        user_input = get_input("Enter number (q to quit): ")
        for i in range(1, user_input + 1):
            print("*" * i)
        print()


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
