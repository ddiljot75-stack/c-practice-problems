#include<iostream>
using namespace std;

int main(){
  int nums[]={2,3,1,14,16,100};
  int size=6;
  int sum=0;

  for(int i=0;i<size;i++){
     sum=sum+nums[i];

  }
  cout<<"sum = "<< sum<<endl;



  return 0;
}