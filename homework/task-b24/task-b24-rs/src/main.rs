use std::io::stdin;

fn main() {
    let n_value = get_input();
    for i in 2..n_value / 2 + 1 {
        if is_prime(i) && is_prime(n_value - i) {
            println!("{i} + {} = {n_value}", n_value - i);
        }
    }
}

fn is_prime(number: i32) -> bool {
    // Returns `true` if number is prime
    if number % 2 == 0 && number > 2 {
        return false;
    }
    // for i in (3..(number as f64).sqrt() as i32).step_by(2) {
    for i in (3..number).step_by(2) {
        if number % i == 0 {
            return false;
        }
    }
    true
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
