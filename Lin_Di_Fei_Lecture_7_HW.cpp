/*Lin Di Fei 
11/3/24
Lecture 7
*/
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

using namespace std;

int main(){
    string name;//identify variables needed
    double first;
    double second;
    double third;
    double average;

    ifstream myInput;//identify the input file 
    myInput.open("game_scores.txt");//open said input file 

    for(int i = 0; i < 3; i++){//for loop for the three people

        myInput>>name;//takes the name 
        myInput>>first;//takes the first score 
        myInput>>second;//takes the second score  
        myInput>>third;//takes the third score 

        first = (first/100)*20;//20% of total value 
        second = (second/100)*30;//30% of total value 
        third = (third/100)*50;//50% of total value 

        cout<<name<<endl;//print name 
        average = first+second+third;//average

        if(average<1000)//average less than 1000
            cout<<"Beginner - Keep Practicing!"<<endl;
        else if(average<1501&&average>999)//average between 1500 and 1000
            cout<<"Intermediate"<<endl;            
        else if(average<1801&&average>1499)//average between 1500 and 1800
            cout<<"Advanced - Good Job!"<<endl;   
        else if(average<2001&&average>1799)//average between 1800 and 2000
            cout<<"Master - Good Job!"<<endl;
        else if(average>2000)//average larger than 2000
            cout<<"Congrats! You are an Expert"<<endl;            
    }
    return 0;
}