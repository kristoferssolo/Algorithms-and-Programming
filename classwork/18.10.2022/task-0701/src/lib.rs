pub fn get_number_lenght(number: f64) -> i64 {
    if number == 0.0 {
        return 1;
    }
    number.abs().log10().floor() as i64 + 1
}
