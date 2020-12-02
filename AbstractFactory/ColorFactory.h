/**
 * @file ColorFactory.h
 * @author JumHorn (JumHorn@gamil.com)
 * @brief
 * @version 0.1
 * @date 2020-12-02
 *
 * @copyright Copyright (c) 2020
 *
 */

#ifndef _COLOR_FACTORY_H_
#define _COLOR_FACTORY_H_

#include <string>
using std::string;
#include "Factory.h"

class Shape;

class Color
{
public:
	/**
	 * @brief abstract class
	 *
	 */
	virtual void fill() = 0;
};

class ColorFactory : public Factory
{
public:
	/**
	 * @brief 这里可以使用反射,减少每次添加新的color类型而修改代码
	 *
	 * @return color*
	 */
	Color *getColor(const string &type);

	Shape *getShape(const string &type)
	{
		return nullptr;
	}
};

#endif