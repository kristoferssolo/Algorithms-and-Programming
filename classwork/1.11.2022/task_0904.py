"""
Autors - Kristiāns Francis Cagulis, kc22015
AuPLa0904.
Programma izveidota: 01.11.2022.
"""
import sys


def main() -> None:
    """Main function"""
    while True:
        v_numbers = [2, 3]
        n_value = get_input("Enter n-th element: ", natural=True)
        if n_value == 1:
            last_num = v_numbers[0]
        elif n_value == 2:
            last_num = v_numbers[1]
        else:
            for i in range(2, n_value):
                v_numbers.append(sequence(v_numbers[i-1], v_numbers[i-2]))
            last_num = v_numbers[-1]

        print(f"n-th element is {last_num}")


def sequence(n_minus_one: int, n_minus_two: int) -> int:
    """Returns Vn = 4*V(n-1) + 3*V(n-2)"""
    return 4*n_minus_one + 3*n_minus_two


def get_input(text, *, natural=False) -> int:
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
