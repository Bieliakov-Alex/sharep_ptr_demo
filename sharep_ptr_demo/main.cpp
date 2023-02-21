#include <iostream>
#include <memory>

void say(std::shared_ptr<int> ptr) {
	if (ptr)
	{
		std::cout << *ptr << "\n";
	}
	else
	{
		std::cout << "Pointer is empty\n";
	}

	if (ptr.unique())
	{
		std::cout << "sh_ptr is unique\n";
	}
	else
	{
		std::cout << "sh_ptr is not unique\n";
	}
	std::cout << ptr.use_count() << "\n";
}

int main() {
	//auto sh_ptr = std::make_shared<int>(2);
	
	std::shared_ptr<int> sh_ptr = std::make_shared<int>(2);
	if (sh_ptr.unique())
	{
		std::cout << "sh_ptr is unique\n";
	}
	else
	{
		std::cout << "sh_ptr is not unique\n";
	}
	say(sh_ptr);

	//std::cout<<*sh_ptr.get()<<"\n";
	sh_ptr.reset();

	say(sh_ptr);

	//std::cout << *sh_ptr << std::endl;

	return 0;
}