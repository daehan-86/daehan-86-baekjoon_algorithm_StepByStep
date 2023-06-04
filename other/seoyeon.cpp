/*
#include <iostream>
#include <limits>

int main(){
	const int int_max = std::numeric_limits<int>::max();
	const int int_min = std::numeric_limits<int>::min();
	const std::string waypoint[4] = {"Gyeongsan", "Gimcheon", "Cheongju", "Anseong"};
	const double waypoint_distance[4] = {100, 200, 300, 400};

	double capacity, consumption, amount, distance;
	std::cin >> capacity >> consumption >> amount >> distance;

	double way=0, percentage=amount, remaining = capacity / 100 * amount;
	while(way < distance){
		int previous = percentage/10;
		remaining--;
		way += consumption;
		percentage = remaining / capacity * 100;
		int current = percentage/10;
		printf("%lf %lf\n",way,percentage);
		if(current < previous)
			if (current != 1) std::cout << current * 10 << '%' << std::endl;
		if(percentage < 21){
			for(int i=0; i<4; i++) {
				if (abs(waypoint_distance[i]-way) <= 50) {
					std::cout << "add waypoint " << waypoint[i] << " - 20%" << std::endl;
					break;
				}
			}
			remaining = capacity / 100 * 80;
			percentage = 80;
		}
	}
	std::cout << "arrival! - " << (int)percentage << '%';
}
*/

/*
목적
클래스의 operator overloading 을 연습해 봅니다.
문제
주어진 테스트 케이스가 정상적으로 동작하도록 행렬 타입의 matrix 클래스를 구현하시오.
<참고>
// MatrixTest.cpp
#include <iostream>
//#include "Matrix.h"
using namespace std;

class matrix {
public:
// 생성자, 복사생성자
// 연산자 오버로딩
// 멤버 함수들
	matrix(initializer_list<initializer_list<int>> a){
		row=a.size();
		col=(*a.begin()).size();
		data=new int*[row];
		for(int i=0;i<row;i++) data[i]=new int[col];
		int r=0,c;
		for(auto i = a.begin();i!=a.end();i++){
			c=0;
			for(auto j=(*i).begin();j!=(*i).end();j++){
				data[r][c]=*j;
				c++;
			}
			r++;
		}
	}
private:
	int** data = nullptr;
	size_t row = 0;
	size_t col = 0;
};
void print_matrix(string name, matrix m){
	//cout << name << endl;
	//cout << m << endl;
}
int main(){
	matrix m1 = {{4, 1}, {-7, -3}} ;
	matrix m2 = {{1, 1}, {0, 0}} ;

	matrix m3 (m1 + m2);
	matrix m4 = m3;
	print_matrix("m3", m3);
	print_matrix("m4", m4);
	print_matrix("m4.inverse", m4.inverse());

	matrix m5 = {{}};
	print_matrix("m5", m5);
	print_matrix("m5.inverse", m5.inverse());

	matrix m6(m5);
	print_matrix("m6", m6);
	print_matrix("m6.inverse", m6.inverse());

	matrix m7 = m4.inverse();
	m7 = m7 + matrix( {{-2, -3}, {7, 7}});

	print_matrix("m4", m4);
	print_matrix("m4.inverse", m4.inverse());

	print_matrix("m7", m7);
	print_matrix("m7.inverse", m7.inverse());
}
// Matrix.h
*/
/*
입력

없음

출력


m3

| 5 2 |

| -7 -3 |



m4

| 5 2 |

| -7 -3 |



m4.inverse

| 3 2 |

| -7 -5 |



m5

| |



m5.inverse

| |



m6

| |



m6.inverse

| |



m4

| 5 2 |

| -7 -3 |



m4.inverse

| 3 2 |

| -7 -5 |



m7

| 3 2 |

| 1 5 |



m7.inverse

| 1 -1 |

| 0 2 |


제출파일

Matrix.cpp

Matrix.h

p71.csv
*/

#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>

struct Item{
std::string name;
double price;
int quantity;
};

int main(){
	std::vector<Item> inventory={
		{"Apple", 0.99, 10},
		{"Banana", 0.59, 20},
		{"Cherry", 1.49, 5},
		{"Dates", 2.99, 2},
		{"Elderberry", 3.99, 0},
		{"Fig", 2.49, 15},
		{"Grape", 0.79, 25},
		{"Honeydew", 1.29, 8},
		{"Indian Gooseberry", 2.99, 0},
		{"Jackfruit", 4.99, 1}
	};
	
	std::sort(inventory.begin(), inventory.end(), [](auto a, auto b){return a.price < b.price;});
	auto print_item = [](auto t){std::cout<<t.name<<" "<<t.price<<" "<<t.quantity<<std::endl;};
	std::for_each(inventory.begin(), inventory.end(), print_item);
	
	auto item = std::find_if(inventory.begin(), inventory.end(), [](auto t){return t.name == "Grape";});
	std::cout << "Item found: " << item->name << " " << item->price << " " << item->quantity << std::endl;
	
	auto count = std::count_if(inventory.begin(), inventory.end(), [](auto t){return t.price > 2;});
	std::cout << "Number of expensive items: " << count << std::endl;
	
	inventory.erase(std::remove_if(inventory.begin(), inventory.end(), [](auto t){return t.quantity == 0;}), inventory.end());
	std::for_each(inventory.begin(), inventory.end(), print_item);
	return 0;
}