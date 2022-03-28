//不做 p256-7 p259-
//p256-6 8（不交，目测读结果） 9（初学者易犯错误） 10

//继承与派生 继承意味着派生，派生就必须继承
//多态：称呼相同，内涵不同

#include <iostream>
#include <cstring>

using namespace std;

class A {
	//private:
	int x;
	int y;
public:
	A(int x = 0, int y = 0) {
		this->x = x;
		this->y = y;
	}
};

//B派生于A,此时B叫派生类（子类）,A也叫基类（父类）
//构造子类之前必须先构造父类
class B : public A {
public:
	B() {};
};

int main() {
	B b;
	return 0;
}
