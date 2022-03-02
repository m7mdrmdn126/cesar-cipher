#include<iostream>
using namespace std;

string encrypt(string word , int shift, bool cap){

    for(int i = 0; i< word.size(); i++){
        int new_c = word[i] + shift ;
        if(cap){
            while(new_c > 90){
                new_c -= 26; 
            } 
        }else{
            while(new_c > 122){
                new_c -= 26; 
            }
        }
        
        word[i] = char(new_c);
    }

    return word;
}


string decrypt(string word , int shift, bool cap){

    for(int i = 0; i< word.size(); i++){
        int new_c = word[i] - shift ;
        if(cap){
            while(new_c < 65){
                new_c += 26; 
            } 
        }else{
            while(new_c < 97){
                new_c += 26; 
            }
        }
        
        word[i] = char(new_c);
    }

    return word;
}






int main(){
    int n;
    cout << "1) encrypt" << endl << "2) decrypt" << endl;   
    cin >> n;
    
    if(n == 1){
        string w;
        int sh;
        cout << "Enter your text please : " << endl;
        cin >> w;
        cout << "Enter shifting number please : " << endl;
        cin >> sh;
        if(w[0] >= 65 && w[0] <= 90){
            cout << encrypt(w, sh, true);
        }
        else if(w[0] >= 97 && w[0] <= 122){
            cout << encrypt(w, sh, false);
        }
        else{
            cout << "please enter valid ascii letters";
        }
    }
    else if(n == 2){
        string w;
        int sh;
        cout << "Enter your text please : " << endl;
        cin >> w;
        cout << "Enter shifting number please : " << endl;
        cin >> sh;
        if(w[0] >= 65 && w[0] <= 90){
            cout << decrypt(w, sh, true);
        }
        else if(w[0] >= 97 && w[0] <= 122){
            cout << decrypt(w, sh, false);
        }
        else{
            cout << "please enter valid ascii letters";
        }
    }
    
}