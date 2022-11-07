"""
Autors - Kristiāns Francis Cagulis, kc22015
AuPLa0602. .
Programma izveidota: 08.10.2022.
"""
import sys


def main() -> None:
    """Main function"""
    while True:
        match get_input("Enter number (q to quit): "):
            case 3:
                print("1 and 2")
            case 6:
                print("1 and 5")
            case 7:
                print("2 and 5")
            case _:
                print("Imposible")


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
