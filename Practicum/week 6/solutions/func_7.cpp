#include <iostream>
#define DATETIME_SIZE 10

bool isValidDate(const char date[DATETIME_SIZE]){

    int firstDotPosition = 2;
    int secondDotPosition = 5;

    // validate if the format is dd.mm.yyyy
    // and check if digits are passed
    for(int i = 0; i < DATETIME_SIZE; i++) {
        if((i == firstDotPosition || i == secondDotPosition) &&
            date[i] != '.')
        {
            return false;
        }
        else if(i != firstDotPosition && i != secondDotPosition && (date[i] < '0' || date[i] > '9')) {
            return false;
        }
    }

    int day = (date[0] - '0') * 10 + (date[1] - '0');
    int month = (date[3] - '0') * 10 + (date[4] - '0');
    int year = (date[6] - '0') * 1000 + (date[7] - '0') * 100 +
               (date[8] - '0') * 10 + (date[9] - '0');

    switch (month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        if(day > 31 || day < 1) {
            return false;
        }
    break;
    
    case 4:
    case 6:
    case 9:
    case 11:
        if(day > 30 || day < 1) {
            return false;
        }
    break;

    case 2:
        if((year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)) && (day < 30 && day > 0)) {
            return true;
        }
        else if (day > 29 && day < 0) {
            return true;
        }
        else {
            return false; 
        }
    break;    

    default:
        return false;
    }

    return true;
}

int main() {

    std::cout << "---Tests---\n";
    std::cout << "Is valid year 29.02.2000? " << std::boolalpha << isValidDate("29.02.2000") << std::endl;
    std::cout << "Is valid year 29.02.1984? " << std::boolalpha << isValidDate("29.02.1984") << std::endl;

    std::cout << "Is valid year 29.02.1900? " << std::boolalpha << isValidDate("29.02.1900") << std::endl;
    std::cout << "Is valid year 29.02.2100? " << std::boolalpha << isValidDate("29.02.2100") << std::endl;

    std::cout << "Is valid year 31.00.1900? " << std::boolalpha << isValidDate("31.00.1900") << std::endl;
    std::cout << "Is valid year 30.06.2005? " << std::boolalpha << isValidDate("30.06.2005") << std::endl;
    std::cout << "Is valid year 31.06.2005? " << std::boolalpha << isValidDate("31.06.2005") << std::endl;

    std::cout << "Is valid year dd.mm.yyyy? " << std::boolalpha << isValidDate("dd.mm.yyyy") << std::endl;
    std::cout << "Is valid year 31:06:2005? " << std::boolalpha << isValidDate("31:06:2005") << std::endl;

    return 0;
}