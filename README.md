# 设计模式原则(SOLID)

## 单一职责原则(Single Responsibility Principle)
> There should never be more than one reason for a class to change.

linux原则之一do one thing do it well

## 开闭原则(Open Closed Principle)

> Software entities like classes, modules and functions should be open for extension but closed for modification

对扩展开放，对修改关闭
## 里氏替换原则(Liskov Substitution Principle)
> Functions that use use pointers or references to base classes must be able to use objects of derived classes without knowing it.

所有引用基类的地方必须能透明地使用其子类的对象

## 接口隔离原则(Interface Segregation Principle)
>Clients should not be forced to depend upon interfaces that they don`t use.
The dependency of one class to another one should depend on the smallest possible.

1. 客户端不应该依赖它不需要的接口
2. 类间的依赖关系应该建立在最小的接口上

## 依赖倒置原则(Dependence Inversion Principle)

> High level modules should not depend upon low level modules. Both should depend upon abstractions.
Abstractions should not depend upon details. Details should depend upon abstractions.

1. 上层模块不应该依赖底层模块，它们都应该依赖于抽象
2. 抽象不应该依赖于细节，细节应该依赖于抽象

# 设计模式

## 单例模式(Singleton Pattern)
## 工厂模式(Factory Pattern)
## 抽象工厂模式(Abstract Factory Pattern)
## 观察者模式(Observer Pattern)