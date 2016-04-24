#ifndef STACKTEMPLATE_H
#define STACKTEMPLATE_H

template<class T>
class StackTemplate{
	enum{
		Ssize = 100
	};
	T stack[Ssize];
	int top;
public:
	StackTemplate() : top(0){}

	void push(const T& i){
		stack[top++] = i;
	}
	T pop(){
		return stack[--top];
	}
	int size(){
		return top;
	}
};

#endif