#include <iostream>


int main()
{
	
	int number, sum{0};
	std::cout<<"A number is said to be PERFECT if only it's proper factors sum up to the number itself."<<std::endl <<std::endl;
	
	
	std::cout<<"Enter A Number To Check\nIf It Is A Perfect Number Or Not" <<std::endl;
	std::cin>>number;
	
	
	for(int i=1; i<number; i++){
	    if(number % i == 0){
	    sum += i;
	    }
	}
	
	
	 if(sum == number){
	 	std::cout<<number<<" Is A Perfect Number."<<std::endl;
	 }
	 else{
	 	std::cout<<number<<" Is Not A Perfect Number."<<std::endl;
	 }
	
	
	return 0;
	
}