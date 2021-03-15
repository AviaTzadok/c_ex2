#include <string>
#include <iostream>
#include "snowman.hpp"
using namespace std;
namespace ariel{

std::string hat(int x){
    if(x==1){
        return "_===_";
    }
    if(x==2){
        return " ___ \n.....";
    }
    if(x==3){
        return " _ \n/_\\";
    }
    
        return " ___ \n(_*_)";
    
    
}

std::string nose(int x){
    if(x==1){
        return ",";
    }
    if(x==2){
        return ".";
    }
    if(x==3){
        return "_";
    }
    
        return " ";
    
    
}

std::string left_Eye(int x){
    if(x==1){
        return ".";
    }
    if(x==2){
        return "o";
    }
    if(x==3){
        return "O";
    }
    
        return "-";
    
    
}

std::string right_Eye(int x){
     if(x==1){
        return ".";
    }
    if(x==2){
        return "o";
    }
    if(x==3){
        return "O";
    }
    
        return "-";
    
}

std::string left_Arm(int x){
    if(x==1){
        return "<";
    }
    if(x==2){
        return "\\";
    }
    if(x==3){
        return "/";
    }
    
        return " ";
    
    
}

std::string right_Arm(int x){
    if(x==1){
        return ">";
    }
    if(x==2){
        return "/";
    }
    if(x==3){
        return "\\";
    }
    
        return " ";
    
    
}

std::string torso(int x){
    if(x==1){
        return "( : )";
    }
    if(x==2){
        return "(] [)";
    }
    if(x==3){
        return "(> <)";
    }
    
        return "(   )";
    
    

}

std::string base(int x){
    if(x==1){
        return "( : )";
    }
    if(x==2){
        return "(""\" ""\")";
    }
    if(x==3){
        return "(___)";
    }

        return "(   )";
    
}




std::string snowman(int i){
    const int num_of_numbers =8;
    const int division = 10;

    int temp1=i;
    int temp2=0;
    int sum=0;
    int left_Arm_up=0;
    int right_Arm_up=0;
    string Complete_snowman;

    if(i<=0){
        throw string("Invalid input"); 
    }

    for (int j = 0; j <num_of_numbers; j++)
    {  
    sum++;
    temp2=temp1%division;
        if(temp2<1 || temp2>4){
         throw string("Invalid input"); 
      }
      temp1=temp1/division;
    }
        if(temp1>0){
         throw string("Invalid input"); 

        }
    
            int temp=i%division;
             string str8=base(temp);
            i=i/division;
            temp=i%division;

              string str7=torso(temp);
            i=i/division;
            temp=i%division;

            if(temp==2){
              right_Arm_up=temp;
            }

            string str6=right_Arm(temp);
            i=i/division;
            temp=i%division;

            if(temp==2){
              left_Arm_up=temp;
            }

                string str5=left_Arm(temp);
            i=i/division;
            temp=i%division;
        

               string str4=right_Eye(temp);
            i=i/division;
            temp=i%division;
            
            string str3=left_Eye(temp);
            i=i/division;
            temp=i%division;
        
            string str2=nose(temp);
            i=i/division;
            temp=i%division;

            string str1=hat(temp);

            string face= "("+str3+str2+str4+")";

        
           
        
    if(left_Arm_up==2){
    Complete_snowman=str1+"\n"+str5+face;
    if(right_Arm_up==2){
        Complete_snowman=Complete_snowman+str6+"\n"+str7+"\n"+str8;
    }
    else  {Complete_snowman=Complete_snowman+"\n"+str7+str6+"\n"+str8;
           
    }
    }
    else if(right_Arm_up==2){
           Complete_snowman=str1+"\n"+face+str6+"\n"+str5+str7+"\n"+str8;
           
    }
    else {
        Complete_snowman= str1+"\n"+face+"\n"+str5+str7+str6+"\n"+str8;
    }
        return Complete_snowman;
}
};

