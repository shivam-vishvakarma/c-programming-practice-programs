#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
int main()
  {
   string name;
    char input;
    int inputuser;
    int correct=0;
    int incorrect=0;
    cout<<"enter  your name             ";
   // getline(cin,name);
     cin>>name;
      cout<<endl;
       do
         {
//          rand(0);
           int variable=rand();
           cout<<"enter any no. between range 1 to 5";
            cin>>inputuser;
           cout<<endl;
            if(inputuser=variable)
               {
                 cout<<"congratulation ! you guessed the correct number  ";
                 correct++;
                 cout<<endl;
               }
            else     
                {
                  cout<<"sorry, you guessed wrong number try again";
                  cout<<endl;
                  incorrect--;
                }
             cout<<"would you like to try again Y/N";
             cin>>input;
            cout<<endl;
         }while(input!='y');
           cout<<"your score \n";
           cout<<"correct="<<correct<<endl;
           cout<<"incorrect="<<incorrect<<endl;

    cout<<" Game end  bsdk "<<name<<endl;
    return 0;
    }
