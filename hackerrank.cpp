#include<iostream>
#include<string>
#include<vector>

using namespace std;
int main(){
    
    int attendees,topics;
    string input;
    cin>>attendees>>topics;

    vector<string> data;
    
    for (int i=0; i<attendees; i++) {
    cin>>input;
    data.push_back(input);
    }
    
    int maks=0,tempmaks=0;
    int combination=0;
    bool perfectcomb=true;

    for(int j=0;j<attendees-1;j++){
        for (int k=j+1;k<attendees;k++){
            for(int l=0;l<topics;l++){
                if(data[j][l]=='1'||data[k][l]=='1'){
                    tempmaks++;
                }
                
                if (data[j][l]=='0'){
                    if(data[k][l]=='0'){
                        perfectcomb=false;
                    }
                }
               
                
            }
            if (maks<tempmaks) {
            maks=tempmaks;
            }
            tempmaks=0;
            
            if (perfectcomb==true){
                combination++;
            }
            else
            perfectcomb=true;

        }
    }
    cout<<maks<<endl<<combination;  
    return 0;
}