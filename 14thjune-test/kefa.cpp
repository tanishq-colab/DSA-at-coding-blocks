#include <iostream>
using namespace std;
#include <vector>
#include<cstring>

bool ans(int n,int k,char s[]){
    int freq[26] = {0};
    for(int i = 0;s[i] != '\0';i++){
        freq[s[i] - 'a']++;
       
    }
    
    for(int i = 0;i<26;i++){
        if(freq[i] > k) return false;
    }
 return true;

}

int main(){
    int n; // NOOF BALOONS
    int k; // NO OF GFRIENDS
    char s[100] = ""; 
    cin>>n;
    cin>>k;
    cin>>s;

    ans(n,k,s) ? cout<<"YES" : cout<< "NO";

    return 0;
}