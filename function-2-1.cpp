#include <iostream>
#include <string>
using namespace std;
string month_lookup(int day){
    string str;
    if(day>12||day<1){ 
        std::cout<<"invalid month";
    }else{
        if(day==1){
        str="Jan";
    }else if(day==2){
        str="Feb";
    }else if(day==3){
        str="Mar";
    }else if(day==4){
        str="Apr";
    }else if(day==5){
        str="May";
    }else if(day==6){
        str="Jun";
    }else if(day==7){
        str="Jul";
    }else if(day==8){
        str="Aug";
    }else if(day==9){
        str="Sep";
    }else if(day==10){
        str="Oct";
    }else if(day==11){
        str="Nov";
    }else if(day==12){
        str="Dec";
    }
    }
    
    return 0;
}