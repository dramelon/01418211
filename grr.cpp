#include <iostream>
#include <string>
#include <cstring>
#include <cmath>
using namespace std;


int main(){
    string ID,temp = "";
    int logic=0;
    cin >> ID;
char Name[ID.length()];

strcpy(Name,ID.c_str());

if (isupper(Name[0])){
    logic = 1;
}else if (Name[0] >= '0' && Name[0] <= '9'){
    logic = 2;
}else{
    Name[0] = Name[0]-32;
    logic = 1;
}


int i;
for (i=0;i<ID.length();i++){
    if (isupper(Name[i])){
        if (logic != 1 && logic != 3){
            logic = 1;
            cout << temp << " ";
            temp = "";
        }

        if (isupper(Name[i+1])){
            logic = 3;
        }

        if (logic == 3){
            if (isupper(Name[i+1]) || (Name[i+1] >= '0' && Name[i+1] <= '9' ||  Name[i+1] == '\0') ){
                logic = 3;
            }else{
                logic = 1;
                cout << temp << " ";
                temp = "";
            }
        }
        temp += Name[i];

    }else if(Name[i] >= '0' && Name[i] <= '9'){
        if (logic != 2){
            logic = 2;
            cout << temp << " ";
            temp = "";
        }
        temp+=Name[i];
        logic = 2;

    }else{
        if(logic == 2){
            logic = 1;
            cout << temp << " ";
            temp = "";
            temp += Name[i] - 32;
            continue;
        }
        temp+=Name[i];
        logic = 0;

    }
}
    cout << temp;
}