#include <iostream>
using namespace std;
#include <vector>

void cat(int k){
    
    while(k--){
        
    int a,del;
        cin>>a>>del; 
        char str[2000];
        cin>>str;

        int freq[26] = {0};
        int odd = 0;
       
        for(int i = 0;i <a; i++){
            freq[str[i] - 'a']++;
            
        }
        
        for(int i = 0; i <26 ;i++){
            if(freq[i] % 2 == 1)
            odd++;
            
        }

      if(odd - 1<=k){
        cout<<"YES"<<endl;
      }
      else cout<<"NO";
        
    
    }
}

int main(){
    int k;
    cin>>k; // test cases
    cat(k); 
   

    return 0;
}