"""
Autors - Kristiāns Francis Cagulis, kc22015
AuPLa0000.
Programma izveidota: 00.00.2022.
"""
import sys
from math import sqrt, floor


def main() -> None:
    """Main function"""
    m_value = get_input("Enter m value: ", natural=True)
    n_value = get_input("Enter n value: ", natural=True)
    print([x for x in range(m_value, n_value + 1) if sqrt(x) == floor(sqrt(x))])


def get_input(text, *, natural=False) -> int:
    """Gets user input and returns its integer value, if value is numeric"""

    while True:
        value = input(text)

        if value.lower() == "q":
            sys.exit("User closed the program")
        try:
            if natural and int(value) < 0:
                raise ValueError
            return int(value)
        except ValueError:
            print("Please enter a natural number\n")


if __name__ == "__main__":
    main()
