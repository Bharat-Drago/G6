#include<iostream>
using namespace std;
void fun(int n){
	if(n==0){
		return ;
	}
	
	fun(n-1);
	cout<<n<<endl;
}
int main(){
	int n=10;
	fun(10);
	cout<<"well done";
	return 0;
}