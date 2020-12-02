/**
 * @file ColorFactory.cpp
 * @author JumHorn (JumHorn@gamil.com)
 * @brief
 * @version 0.1
 * @date 2020-12-02
 *
 * @copyright Copyright (c) 2020
 *
 */

#include <iostream>
using std::cout;
using std::endl;

#include "ColorFactory.h"

class Red : public Color
{
public:
	void fill()
	{
		cout << "Red" << endl;
	}
};

class Blue : public Color
{
public:
	void fill()
	{
		cout << "Blue" << endl;
	}
};

class Green : public Color
{
public:
	void fill()
	{
		cout << "Green" << endl;
	}
};

/**
 * @brief 这里可以使用反射,减少每次添加新的Color类型而修改代码
 *
 * @return Color*
 */
Color *ColorFactory::getColor(const string &type)
{
	if (type == "red")
		return new Red();
	if (type == "blue")
		return new Blue();
	if (type == "green")
		return new Green();
	//not exist
	return nullptr;
}