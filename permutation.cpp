#include <iostream>
#include <string>

using namespace std;

void permutation (string str,string ans){
    if (str.length()==0)
    {
        cout<<ans<<" ";
        return ;
    }
    for (int i = 0; i < str.length(); i++)
    {
        char x = str[i];
        string test = str.substr(0,i) + str.substr(i+1);

        permutation(test,ans+x);
    }
    
    
}

int main (){

    permutation("ABC", "");

    return 0;
}