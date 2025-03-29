int printPrimesInRange(int a, int b) {
    for(int i = a; i < b; i++) {
        if(a % i == 0 && b % i == 0) {
            return "No prime numbers";
        }
    }
}