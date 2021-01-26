#include <iostream>
#include <string>
#ifndef BANK_H
#define BANK_H

namespace dolan
{
    class Bankacct
    {
        public:
            Bankacct(const std::string& id = "NA", double b = 0.0, double ir = 1.0);
            //ACESSORS
            std::string get_id() const{return ownerid;}
            double get_balance() const{return balance;}
            double get_interest() const{return interest_r;}
            //SETTERS
            //I/O
            void input(std::istream& ins);
            void output(std::ostream& outs)const;
            //OPERATORS
            Bankacct operator + (const Bankacct& b2)const;
            Bankacct operator * (double amt)const;
            bool operator < (const Bankacct& b2)const;
        private:
            std::string ownerid;
            double balance;
            double interest_r;
    };
    std::istream& operator >> (std::istream& ins, Bankacct& b2);
    std::ostream& operator << (std::ostream& outs, const Bankacct& b2);
} //CLOSING THE NAMESPACE
#endif