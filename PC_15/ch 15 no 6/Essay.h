#ifndef ESSAY_H
#define ESSAY_H

#include <iostream>
#include "GradedActivity.h"

using namespace std;

//constants for points
//according to categories
const int GRAMMAR = 30;
const int SPELLING = 20;
const int LENGTH = 20;
const int CONTENT = 30;

//class Essay will inherit
//from GradedActivity class
class Essay : public GradedActivity{
private:
    int grammar;
    int spelling;
    int length;
    int content;

public:
    //default constructor
    //will also call default constructor
    //of parent class
    Essay() : GradedActivity(){
        //set all member variables to 0
        grammar = 0;
        spelling = 0;
        length = 0;
        content = 0;
    }

    //overloaded constructor
    //will also call overloaded constructor
    //of parent class
    Essay(int g, int s, int l, int c) :
                        GradedActivity(g+s+l+c){
        //set member variables
        grammar = g;
        spelling = s;
        length = l;
        content = c;
    }

    //getter functions
    int getGrammar() const{
        return grammar;
    }

    int getSpelling() const{
        return spelling;
    }

    int getLength() const{
        return length;
    }

    int getContent() const{
        return content;
    }

    //setter functions
    void setGrammar(int g){
        //validate input
        while(g < 0 || g > GRAMMAR){
            cout << "Grammar points should be between";
            cout << " 0 and " << GRAMMAR << "!";
            cout << " Enter again: ";
            cin >> g;
        }

        grammar = g;
        //update score
        setScore(grammar + spelling
                 + length + content);
    }

    void setSpelling(int s){
        //validate input
        while(s < 0 || s > SPELLING){
            cout << "Spelling points should be between";
            cout << " 0 and " << SPELLING << "!";
            cout << " Enter again: ";
            cin >> s;
        }

        spelling = s;
        //update score
        setScore(grammar + spelling
                 + length + content);
    }

    void setLength(int l){
        //validate input
        while(l < 0 || l > LENGTH){
            cout << "Correct Length points should be between";
            cout << " 0 and " << LENGTH << "!";
            cout << " Enter again: ";
            cin >> l;
        }

        length = l;
        //update score
        setScore(grammar + spelling
                 + length + content);
    }

    void setContent(int c){
        //validate input
        while(c < 0 || c > CONTENT){
            cout << "Content points should be between";
            cout << " 0 and " << CONTENT << "!";
            cout << " Enter again: ";
            cin >> c;
        }

        content = c;
        //update score
        setScore(grammar + spelling
                 + length + content);
    }
};

#endif

