#include<iostream>
#include<string>

struct Vector
{
	float x, y;

	Vector(float x,float y):x(x),y(y){}
};

std::ostream& operator<<(std::ostream& stream, const Vector& obj) {
	stream << "x:" << obj.x << ", " << "y:" << obj.y << std::endl;
	return stream;
}

//int main() {
//	Vector v1(1.1f, 2.2f);
//	Vector v2(1.1f, 2.2f);
//	std::cout << v1 << std::endl;
//	return 0;
//}


