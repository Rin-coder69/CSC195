#pragma once
#include <iostream>
namespace math {
	template<typename T>
	class Point {
	public:
		Point() = default;
		Point(T x, T y) : m_x(x), m_y(y) {}

		Point<T> operator + (const Point<T>& other)const
		{
			 return Point<T>(m_x + other.m_x, m_y + other.m_y);
		}

		Point<T> operator - (const Point<T>& other)const
		{
			Point<T>(m_x - other.m_x, m_y - other.m_y);
		}
		bool operator == (const Point<T>& other)const
		{
			return (m_x == other.m_x && this->m_y == other.m_x);
		}

		bool operator != (const Point<T>& other)const
		{
			return !(*this == other);
		}
		bool operator < (const Point<T>& other)const
		{
			return (m_x < other.m_x && m_y < other.m_y);
		}
		bool operator > (const Point<T>& other)const
		{
			return (m_x > other.m_x && m_y > other.m_y);
		}
		bool operator <= (const Point<T>& other)const
		{
			return (m_x <= other.m_x && m_y <= other.m_y);
		}
		bool operator >= (const Point<T>& other)const
		{
			return (m_x >= other.m_x && m_y >= other.m_y);
		}
		
		template<typename U>
		friend std::ostream& operator << (std::ostream& ostream, const Point<T>& point)
		{
			ostream << point.m_x << " " << point.m_y;
			return ostream;
		}

		friend std::istream& operator >> (std::istream& istream, Point<T>& point)
		{
			istream >> point.m_x >> point.m_y;
			return istream;
		}

		T getX() const { return m_x; }
		T getY() const { return m_y; }


		Point<T> Add(const Point<T>& other)const
		{
			Point<T>(m_x + other.m_x, m_y + other.m_y);
		}
		

	private:
		T m_x = 0;
		T m_y = 0;
	};
	using ipoint = Point<int>;
	using ipoint_t = Point<float>;
}