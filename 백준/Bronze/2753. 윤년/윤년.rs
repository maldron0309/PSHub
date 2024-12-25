use std::io;

fn main() {
    let mut input1 = String::new();

    io::stdin().read_line(&mut input1).unwrap();

    let value1: i32 = input1.trim().parse().unwrap();

    if (value1 % 4 == 0 && value1 % 100 != 0) || (value1 % 400 == 0) {
        print!("1");
    }
    else {
        print!("0");
    }
}
