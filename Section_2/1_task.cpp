unsigned gcd(int a, int b) {
    if (b == 0) return a;
    int i = a % b;
    return gcd(b, i);

}