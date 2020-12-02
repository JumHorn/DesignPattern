/**
 * @file Singleton.cpp
 * @author JumHorn (JumHorn@gamil.com)
 * @brief
 * @version 0.1
 * @date 2020-12-02
 *
 * @copyright Copyright (c) 2020
 *
 */

#include <mutex>
using namespace std;

/*
线程安全单例
double check(双重加锁)
单例创建成功后，第一个null判断可以提高效率，后面的线程不会在有锁
多个线程同时进入第一个null判断后，需要加锁值允许一个线程创建单例
*/

template <typename T>
class SingletonBase
{
	friend T; //for derived class T to call private destructor

public:
	static T *getInstance()
	{
		if (instance == nullptr)
		{
			//use unique_lock and scope_lock instead of lock_guard
			unique_lock<mutex> lock(m_mutex);
			if (instance == nullptr)
				instance = new T();
		}
		return instance;
	}

private:
	SingletonBase() {}
	virtual ~SingletonBase() {}
	SingletonBase &operator=(const SingletonBase &t) = delete;
	SingletonBase(const SingletonBase &) = delete;

	inline static T *instance = nullptr; //c++17
	inline static mutex m_mutex;
};

// C++ 17 before
// template <typename T>
// T *SingletonBase<T>::instance = nullptr;