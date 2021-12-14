#include<iostream>

using namespace std;

char* clear_spaces_and_new_lines(char* text){
    int index = 0;
    char temp;
    bool flag = false;

    //clear new lines
    for(int j = 0; text[j] != '\0'; j++){
        if(text[j] == '\n' && flag == false){
            flag = true;
            text[index++] = '\n';
        }
        text[index++] = text[j];

        if(text[j] == '\n'){
            while(text[j + 1] == '\n'){
                j++;
            }
        }
    }
    text[index] = '\0';

    index = 0;
    //clear spaces
    for(int j = 0; text[j] != '\0'; j++){
        text[index++] = text[j];

        if(text[j] == ' '){
            while(text[j + 1] == ' '){
                j++;
            }
        }
    }
    text[index] = '\0';

    //swap commas and ! && ? && dots
    for(int j = 0; text[j] != '\0'; j++){
        if(text[j] == ' ' && (text[j+1] == ',' || text[j+1] == '.' || text[j+1] == '!' || text[j+1] == '?' )){
            temp = text[j];
            text[j] = text[j + 1];
            text[j + 1] = temp;
        }
    }

    index = 0;
    //clear spaces
    for(int j = 0; text[j] != '\0'; j++){
        text[index++] = text[j];

        if(text[j] == ' '){
            while(text[j + 1] == ' '){
                j++;
            }
        }
    }
    text[index] = '\0';

    return text;
}

char* fix_letters(char* text){
    //make the first letter capital
    if(text[0] >= 'a' && text[0] <= 'z'){
        text[0] = text[0] - 'a' + 'A';
    }

    //make all letters small
    for(int j = 1; text[j] != '\0'; j++){
        if(text[j] >= 'A' && text[j] <= 'Z'){
            text[j] = text[j] - 'A' + 'a';
        }
    }

    //make capital letters in the start of each sentence
    for(int j = 1; text[j] != '\0'; j++){
        if((text[j] == '.' || text[j] == '?' || text[j] == '!') && text[j + 1] == ' ' && text[j + 2] != '\0' && text[j + 2] != '\n'){
            if(text[j + 2] >= 'a' && text[j + 2] <= 'z'){
                text[j + 2] = text[j + 2] - 'a' + 'A';
            }
        }

        if(text[j] == '\n' && text[j + 1] != '\n'){
            if(text[j + 1] >= 'a' && text[j + 1] <= 'z'){
                text[j + 1] = text[j + 1] - 'a' + 'A';
            }
        }
    }
}

int main(){
    char text[1024];
    cin.getline(text, 1024, '~');
    clear_spaces_and_new_lines(text);
    fix_letters(text);
    cout << endl << text << endl;
    return 0;
}
