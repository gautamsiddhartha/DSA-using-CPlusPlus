#include<iostream>
using namespace std;

int AreaCircle(int r){
  int area;
  area = 3.14 * r * r;
  return area;
}

int main(){
  int r;
  cout<<"ENTER THE RADIUS OF CIRCLE - ";
  cin>>r;

  int area = AreaCircle(r);
  cout<<(area);
}