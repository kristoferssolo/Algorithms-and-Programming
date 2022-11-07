"""
Autors - Kristiāns Francis Cagulis, kc22015
AuPLa0802.
Programma izveidota: 24.10.2022.
"""

# print(input("Enter string: ").count(input("Enter symbol: ")))


def main():
    """Main function"""
    while True:
        string = input("Enter string: ")
        character = input("Enter symbol: ")
        print(f"'{character}' in '{string}' appears {string.count(character)} times")

        continue_loop = input("Continue loop? [1/0]: ")
        if continue_loop == "0":
            break


if __name__ == "__main__":
    main()
