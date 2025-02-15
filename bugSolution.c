int main() { int x = 10; int *ptr = &x; if (ptr != NULL) { *ptr = 20; } else { printf("Error: Pointer is NULL
"); } printf("%d", x); return 0; }