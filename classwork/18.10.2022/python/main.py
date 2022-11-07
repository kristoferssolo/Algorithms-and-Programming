"""
Autors - Kristiāns Francis Cagulis, kc22015
AuPLa0702.
Programma izveidota: 16.10.2022.
"""
import sys
from num_len import get_number_length


def main():
    """Main function"""
    while True:
        user_input = input("Enter numbers: ").lower().split()
        if "q" in user_input:
            sys.exit("User closed the program")
        try:
            numbers = list(map(int, user_input))
        except ValueError:
            print("All entered values were not integers")

        number_length = []
        for number in numbers:
            number_length.append(get_number_length(number))
        print(" ".join(list(map(str, number_length))))


if __name__ == "__main__":
    main()
