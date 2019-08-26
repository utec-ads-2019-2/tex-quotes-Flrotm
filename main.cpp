#include <iostream>
#include <string>

using namespace std;


int main(){
string str;
int x=0;
while(getline(cin,str)){

    while(str.find('"')+1){
        if(x==0){
            str.replace(str.find('"'),1,"``");
            x=1;
        }
        else{
            str.replace(str.find('"'),1,"''");
            x=0;
        }
    }
    cout<<str<<endl;
}

}
