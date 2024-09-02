use std::io;

fn main() {
    let mut input = String::new();
    
    io::stdin().read_line(&mut input).unwrap();

    let values: Vec<i64> = input
        .trim()
        .split_whitespace()
        .map(|input| input.parse().unwrap())
        .collect();

    let (a,b, c) = (values[0], values[1], values[2]);

    println!("{}", (a + b + c));
}
