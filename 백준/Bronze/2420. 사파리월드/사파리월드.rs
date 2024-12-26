use std::io;

fn main() {
    let mut input = String::new();

    io::stdin().read_line(&mut input).unwrap();

    let values: Vec<i64> = input
        .as_mut_str()
        .split_whitespace()
        .map(|x| {x.parse().unwrap()})
        .collect();

    let n = values[0];
    let m = values[1];

    let result = (n - m).abs();
    println!("{}", result);
}
