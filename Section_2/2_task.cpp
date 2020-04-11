int foo(int n) {
    if (n <= 0)
        return 1;
    return foo((n * 2) / 3) + foo(n - 2);
}

//answer ---- 9