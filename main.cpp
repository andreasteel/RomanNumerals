#include <iostream>
#include <string>

int main() {
    std::string userInput;
    std::string userAnswer;

//getting input
    std::cout << "Are you converting from a Roman numeral to a number?" << std::endl;
    std::cin >> userAnswer;
    int total = 0;
    int conversion[userInput.length()];
    char letters[userInput.length()];

//roman to number
    if (userAnswer == "yes" ){
        std::cout << "What is the Roman Numeral?" << std::endl;
        std::cin >> userInput;
        char romanNumber[userInput.length()];
        for (int i = 0; i < userInput.length(); ++i) {
            romanNumber[i] = userInput.at(i);

        }

//switching character to number
        for (int i = 0; i < userInput.length(); ++i) {

            if (romanNumber[i] == 'I'){
                conversion[i] = 1;
            }
            else if (romanNumber[i] == 'V'){
                conversion[i] = 5;
            }
            else if (romanNumber[i] == 'X'){
                conversion[i] = 10;
            }
            else if (romanNumber[i] == 'L'){
                conversion[i] = 50;
            }
            else if (romanNumber[i] == 'C'){
                conversion[i] = 100;
            }
            else if (romanNumber[i] == 'D'){
                conversion[i] = 500;
            }
            else if (romanNumber[i] == 'M'){
                conversion[i] = 1000;
            }
            else {
                std::cout << "This is not a valid Roman Numeral" << std::endl;
            }

            std::cout << conversion[i] << ",";
        }

//checking if need to subtract
//TODO find a way to add up the multiple numbers to minus (IIIX)
        for (int i = 0; i < (userInput.length() - 1); ++i) {
           if (conversion[i] < conversion[i + 1]){
                std::cout << "ok";
               conversion[i] = conversion[i + 1] - conversion[i];
               conversion[i + 1] = 0;
            }
        }
        //adding up all the numbers
        for (int i = 0; i < userInput.length(); ++i) {
            total += conversion[i];
        }
        std::cout << std::endl;

        std::cout << total << std::endl;
    }




    else if (userAnswer == "no" ){
        std::cout << "What is the number?" << std::endl;
        std::cin >> userInput;
        for (int i = (userInput.length() - 1); i = (userInput.length() - 2); ++i) {
            if (userInput.at(i) == 1){
                letters[i] = 'I';
            }
            else if (userInput.at(i) == 2){
                letters[i] = 'II';
            }
            else if (userInput.at(i) == 3){
                letters[i] = 'III';
            }
            else if (userInput.at(i) == 4){
                letters[i] = 'IV';
            }
            else if (userInput.at(i) == 5){
                letters[i] = 'V';
            }
            else if (userInput.at(i) == 6){
                letters[i] = 'VI';
            }
            else if (userInput.at(i) == 7){
                letters[i] = 'VII';
            }
            else if (userInput.at(i) == 8){
                letters[i] = 'VIII';
            }
            else if (userInput.at(i) == 9){
                letters[i] = 'IX';
            }

        }
        if(userInput.length() > 1) {
            for (int i = (userInput.length() - 2); i < (userInput.length() - 3); ++i) {

                if (userInput.at(i) == 1) {
                    letters[i] = 'X';
                } else if (userInput.at(i) == 2) {
                    letters[i] = 'XX';
                } else if (userInput.at(i) == 3) {
                    letters[i] = 'XXX';
                } else if (userInput.at(i) == 4) {
                    letters[i] = 'XL';
                } else if (userInput.at(i) == 5) {
                    letters[i] = 'L';
                } else if (userInput.at(i) == 6) {
                    letters[i] = 'LX';
                } else if (userInput.at(i) == 7) {
                    letters[i] = 'LXX';
                } else if (userInput.at(i) == 8) {
                    letters[i] = 'LXXX';
                } else if (userInput.at(i) == 9) {
                    letters[i] = 'XC';
                }
            }
        }
        if(userInput.length() > 2) {
            for (int i = (userInput.length() - 3); i < (userInput.length() - 4); ++i) {

                if (userInput.at(i) == 1) {
                    letters[i] = 'C';
                } else if (userInput.at(i) == 2) {
                    letters[i] = 'CC';
                } else if (userInput.at(i) == 3) {
                    letters[i] = 'CCC';
                } else if (userInput.at(i) == 4) {
                    letters[i] = 'CD';
                } else if (userInput.at(i) == 5) {
                    letters[i] = 'D';
                } else if (userInput.at(i) == 6) {
                    letters[i] = 'DC';
                } else if (userInput.at(i) == 7) {
                    letters[i] = 'DCC';
                } else if (userInput.at(i) == 8) {
                    letters[i] = 'DCCC';
                } else if (userInput.at(i) == 9) {
                    letters[i] = 'CM';
                }
            }
        }
        if(userInput.length() > 3) {
            for (int i = (userInput.length() - 4); i < (userInput.length() - 5); ++i) {

                if (userInput.at(i) == 1) {
                    letters[i] = 'M';
                } else if (userInput.at(i) == 2) {
                    letters[i] = 'MM';
                } else if (userInput.at(i) == 3) {
                    letters[i] = 'MMM';
                }
            }
        }
        for (int i = 0; i < userInput.length(); ++i) {
            std::cout << letters[i];
        }

    }


    return 0;
}
