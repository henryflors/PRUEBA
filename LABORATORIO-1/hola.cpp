#include <iostream>
#include <string>
using namespace std;

string solve(int num){
    string romano[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    int valores[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    
    string res = "";
    
    for(int i = 0; i < 13; i++){
        while(num >= valores[i]){
            res += romano[i];
            num -= valores[i];
        }
    }
    
    return res;
}

int main(){
    int num;
    cout << "NUMERO POSTV.: ";
    cin >> num;

    if(num < 1 || num > 3999){
        cout << "INGRESE OTRO NUMERO" <<endl;
    }else{
        cout << " EL NUMERO :  " << num << " EN ROMANO: " << solve(num) << endl;
    }
    return 0;
}
