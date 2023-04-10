#include <iostream>

int main ()
{
	int num = 0;
	int node;
	std::cout << "Enter count of nodes: " << std::endl;
	std::cin >> node;
	int** arr = new int* [node];
	std::cout << "Please enter weight of (u,v) edge " << std::endl;
	for (int i = 0; i < node; ++i)
	{
		arr[i] = new int [node];
		for (int j = 0; j < node; ++j)
		{
			std::cout << "Weight of (" << i << ", " << j << ") edge:" << std::endl;
			std::cin >> num;
			arr[i][j] = num;		
		}
	}
	
	std::cout << "Index :";	

	for (int i = 0; i < node; ++i)
        {
                std::cout <<  "[" << i << "] | ";
	}

	std::cout << std::endl;
	for (int a = 0; a < node; ++a)
	{
		std::cout << "________";
		if (a == node - 1)
			std::cout << std::endl;
	
	}
	for (int i = 0; i < node; ++i)
	{
		std::cout << "[" << i << "]    ";
		for (int j = 0; j < node; ++j)
		{
			std::cout << "(" << arr[i][j] << ") | " ;
		}

		std::cout << std::endl;
		for (int a = 0; a < node; ++a)
        	{
                	std::cout << "________";
                	if (a == node - 1)
                	        std::cout << std::endl;

        	}

	}
	
	for (int i = 0; i < node; ++i)
	{
		delete[] arr[i];
	}

	delete[] arr;

}
