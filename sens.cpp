#include <Windows.h>
#include <fstream>
#include <iostream>
#include<iostream>
#include<string.h>
#include<string>
#include <iostream>
#include <sstream>
 
int main() {
 
    std::ifstream file;
    std::string line;
    int lineSens = 0;
    int lineFOV = 0;
    file.open("C:\\Program Files (x86)\\Steam\\steamapps\\common\\Rust\\cfg\\client.cfg");// can add more paths
 
    if (!file) {
        std::cout << "Unable to open file datafile.txt";
        exit(1);   // call system to stop
    }
    while (true) {
        std::getline(file, line);
        
 
        lineSens++;
    
        if (lineSens == 68) { // makes sure we read the correct line of the .cfg file
            std::string fovString = line;
            size_t pos = fovString.find(" ");
            fovString = fovString.substr(pos+2);
            
        
             std::stringstream fovConv(fovString);
             int fov = 0; // where fov will be stored
             fovConv >> fov;
 
             std::cout << fov << std::endl;
