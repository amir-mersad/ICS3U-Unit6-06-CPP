// Copyright (c) 2019 Amirmahdi Mersad All rights reserved
//
// Created by Amir Mersad
// Created on December 2019
// This program calculates the average of grades using list

#include <iostream>
#include <list>
#include <map>


std::list<std::string> HexaDecimal(std::string word) {
    // this function calculates the average
    std::list<std::string> characters;
    std::list<std::string> wrong;
    std::map<std::string, std::string> hexa = {
        {"a", "61"},
        {"b", "62"},
        {"c", "63"},
        {"d", "64"},
        {"e", "65"},
        {"f", "66"},
        {"g", "67"},
        {"h", "68"},
        {"i", "69"},
        {"j", "6a"},
        {"k", "6b"},
        {"l", "6c"},
        {"m", "6d"},
        {"n", "6e"},
        {"o", "6f"},
        {"p", "70"},
        {"q", "71"},
        {"r", "72"},
        {"s", "73"},
        {"t", "74"},
        {"u", "75"},
        {"v", "76"},
        {"w", "77"},
        {"x", "78"},
        {"y", "79"},
        {"z", "7a"},
    };
    for (int counter = 0; counter < word.length(); counter++) {
        std::string element(1, word.at(counter));
        if (hexa.count(element) > 0) {
            characters.push_back(hexa[element]);
        } else {
            std::cout << "Wrong input!!!" << std::endl;
            break;
        }
    }

    // Output
    return characters;
}


int main() {
    // This function gets the input and makes it ready to pass it to another
    //  function

    std::string word;
    std::list<std::string> result;

    // Input
    std::cout << "enter a word: ";
    std::cin >> word;

    // Passing to another function
    result = HexaDecimal(word);

    // Output
    for (std::string counter : result) {
        std::cout << counter << " ";
    }
}
