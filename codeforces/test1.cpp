#include<bits/stdc++.h>
using namespace std;

int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int id,mark;
        string name;
        char sec;
        cin>>id>>name>>sec>>mark;

        for(int i=0; i<2; i++){
            int new_id,new_marks;
            string new_name;
            char new_sec;
            cin>>new_id>>new_name>>new_sec>>new_marks;

            if(new_marks>mark){
                id = new_id;
                name=new_name;
                sec = new_sec;
                mark = new_marks;
            }
            else if(new_marks==mark && new_id < id){
                id = new_id;
                name=new_name;
                sec = new_sec;
                mark = new_marks;
            }
        }
        cout<<id<<" "<<name<<" "<<sec<<" "<<mark<<endl;

    }

}