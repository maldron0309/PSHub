use std::io::{self, Read};

fn main() {
    let mut input = String::new();
    io::stdin().read_to_string(&mut input).unwrap();

    let values:Vec<i32> = input.split_whitespace().map(|x| x.parse().unwrap()).collect();
    
    let a = values[0];
    let b = values[1];

    if a > b {
        println!(">");
    }
    else if a < b {
        println!("<");
    }
    else {
        println!("==");
    }
}
