use std::io::stdin;

fn main() {
    let array = [];
}
fn make_ascending(&array) {
    prev_num = array[0];
    for number in &array {
        if number >= prev_num {
            new_
        }
    }

    array
}


fn get_input() -> i32 {
    println!("Enter number: ");
    loop {
        // Empty new string
        let mut line = String::new();
        // Reading the input
        let input = stdin().read_line(&mut line);
        let number: Option<i32> = input.ok().and_then(|_| line.trim().parse().ok());
        match number {
            None => println!("Enter number: "),
            Some(n) if n > 2 && n % 2 == 0 => return n,
            Some(_) => {
                println!("Please enter number that is even and greater than 2")
            }
        }
    }
}
