#include <iostream>
#include <string>

struct Vector2 {
    float x, y;
};

int main()
{
    /*
     * copy of a assigned to b
     * both variable a,b have different memory addresses
     * if a changes, b will remain the same, because values are copied.
     */
    int a = 2;
    int b = a;  // copy

    std::cout << "a=" << a << " b=" << b << '\n';

    b = 3;
    std::cout << "a=" << a << " b=" << b << '\n';

    a = 4;
    std::cout << "a=" << a << " b=" << b << '\n';

/* for classes also it works the same way
 */

    Vector2 p = { 2, 3 };
    Vector2 q = p;

    std::cout << "p.x=" << p.x << " p.y=" << p.y << '\n';
    std::cout << "q.x=" << q.x << " q.y=" << q.y << '\n';

    p = { 6, 9 };
    std::cout << "p.x=" << p.x << " p.y=" << p.y << '\n';
    std::cout << "q.x=" << q.x << " q.y=" << q.y << '\n';

    q = { 7, 8 };
    std::cout << "p.x=" << p.x << " p.y=" << p.y << '\n';
    std::cout << "q.x=" << q.x << " q.y=" << q.y << '\n';

    /* r1 is now a pointer
     * copying the pointers and not the actual value
     */
    Vector2* r1 = new Vector2();
    Vector2* r2 = r1;

}
