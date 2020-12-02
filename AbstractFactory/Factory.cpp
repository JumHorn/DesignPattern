/**
 * @file AbstractFactory.cpp
 * @author JumHorn (JumHorn@gamil.com)
 * @brief 演示抽象工厂模式
 * @version 0.1
 * @date 2020-12-02
 *
 * @copyright Copyright (c) 2020
 *
 */

#include "ColorFactory.h"
#include "ShapeFactory.h"

class FactroyProducer
{
public:
	/**
	 * @brief 这里可以使用反射,减少每次添加新的shape类型而修改代码
	 *
	 * @return Shape&
	 */
	Factory *getFactory(const string &type)
	{
		if (type == "shape")
			return new ShapeFactory();
		if (type == "color")
			return new ColorFactory();
		//not exist
		return nullptr;
	}
};

int main()
{
	auto producer = new FactroyProducer();
	auto factory = producer->getFactory("shape");
	auto shape = factory->getShape("circle");
	shape->draw();
}