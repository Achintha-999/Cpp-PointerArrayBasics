#include <iostream>
using namespace std;

int* nums(){

int static numbers[3];
for (int i = 0; i < 3; i++)
{
   cin>>numbers[i];
}
return numbers; 

}

int main(){

   int *p = nums();
   cout<<p[0];

    return 0;
}
