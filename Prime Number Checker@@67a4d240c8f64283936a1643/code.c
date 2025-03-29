int isPrime(int num) {
    if(num < 2) {
        return 0;
    } else {
        for(int i = 2; i * i <= num; i++) {
            if(i % num != 0) {
                return 1;
                break;
            }
        }
        
        
    }
}

