use std::io;

fn main() {
    let mut input = String::new();

    io::stdin().read_line(&mut input).unwrap();

    let score: i32 = input.trim().parse().unwrap();

    if score >= 90 && score <= 100 {
        print!("A");
    } else if score >= 80 {
        print!("B");
    } else if score >= 70 {
        print!("C");
    } else if score >= 60 {
        print!("D");
    } else {
        print!("F");
    }
}
