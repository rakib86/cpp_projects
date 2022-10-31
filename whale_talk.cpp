#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
  //code
  string txt = "turpentine and turtles";
  
  vector<char> vowels = {'a', 'e', 'i', 'o', 'u'};
  string result;

  for ( int i = 0; i < txt.size(); i++){

    for ( int j = 0; j < vowels.size(); j++){

      if ( txt[i] == vowels[j]){
        result.push_back(txt[i]);
        if ( txt[i] == 'e' || txt[i] == 'u'){

          result.push_back(txt[i]);
        }
      }
    }

  


  }


for ( int k = 0; k < result.size(); k++){
    cout<<result[k];
  }


}