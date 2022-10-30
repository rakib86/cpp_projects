#include <iostream>

using namespace std;

//main code starts from here

int main(){
    //code

    for (int i = 1; i <= 100; i++){
        
        if ( i % 3 == 0){
            cout<<"Fizz\n";
        }else if ( i % 5 == 0){
            cout<<"Buzz\n";
        }else{
            cout<<i<<"\n";
        }
    }
}