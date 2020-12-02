/**
 * @file ShapeFactory.h
 * @author JumHorn (JumHorn@gamil.com)
 * @brief
 * @version 0.1
 * @date 2020-12-02
 *
 * @copyright Copyright (c) 2020
 *
 */

#ifndef _SHAPE_FACTORY_H_
#define _SHAPE_FACTORY_H_

#include <string>
using std::string;
#include "Factory.h"

class Color;

class Shape
{
public:
	/**
	 * @brief abstract class
	 *
	 */
	virtual void draw() = 0;
};

class ShapeFactory : public Factory
{
public:
	/**
	 * @brief 这里可以使用反射,减少每次添加新的shape类型而修改代码
	 *
	 * @return Shape&
	 */
	Shape *getShape(const string &type);

	Color *getColor(const string &type)
	{
		return nullptr;
	}
};

#endif