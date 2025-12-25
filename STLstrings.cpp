#include<bits/c++.std>

using namespcae std;
int main(){

  //to traverse a string sentence word by word
 string s = "this is a cursed cpp string";
    string word;

    stringstream ss(s);
    while (ss >> word) {
        cout << word << endl;
    }
  
return 0;
}
