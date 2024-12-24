use std::io;

fn main() {
    let mut buffer = String::new();

    io::stdin().read_line(&mut buffer).unwrap();
    let value1: i32 = buffer.trim().parse().unwrap();

    buffer.clear();
    io::stdin().read_line(&mut buffer).unwrap();
    let value2: i32 = buffer.trim().parse().unwrap();

    if value1 > 0 && value2 > 0 {
        println!("1");
    } else if value1 < 0 && value2 > 0 {
        println!("2");
    } else if value1 < 0 && value2 < 0 {
        println!("3");
    } else if value1 > 0 && value2 < 0 {
        println!("4");
    }
}
