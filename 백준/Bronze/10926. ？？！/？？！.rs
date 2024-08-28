use std::io;

fn main() {
    let mut input = String::new();
    
    io::stdin().read_line(&mut input).unwrap();

    let trimmed_input = input.trim();

    print!("{}??!",  trimmed_input);

}
