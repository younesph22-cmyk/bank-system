#include<iostream>

    void login(std::string user , std::string password){
        std::cout<<"enter user-name \n";
        std::cin>>user;
        std::cout<<"enter password !\n";
        std::cin>>password;
           if(user != "ibm2002"){
            std::cout<<"wrong user name \n";
           }
              if(password != "admin4321"){
                std::cout<<"wrong ! password \n";
              }
            else {
                std::cout<<"welocom to your account \n";
            }
    }
    void operations(){
        int choice = 0;
        int passwrd_numb = 0;
        double balence = 10944.06;
        double value_withdraw = 0.0;
        double value_send = 0.0;
        double new_balence = 0.0;
        std::string account_number;
        int sum = 0;
        int digits;
        bool doubleit = true;

        do {
        std::cout<<"operation avalaible \n";
        std::cout<<"1 chow your balence \n";
        std::cout<<"2 withdraw money \n ";
        std::cout<<"3 send money \n";
        std::cout<<"4 exit \n ";
        std::cout<<"enter your operation \n";
        std::cin>>choice;
    switch(choice){
        case 1 :
        std::cout<<"enter your password 8 numbers !\n";
        std::cin>>passwrd_numb;
            if(passwrd_numb != 20252026){
                std::cout<<"your psrwd is incorrect ! try again enter your operation \n";
                continue;
            }
               else {
               std::cout<<"your balence is : "<<balence <<" $ now !\n";
               }
                  break;
        case 2 :
        std::cout<<"enter your password 8 numbers !\n";
        std::cin>>passwrd_numb;
            if(passwrd_numb != 20252026){
                std::cout<<"your password is incorrect ! try again enter your operation \n";
                continue;
            }
               else {
                std::cout<<"enter your value \n";
                std::cin>>value_withdraw;
               }
            if (value_withdraw > balence){
                std::cout<<"the value is more than your balence \n";
            }else {
             new_balence = balence - value_withdraw;
             balence = new_balence;
             std::cout<<"your balence after withdraw is "<<balence<<" $ \n";
                }
               break;
        case 3 :
        std::cout<<"enter your password 8 numbers !\n";
        std::cin>>passwrd_numb;
            if(passwrd_numb != 20252026){
                std::cout<<"your password is incorrect ! try again enter your operation \n";
                continue;
            }
               else {
                std::cout<<"enter a valide account number\n";
                std::cin>>account_number;
                std::cout<<"now we folow Luhn algorithm to check this number is valide...\n";
               for(int i = account_number.size()-1;i >= 0;i--){
                digits = account_number[i] - '0';
                if(doubleit == false){
                    digits*=2;
                }
                    if(digits >9){
                        digits-=9;
                    }
                    doubleit=!doubleit;
                    sum+=digits;
               }
               if(sum%10==0){
                std::cout<<"this card number is valid !"<<account_number<<"\n";
                std::cout<<"enter a value to send it to "<<account_number<<"\n";
                std::cin>>value_send;
                new_balence = balence - value_send;
                balence = new_balence;
                std::cout<<"your balence now after send is :"<<balence<<" $ "<<"\n";
               }
                else{
                    std::cout<<"this card number not valide "<<account_number<<"\n";
                }
               }
            break;
            case 4:
            std::cout<<"tank-you for use null-vertex06 bank-systems \n";
    }    
    
    
    
    }while(choice != 4);
    }
    int main() {
 std::string user;
 std::string password;
 std::cout<<"=====bank-02===== \n";
   login(user,password);
   operations();
return 0;
}
