#include <cleaner.h>
#include <driver.h>
#include <programmer.h>
#include <tester.h>
#include <teamleader.h>
#include <progectmanager.h>
#include <seniormanager.h>

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <bits/stdc++.h>

void printTableLine(std::string one, std::string two, std::string three)
{
    std::cout << "+----------------+----------------+----------------+" << std::endl;
    std::cout << "|" << std::setw(16) << one;
    std::cout << "|" << std::setw(16) << two;
    std::cout << "|" << std::setw(16) << three;
    std::cout << "|" << std::endl;
}

int main()
{
    printTableLine("name", "role", "salary");

    std::string line;
    std::ifstream myfile ("data.csv");
    if (myfile.is_open()) {
        while ( std::getline (myfile, line) ) {   
            
            line = line.substr(0, line.size() - 1);
            std::stringstream check1(line); 
            std::string intermediate;
            std::vector <std::string> tokens;  
            while(std::getline(check1, intermediate, ';')) { 
                tokens.push_back(intermediate); 
            }

            if(tokens[0] == "seniormanager") {
                SeniorManager emp(std::stoi(tokens[1]), tokens[2], std::stoi(tokens[5]), std::stoi(tokens[6]), std::stoi(tokens[7]), std::stoi(tokens[8]));
                std::ostringstream ss;
                ss << emp.GetSalary();

                printTableLine(emp.GetFio(), emp.GetType(), ss.str());
            } else if(tokens[0] == "cleaner") {
                Cleaner emp(std::stoi(tokens[1]), tokens[2], 
                            std::stoi(tokens[3]), std::stoi(tokens[4]));
                std::ostringstream ss;
                ss << emp.GetSalary();

                printTableLine(emp.GetFio(), emp.GetType(), ss.str());
            } else if(tokens[0] == "driver") {
                Driver emp(std::stoi(tokens[1]), tokens[2], 
                           std::stoi(tokens[3]), std::stoi(tokens[4]));
                std::ostringstream ss;
                ss << emp.GetSalary();

                printTableLine(emp.GetFio(), emp.GetType(), ss.str());
            } else if(tokens[0] == "progectmaneger") {
                ProgectManager emp(std::stoi(tokens[1]), tokens[2], 
                                   std::stoi(tokens[5]), std::stoi(tokens[6]), 
                                   std::stoi(tokens[7]), std::stoi(tokens[8]));
                std::ostringstream ss;
                ss << emp.GetSalary();

                printTableLine(emp.GetFio(), emp.GetType(), ss.str());
            } else if(tokens[0] == "teamleader") {
                TeamLeader emp(std::stoi(tokens[1]), tokens[2], 
                               std::stoi(tokens[3]), std::stoi(tokens[4]),
                               std::stoi(tokens[5]), std::stoi(tokens[6]), 
                               std::stoi(tokens[7]), std::stoi(tokens[8]));
                std::ostringstream ss;
                ss << emp.GetSalary();

                printTableLine(emp.GetFio(), emp.GetType(), ss.str());
            } else if(tokens[0] == "programmer") {
                Programmer emp(std::stoi(tokens[1]), tokens[2], 
                               std::stoi(tokens[3]), std::stoi(tokens[4]),
                               std::stoi(tokens[5]), std::stoi(tokens[6]));
                std::ostringstream ss;
                ss << emp.GetSalary();

                printTableLine(emp.GetFio(), emp.GetType(), ss.str());
            } else if(tokens[0] == "tester") {
                Tester emp(std::stoi(tokens[1]), tokens[2], 
                               std::stoi(tokens[3]), std::stoi(tokens[4]),
                               std::stoi(tokens[5]), std::stoi(tokens[6]));
                std::ostringstream ss;
                ss << emp.GetSalary();

                printTableLine(emp.GetFio(), emp.GetType(), ss.str());
            }

        }
        myfile.close();
        std::cout << "+----------------+----------------+----------------+" << std::endl;
    }
    else throw std::invalid_argument("unable to open file");

    return 0;
}