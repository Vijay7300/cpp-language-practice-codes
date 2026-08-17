#include<iostream>
using namespace std;
struct student{
	int age;
	float weight;
};
int main(){
	struct student *p,s={12,54};
	p=&s;
	cout<<"age:"<<(*p).age<<"\n";  // (*p). & p->  both are same roleplay  //
	cout<<"weight:"<<p->weight<<"\n";
	return 0;
}
