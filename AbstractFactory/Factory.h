/**
 * @file Factory.h
 * @author JumHorn (JumHorn@gamil.com)
 * @brief
 * @version 0.1
 * @date 2020-12-02
 *
 * @copyright Copyright (c) 2020
 *
 */

#ifndef _FACTORY_H_
#define _FACTORY_H_

#include <string>
using std::string;

class Shape;
class Color;

class Factory
{
public:
	virtual Shape *getShape(const string &type) = 0;
	virtual Color *getColor(const string &type) = 0;
};

#endif