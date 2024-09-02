use std::io;

fn main() {
    let mut input = String::new();
    
    io::stdin().read_line(&mut input).unwrap();
    let a: i32 = input.trim().parse().unwrap();

    input.clear(); 

    io::stdin().read_line(&mut input).unwrap();
    let b: i32 = input.trim().parse().unwrap();

    let b1 = b % 10;     
    let b2 = (b / 10) % 10;
    let b3 = b / 100;      
    
    println!("{}", a * b1);
    println!("{}", a * b2);
    println!("{}", a * b3);
    println!("{}", a * b);
}
