#include<iostream>

int main(){

    int day, month;
    std::cin >> day >> month;

    try {
        switch(month){
            case 1 :
                {
                    (day <= 19) ? std::cout << "Capricorn" << std::endl :
                                  std::cout << "Aquarius" << std::endl;
                }; break;
            case 2 :
                {
                    (day <= 18) ? std::cout << "Aquarius" << std::endl :
                                  std::cout << "Pisces" << std::endl;
                }; break;
            case 3 :
                {
                    (day <= 19) ? std::cout << "Pisces" << std::endl :
                                  std::cout << "Aries" << std::endl;
                }; break;
            case 4 :
                {
                    (day <= 19) ? std::cout << "Aries" << std::endl :
                                  std::cout << "Taurus" << std::endl;
                }; break;
            case 5 :
                {
                    (day <= 20) ? std::cout << "Taurus" << std::endl :
                                  std::cout << "Gemini" << std::endl;
                }; break;
            case 6 :
                {
                    (day <= 20) ? std::cout << "Gemini" << std::endl :
                                  std::cout << "Cancer" << std::endl;
                }; break;
            case 7 :
                {
                    (day <= 22) ? std::cout << "Cancer" << std::endl :
                                  std::cout << "Leo" << std::endl;
                }; break;
            case 8 :
                {
                    (day <= 22) ? std::cout << "Leo" << std::endl :
                                  std::cout << "Virgo" << std::endl;
                }; break;
            case 9 :
                {
                    (day <= 22) ? std::cout << "Virgo" << std::endl :
                                  std::cout << "Libra" << std::endl;
                }; break;
            case 10 :
                {
                    (day <= 22) ? std::cout << "Libra" << std::endl :
                                  std::cout << "Scorpio" << std::endl;
                }; break;
            case 11 :
                {
                    (day <= 21) ? std::cout << "Scorpio" << std::endl :
                                  std::cout << "Sagittarius" << std::endl;
                }; break;
            case 12 :
                {
                    (day <= 21) ? std::cout << "Sagittarius" << std::endl :
                                  std::cout << "Capricorn" << std::endl;
                }; break;
            default : throw "Wrong input!\n";
        }
    }
    catch (char const* e){
        std::cout << e << std::endl;
    }

    return 0;
}
