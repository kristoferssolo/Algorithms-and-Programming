use std::io::stdin;

fn main() {
    let m_value = get_input("m");
    let mut n_value;
    let length = get_length(m_value as f64);
    loop {
        n_value = get_input("n");
        if n_value < length {
            break;
        }
        println!("n value is too big. It must be lower than length of m value ({length}).");
    }

    println!(
        "The sum of the last {n_value} digit(s) of the number {m_value} is {}",
        sum_numbers(m_value, n_value)
    );
}

fn get_length(number: f64) -> i64 {
    // Returns length of an integer
    if number == 0.0 {
        return 1;
    }
    number.log10().floor() as i64 + 1
}

fn sum_numbers(m_value: i64, n_value: i64) -> i64 {
    // Sums last n numbers of m
    let mut sum = 0;
    for i in 0..n_value {
        sum += (m_value / 10i64.pow(i as u32)) % 10;
    }
    sum
}

fn get_input(text: &str) -> i64 {
    println!("Enter number {text}: ");
    loop {
        // Empty new string
        let mut line = String::new();
        // Reading the input
        let input = stdin().read_line(&mut line);
        let number: Option<i64> = input.ok().and_then(|_| line.trim().parse().ok());
        match number {
            None => println!("Enter number {text}: "),
            Some(n) if n >= 0 => return n,
            Some(_) => {
                println!("Please enter a natural number")
            }
        }
    }
}
