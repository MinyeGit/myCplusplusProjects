
#include<iostream>
#include<algorithm>

using namespace std;


int main()
{
	const int size=5;
	double nums[size];
	double userInput;
	double sum=0.0;
	double average=0.0;
	double largest=0.0;
	double smallest=0.0;

	std::cout << "Please enter 5 numbers" << std::endl;

	
	for (int i=0; i<5; i++)
	{
		std::cout << "Input a number into your array: " << std::endl;
		std::cin >> userInput;
		nums[i] = userInput;
	}
	largest = nums[0];
	smallest = nums[0];
	std::cout << "Here are all the numbers in your array: " << std::endl;
	sort(nums, nums + size);
	for (int j=0; j<5; j++)
	{
		std::cout << nums[j] << std::endl;
	}
	for (int k=0; k<5; k++)
	{
		sum = nums[k] + sum;
		average = sum / (k+1);
	}
	for (int m=1; m<5; m++)
	{
		if (nums[m] >= largest)
		{
		largest = nums[m];
		}
		else if (nums[m] <= smallest)
		{
		smallest = nums[m];
		}
	}
	std::cout << "The sum of all the values is: " << sum << std::endl;
	std::cout << "The average of all the values is: " << average << std::endl;
	std::cout << "The largest value is : " << largest << std::endl;
	std::cout << "The smallest value is : " << smallest << std::endl;
	
	return(0);
}
		























