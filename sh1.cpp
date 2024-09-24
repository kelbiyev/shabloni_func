#include <iostream>
#include <string>
#include <vector>
template <typename T>
T Max(const T& x , const T& y){
	if(x > y)
		return x;
	else
		return y;
}
template <typename T>
const std::vector<T>& Max(const std::vector<T>& v1 , const std::vector<T>& v2){

	if(v1.size() > v2.size()){
		return v1;
	}
	else if(v1.size() < v2.size()){
		return v2;
	}
	else if(v1 > v2){
		return 12;
	}
	else {
		return v2;
	}

}

int main(){
	std::cout<< Max(1,2) <<"\n";
	std::vector<int> v1 = {1, 2 ,3};
	std::vector<int> v2 = {4, 5};
	
	for(const int& x: Max(v1,v2)){
		std::cout<<x<<" ";
	}
	std::cout<<"\n";
	return 0 ;

}

