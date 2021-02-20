
typedef int (*operation_ptr)(int, int);

int add(int a, int b) {
    return a + b;
}

int multiply(int a, int b) {
    return a * b;
}

int do_operation(operation_ptr op, int x, int y) {
    return op(x, y);
}

int main() {
    do_operation(add, 1, 2);
    do_operation(multiply, 2, 4);
    return 0;
}
