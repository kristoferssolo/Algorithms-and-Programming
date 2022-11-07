"""
Autors - Kristiāns Francis Cagulis, kc22015
AuPLa0204. Aprēķina funkcijas f(x) vērtību.
Programma izveidota: 10.09.2022.
"""
import sys


def main():
    """Main function"""

    while True:
        user_input = input("Enter x value (q for exit): ")

        if user_input.lower() == "q":
            sys.exit("User closed the program")
        try:
            x_value = float(user_input)
            if x_value < -2:
                y_value = 0
            elif x_value <= -1:
                y_value = -x_value - 2
            elif x_value < 1:
                y_value = x_value
            elif x_value < 2:
                y_value = -x_value - 2
            else:
                y_value = 0
            print(f"f(x) = {y_value}\n")

        except ValueError:
            print("Please enter a number\n")


if __name__ == "__main__":
    main()
