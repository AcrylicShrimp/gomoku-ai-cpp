
#include <iostream>
#include <torch/torch.h>

int main()
{
	torch::Tensor tensor = torch::eye(10);
	std::cout << tensor << std::endl;

	return 0;
}