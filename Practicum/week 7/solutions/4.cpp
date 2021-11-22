#include <iostream>
#define MAX_SIZE 100000

using namespace std;

bool isValidHorseMovement(int x1, int y1, int x2, int y2) {
    return (abs(x1 - y1) == 2 && abs(x2 - y2) == 1) || 
            (abs(x1 - y1) == 1 && abs(x2 - y2) == 2) ;
}

int main() {
    unsigned n;
    std::cin >> n;
    int positions[MAX_SIZE];
    for(int i = 0; i < 2*n; i++) {
        std::cin >> positions[i];

        try {
            if(positions[i] > 8 || positions[i] < 1) {
                throw "Invalid position!";
            }
        } catch(const char* exception) {
            std::cout << exception << std::endl;
            return 0;
        }
    }

    bool isValidHorse = true;
    for(int i = 0; i < 2*n - 2; i+=2) {
        if(!isValidHorseMovement(positions[i], positions[i+2], positions[i+1], positions[i+3])) {
            isValidHorse = false;
            break;
        }
    }

    if(isValidHorse) {
        std::cout << "Yes" << std::endl;
        return 0;
    }

    for(int i = 2; i < 2*n - 2; i+=2) {
        bool isValidHorseWithoutThem = true;
        for(int j = 0; j < i - 4; j+= 2) {
            if(!isValidHorseMovement(positions[j], positions[j+2], positions[j+1], positions[j+3])) {
                isValidHorseWithoutThem = false;
                break;
            }
        }

        isValidHorseWithoutThem = isValidHorseMovement(positions[i - 2], positions[i + 2], positions[i - 1], positions[i + 3]) 
        && isValidHorseWithoutThem;

        if(isValidHorseWithoutThem) {
            for(int j = i+2; j < 2*n - 4; j+= 2) {
                if(!isValidHorseMovement(positions[j], positions[j+2], positions[j+1], positions[j+3])) {
                    isValidHorseWithoutThem = false;
                    break;
                }
            }
        }

        if(isValidHorseWithoutThem) {
            std::cout << positions[i] << " " << positions[i+1] << std::endl;
            return 0;
        }
    }

    std::cout << "No such indices." << std::endl;
    return 0;
}

// I1: 
// 3
// 1 1 2 3 1 5
// O1:
// Yes

// I2: 
// 4
// 1 1 2 3 1 5 2 7
// O2:
// Yes

// I3: 
// 3
// 1 1 3 5 2 3
// O3:
// 3 5

// I4: 
// 2
// 1 1 3 5 
// O4:
// No such indices

// I5: 
// 3
// 1 -2
// O5:
// Invalid position!


