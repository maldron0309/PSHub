use std::io;

fn main() {
    let mut input = String::new();
    let stdin = io::stdin();

    stdin.read_line(&mut input).unwrap();
    let a: i32 = input.trim().parse().unwrap();

    input.clear();
    stdin.read_line(&mut input).unwrap();
    let b: i32 = input.trim().parse().unwrap();

    println!("{}", a + b);
}
