/*	https://www.learncpp.com/cpp-tutorial/public-and-private-members-and-access-specifiers/
*	Quiz time answers
* 
*	Points to learn about in this file:
*	- Constructor override
*	- Constructor with aggregate initializing of private data members
*	- Even though the data members are private, notice how they can be accessed 
*		by other instances of the same class
*/

#include <iostream>

class Point3d 
{
public:
	Point3d(int x, int y, int z) : m_x{ x }, m_y{ y }, m_z{ z } {}
	Point3d() {}

	void setValues(int x, int y, int z) 
	{
		m_x = x;
		m_y = y;
		m_z = z;
	}
	void print() const
	{
		std::cout << "<" << m_x << ", " << m_y << ", " << m_z << ">";
	}

	bool isEqual(const Point3d& other)
	{
		return m_x == other.m_x 
			&& m_y == other.m_y 
			&& m_z == other.m_z;
	}

	//	extra:
	void setOtherToOrigin(Point3d& other)
	{
		other.m_x = 0;
		other.m_y = 0;
		other.m_z = 0;
	}

private:
	int 
		m_x { 0 }, 
		m_y { 0 }, 
		m_z { 0 };
};

int main()
{
	std::cout << "Hello CMake." << std::endl;
	
	//	a)
	Point3d point;
	point.setValues(1, 2, 3);

	point.print();
	std::cout << '\n';

	//	b)
	Point3d point1{};
	point1.setValues(1, 2, 3);

	Point3d point2{};
	point2.setValues(1, 2, 3);

	std::cout << "point 1 and point 2 are" << (point1.isEqual(point2) ? "" : " not") << " equal\n";

	Point3d point3{};
	point3.setValues(3, 4, 5);

	std::cout << "point 1 and point 3 are" << (point1.isEqual(point3) ? "" : " not") << " equal\n";

	//	extra
	//	From a pratical standpoint, this does not make sense.
	//	From a learning standpoint, notice how, even though data members are private,
	//		this instance can change values of another instance of the same class.
	point2.setOtherToOrigin(point3);
	point3.print();

	return 0;
}
