use std::io;

fn main() {
    let mut input = String::new();

    io::stdin().read_line(&mut input).unwrap();

    let value: Vec<i32> = input
        .as_mut_str()
        .split_whitespace()
        .map(|input| input.parse().unwrap())
        .collect();

    println!("{}", value[0] + value[1]);
    println!("{}", value[0] - value[1]);
    println!("{}", value[0] * value[1]);
    println!("{}", value[0] / value[1]);
    println!("{}", value[0] % value[1]);
}
