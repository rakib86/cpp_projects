
#include <iostream>
#include <vector>
#include <bitset>

using namespace std;
/*bool palindrome(string str[]){
    int f = 0;
    int l = strlen(str) - 1;

}*/

bool is_palindrome(string str) 
{ 
    int n = str.length(); 
    for (int i = 0; i < n/2; i++) 
        if (str[i] != str[n-i-1]) 
            return true; 
    return false; 
}



int main()
{
    int n;
    
    cin>>n;
    bitset<8> b1(n);
    string str = b1.to_string();
    is_palindrome(str) && n%2 != 0 ?cout<<"YES":cout<<"NO";
    /*if ( is_palindrome(str) && n % 2 != 0){
        cout<<"YES";
    }else{
        cout<<"NO";
    }*/
    return 0;
}