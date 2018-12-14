#include <iostream>

using namespace std;

class Triangle
{
private:
    int width;
public:
    Triangle(int w);
    int get_area() const;
};

Triangle::Triangle(int w)
{
    width = w;
}

int Triangle::get_area() const
{
    if (width <= 0)
    {
        return 0;
    }
    if (width == 1)
    {
        return 1;
    }
    Triangle smaller_triangle(width - 1);
    int smaller_area = smaller_triangle.get_area();
    return smaller_area + width;
}

int main()
{
    Triangle t(4);
    cout << "Area: " << t.get_area() << "\n";
    return 0;
}
