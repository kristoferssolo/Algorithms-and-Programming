use std::io::stdin;
use task_0701::get_number_lenght;

fn main() {
    'outer: loop {
        let mut array_length;
        loop {
            println!("Enter the length of array: ");
            array_length = get_input(true);
            if 0 < array_length && array_length <= 100 {
                break;
            }
            println!("Entered number must be smaller or equal than 100");
        }

        let mut numbers = vec![0; array_length as usize];
        let mut numbers_length = vec![0; array_length as usize];

        println!("Enter array elements");
        for i in 0..array_length {
            numbers[i as usize] = get_input(false);
        }

        for i in 0..array_length {
            numbers_length[i as usize] = get_number_lenght(numbers[i as usize] as f64);
        }
        println!("{:?}", numbers_length);

        println!("Continue? [1/0]");
        if get_input(false) == 0 {
            break 'outer;
        }
    }
}

fn get_input(natural: bool) -> i64 {
    loop {
        // Empty new string
        let mut line = String::new();
        // Reading the input
        let input = stdin().read_line(&mut line);
        let number: Option<i64> = input.ok().and_then(|_| line.trim().parse().ok());
        match number {
            None => return 0,
            Some(n) if n > 0 && natural => return n,
            Some(n) if n <= 0 && natural => println!("Please enter natural number"),
            Some(n) => return n,
        }
    }
}
