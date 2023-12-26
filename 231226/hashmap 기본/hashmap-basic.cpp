#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
    int n;

    cin>>n;

    string method;
    unordered_map<int, int> hashmap;
    
    while(n--){
        cin>>method;
        if(method == "add"){
            int a,b;
            cin>>a>>b;
            hashmap.insert({a,b});
        }
        else if(method == "remove"){
            int key;
            cin>>key;
            hashmap.erase(key);
        }
        else if(method == "find"){
            int key;
            cin>>key;
            if(hashmap.find(key) == hashmap.end()){
                cout<<hashmap[key]<<'\n';
            }
            else{
                cout<<"None"<<'\n';
            }
        }
        
    }



}