fn largest_element(arr: &[i32]) -> Option<i32> {
    if arr.is_empty() {
        None
    } else {
        let mut largest = arr[0];
        for &item in arr.iter() {
            if item > largest {
                largest = item;
            }
        }
        Some(largest)
    }
}

fn main() {
    let arr: [i32; 6] = [5, 2, 6, 3, 7, 4];
    match largest_element(&arr) {
        Some(largest) => println!("The largest element in the array: {}", largest),
        None => println!("The array is empty."),
    }
}
