#include <stdio.h>

struct Animal {
    int age;
};

struct Dog {
    struct Animal a;
    int color;
};

int main() {
    struct Dog d;

    d.a.age = 3;
    d.color = 1;

    printf("Dog age: %d\n", d.a.age);
    printf("Dog color code: %d\n", d.color);

    return 0;
}
