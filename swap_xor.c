swap(int a, int b)
{
    // For example:
    // int a = 5, b = 7;
    // printf("%d, %d\n". a, b);
    // Output: 5, 7
    b = b ^ a;
    a = a ^ b;
    b = b ^ a;
    // printf("%d, %d\n", a, b);
    // Output: 7, 5
}
