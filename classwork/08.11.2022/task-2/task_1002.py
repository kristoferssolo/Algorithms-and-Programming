"""
Autors - Kristiāns Francis Cagulis, kc22015
AuPLa0000.
Programma izveidota: 00.00.2022.
"""
import sys


def main() -> None:
    """Main function"""
    while True:
        print(remove_numbers(get_input()))


def remove_numbers(numbers: list, *, limit: int = 17) -> list:
    """Creates new `list` where all values are greater than `limit`"""
    return [number for number in numbers if number > limit]


def get_input() -> list:
    """Gets user input and returns its integer value"""
    # while True:
    #     numbers = input("Enter numbers (q for exit): ").strip().split()
    #     if "q" in numbers:
    #         sys.exit("User closed the program")
    #     try:
    #         return list(map(int, numbers))
    #     except ValueError:
    #         print("All entered values must be integers\n")
    return [18, 3, 123, 284]


if __name__ == "__main__":
    main()
