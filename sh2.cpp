#include <iostream>
#include <string>
#include <vector>

template < typename T1 , typename T2 , typename T3 >

struct Triple{
	T1 first;
	T2 second;
	T3 third;

};

int main (){
	Triple < int , int , int > point{-1 , 3 , 2};
	Triple < std::string , std::string , int> wordPairsfreq{"Hello" , "world" , 42};
	
	return 0 ;

}
 
