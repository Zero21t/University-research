#include <iostream>
#include <String>
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
using namespace std; 

//public//
 string university [4][3] {university [0][1] ="York university", university[0][2]="Ontario Tech university", university[0][3]= "UofT (University of Toronto)"};
 string info1 [3] {info1 [1]="-What is the total (university) undergraduate enrollment for the year? \n +59,000 enrolled in undergrad programs\n", info1 [2]="-What is the percentage of women (or men) enrolled?\n In a past survey 67% are men and 33% are women enrolled at york university\n", info1[3]="-What is the yearly undergraduate tuition \n Domestic tuition is $7,758 and international is $26,978"};
string info2 [3] {info2[1]="-What is the total (university) undergraduate enrollment for the year?\n +10,000 undergraduate and graduate students enrolled\n",info2[2]="-What is the percentage of women (or men) enrolled?\n 43% of enrollments at ontario tech university was women in 2018-2019\n", info2[3]="-What is the yearly undergraduate tuition\n Domestic tuition is 7,209 cad, international tuition is 17,153 cad"};
string info3 [3] {info3[1]="-What is the total (university) undergraduate enrollment for the year?\n There is roughly about 71,166 enrolled as undergraduates in the fall of 2020\n", info3[2]="-What is the percentage of women (or men) enrolled?\n In the fall of 2020 there are 54% females and 46% men enrolled\n", info3[3]="-What is the yearly undergraduate tuition\n Domestic tuition is 6,590 cad, international tuition is 45,690 cad"};
void endcode();
void welcome(){
    system ("color 0B");
    cout<< "---------------------------------------------"<<endl;
    cout<<"|       University Investigation Program      |"<<endl;
    cout<< "---------------------------------------------"<<endl;
    cout<<endl<<endl;
    cout<<"information is available for the following universities: "<<endl;
    cout<< "1. "<< university[0][0] << endl;
    cout<< "2. "<< university[0][1] << endl;
    cout<< "3. "<< university[0][2] << endl << endl;
    string choice;
    cout<<"which universit would u like to see 1. 2. or 3.\n";
    cin >> choice;
    if( choice == "1." || choice == "1"){
        cout<<info1 [0]<<endl;
        cout<<info1 [1]<<endl;
        cout<<info1 [2]<<endl;
        endcode();
    } if( choice == "2." || choice == "2"){
        cout<<info2 [0]<<endl;
        cout<<info2 [1]<<endl;
        cout<<info2 [2]<<endl;
        endcode();
    }
    if( choice == "3." || choice == "3"){
        cout<<info3 [0]<<endl;
        cout<<info3 [1]<<endl;
        cout<<info3 [2]<<endl;
        endcode();
    }else if (choice != "1." || choice != "1" || choice != "2." || choice != "2"||choice != "3." || choice != "3"){
        system("cls");
        cout<<"error invalid input \ntry again"<<endl;
        welcome();
    }
}

void endcode(){
    cout<<"Would you like to see the options again? Yes or No"<<endl;
    string choice2;
    cin>> choice2;
    if(choice2 == "Yes" || choice2=="yes"){
        system("cls");
        welcome();
    }if(choice2 =="No" || choice2 =="no"){
        system("cls");
        cout<<"Very well then\n Good Bye";
        return;
    }
}
int main(){
    welcome();
}