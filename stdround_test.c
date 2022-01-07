#include <math.h>

int foo(int i)
{
    return i;
}

int main() {
    int undefined = foo(undefined);
    return undefined;
};
