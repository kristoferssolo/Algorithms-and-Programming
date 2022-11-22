// use std::io::stdin;

fn main() {
    let mut numbers = vec![44, 54, 88, 39, 45, 64, 81, 28, 25, 50];
    make_ascending(&mut numbers);
    println!("{:?}", numbers);
}

// let mut some_vec = vec![0, 10, 20, 30];
//     some_vec.retain(|value| *value != 10);

fn make_ascending(numbers: &mut Vec<i32>) {
    let previous_number: &i32 = &mut numbers[0];
    for number in &mut numbers {
        if number < previous_number {}
        previous_number = number;
    }
}

// fn get_input() -> i32 {
//     println!("Enter number: ");
//     loop {
//         // Empty new string
//         let mut line = String::new();
//         // Reading the input
//         let input = stdin().read_line(&mut line);
//         let number: Option<i32> = input.ok().and_then(|_| line.trim().parse().ok());
//         match number {
//             None => println!("Enter number: "),
//             Some(n) if n > 2 && n % 2 == 0 => return n,
//             Some(_) => {
//                 println!("Please enter number that is even and greater than 2")
//             }
//         }
//     }
// }
