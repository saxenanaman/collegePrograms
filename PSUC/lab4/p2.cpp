#include <iostream>

int main()
{
	int size;
	std::cout<<"Enter the height of triangle: ";
	std::cin>>size;
	for(int i=0;i<size;i++)
	{
		for(int j=0;j<(size-i-1);j++)
			std::cout<<" ";
		for(int k=0;k<(2*i+1);k++)
			std::cout<<"*";
		std::cout<<std::endl;
	}
	return 0;
}
