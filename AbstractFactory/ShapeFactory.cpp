/**
 * @file factory.cpp
 * @author JumHorn (JumHorn@gamil.com)
 * @brief 演示工厂模式
 * @version 0.1
 * @date 2020-12-02
 *
 * @copyright Copyright (c) 2020
 *
 */

#include <iostream>
using std::cout;
using std::endl;

#include "ShapeFactory.h"

class Rectangle : public Shape
{
public:
	void draw()
	{
		cout << "Rectangle" << endl;
	}
};

class Triangle : public Shape
{
public:
	void draw()
	{
		cout << "Triangle" << endl;
	}
};

class Circle : public Shape
{
public:
	void draw()
	{
		cout << "circle" << endl;
	}
};

/**
 * @brief 这里可以使用反射,减少每次添加新的shape类型而修改代码
 *
 * @return Shape*
 */
Shape *ShapeFactory::getShape(const string &type)
{
	if (type == "rectangle")
		return new Rectangle();
	if (type == "triangle")
		return new Triangle();
	if (type == "circle")
		return new Circle();
	//not exist
	return nullptr;
}