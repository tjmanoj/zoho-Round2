#include <iostream>
using namespace std;
int main()
{
    int n;
    string word;
    cin >> word;
    n = word.size();
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i+j == n-1 || i == j) cout << word[j];
            else cout << ' ';
        }
    
        cout << endl;
    }
    return 0;
}

P     M
 R   A 
  O R  
   G   
  O R  
 R   A 
P     M
