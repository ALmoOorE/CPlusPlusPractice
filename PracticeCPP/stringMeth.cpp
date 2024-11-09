#include<iostream>
#include<string>

using namespace std;

//.length() will display the length of the string
//.empty() is a boolean statement to see if the string is empty or not.



int main(){

string name;
cout<<"What is your name?\n";
getline(cin, name);

//**********Length() Method****************   
    name.length() > 12 ? cout<<"Your name cannot be over 12 letters." : cout<<"Hello "<< name<<endl;


//****EMPTY METHOD******
    name.empty() ? cout<<"You did't enter in your name." : cout<<"Hello "<<name<<endl;

//Clears the var using the .clear() method
    //name.clear();
    //cout<<name;


//You can add to a string by using the .append() method.
     //name.append(" Stinks");
     //cout<<name;

//You can display the char and the listed postion in a string using the .at() method. 
     //cout<<name.at(0);
//You can insert a char at a specfic location using the .insert( , ) method.
     //name.insert(0,"r");
     //cout<<name;
//You can erase a portion of a string using the .erase() method. 0-3 is getting erased aus.
    //name.erase(0,3);
    //cout<<name; 




    return 0;
}