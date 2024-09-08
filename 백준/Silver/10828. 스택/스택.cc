#include <iostream>
#include <stack>
#include <string>

void push(std::stack<int>& stack, int num)
{
	stack.push(num);
}

void pop(std::stack<int>& stack)
{
	if (stack.empty()) std::cout << -1 << '\n';
	else
	{
		std::cout << stack.top() << '\n';
		stack.pop();
	}
}

void size(const std::stack<int>& stack)
{
	std::cout << stack.size() << '\n';
}

void empty(const std::stack<int>& stack)
{
	if (stack.empty()) std::cout << 1 << '\n';
	else std::cout << 0 << '\n';
}

void top(const std::stack<int>& stack)
{
	if (stack.empty()) std::cout << -1 << '\n';
	else std::cout << stack.top() << '\n';
}


int main()
{
	int n{};
	std::cin >> n;

	std::string command;
	std::stack<int> stack;

	for (int i = 0; i < n; i++)
	{
		std::cin >> command;

		if (command == "push")
		{
			int num{};
			std::cin >> num;

			push(stack, num);
		}

		else if (command == "pop") pop(stack);
		else if (command == "size") size(stack);
		else if (command == "empty") empty(stack);
		else if (command == "top") top(stack);
	}

	return 0;
}
