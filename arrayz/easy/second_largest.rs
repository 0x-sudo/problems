fn second_largest(arr: &[i32]) -> Option<i32> {
    if arr.is_empty() {
        None
    } else {
        let mut largest = arr[0];
        let mut second_largest = arr[0];
        for &item in arr {
            if item > largest {
                second_largest = largest;
                largest = item;
            } else if item > second_largest && item != largest {
                second_largest = item;
            }
        }
        Some(second_largest)
    }
}

fn main() {
    let arr: [i32; 7] = [5, 2, 6, 3, 7, 4, 7];
    match second_largest(&arr) {
        Some(el) => println!("Second largest element is: {}", el),
        None => println!("The array is empty"),
    }
}
