#include "../include/Symboletable.h"
#include <iostream>

using namespace std;

// Create empty table
Symboletable::Symboletable()
{
    for (int i = 0; i < 100; i++)
    { list[i] = NULL;}
}

Symboletable::~Symboletable()
{
    //dtor
}

// Function to insert 
bool Symboletable::insert(char id, float val)
{
    int index = hashf(id);
    Variable* p = new Variable(id, val);

    if (list[index] == NULL) {
        list[index] = p;
        return true;
    }

    else {
        Variable* start = list[index];
        while (start->next != NULL)
            start = start->next;

        start->next = p;


        return true;
    }

    return false;
}
//function
// Function to delete an id
bool Symboletable::deleteRecord(char id)
{
    int index = hashf(id);
    Variable* tmp = list[index];
    Variable* parentese = list[index];

    // no constante value is present at that index
    if (tmp == NULL) {
        return false;
    }
    // only one constante value is present
    if (tmp->getValue() == id && tmp->next == NULL) {
        tmp->next = NULL;
        delete tmp;
        return true;
    }

    while (tmp->getValue() != id && tmp->next != NULL) {
        parentese = tmp;
        tmp = tmp->next;
    }
    if (tmp->getValue() == id && tmp->next != NULL) {
        parentese->next = tmp->next;
        tmp->next = NULL;
        delete tmp;
        return true;
    }

    // delete at the end
    else {
        parentese->next = NULL;
        tmp->next = NULL;
        delete tmp;
        return true;
    }
    return false;
}

// Function to check existence of an id
char Symboletable::find(char id)
{
    int index = hashf(id);
    Variable* start = list[index];

    if (start == NULL)
        return -1;

    while (start != NULL) {

        if (start->getValue() == id) {
            cout << "Found " << id;
            return true;
        }

        start = start->next;
    }

    return -1; // not found
}

int Symboletable::hashf(char id)
{
    int asciiSum = 0;

    for (int i = 0; i < id; i++) {
        asciiSum = asciiSum + id;
    }

    return (asciiSum % 100);
}
