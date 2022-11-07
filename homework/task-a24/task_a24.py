"""
Autors - Kristiāns Francis Cagulis, kc22015
A24. Nosaka skaitļa m pēdējo n ciparu summu.
Programma izveidota: 18.09.2022.
"""
import sys
from math import floor, log10


def main() -> None:
    """Main function"""
    while True:
        m_value = get_input("m")
        n_value = get_input("n")
        length = get_length(m_value)
        while n_value > length:
            print(
                f"n value is too big. It must be lower than length of m value ({length}).")
            n_value = get_input("n")
        print(
            f"The sum of the last {n_value} digit(s) of the number {m_value} is {sum_numbers(m_value, n_value)}\n")

        ask_continue = input("Continue program? [1/0] ")
        yes = ["y", "yes", "j", "ja", "jā", "", "1"]
        if ask_continue.lower().strip() not in yes:
            sys.exit("User closed the program")


def get_length(number: int) -> int:
    """Returns length of an integer"""
    return 1 if number == 0 else floor(log10(number) + 1)


def sum_numbers(m_number: int, n_number: int) -> int:
    """Sums last n numbers of m"""
    sum_ = 0
    for i in range(n_number):
        sum_ += (m_number // (10 ** i)) % 10
    return sum_


def get_input(text) -> int:
    """Gets user input and returns its integer value, if value is numeric"""
    while True:
        value = input(f"Enter number {text} (q for exit): ").strip()
        if value.lower() == "q":
            sys.exit("User closed the program")
        if value.isdecimal():
            return int(value)
        print("Please enter a natural number\n")


if __name__ == "__main__":
    main()
