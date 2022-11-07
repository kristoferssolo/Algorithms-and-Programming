"""
Autors - Kristiāns Francis Cagulis, kc22015
AuPLa0000.
Programma izveidota: 00.00.2022.
"""
import sys


def main() -> None:
    """Main function"""
    while True:
        pass


def get_input(text, natural=False) -> int:
    """Gets user input and returns its integer value, if value is numeric"""

    while True:
        value = input(text)

        if value.lower() == "q":
            sys.exit("User closed the program")
        try:
            if natural and int(value) <= 0:
                print("Please enter a natural number\n")
            else:
                return int(value)
        except ValueError:
            print("Please enter a natural number\n")


if __name__ == "__main__":
    main()
