#include "Grades.h"

bool ReadFile(string studentNames[], double average[], int& numStudents)
{
    ifstream input;
    input.open(FILE_IN);

    if (!input) {
        return false; 
    }
    double grades[TOTAL] = {};
    int n{ 0 };
    while (!input.eof() && n< TOTAL) 
    {
        getline(input, studentNames[n], ' ');
        //now read the grades
        for (int i = 0; i < TOTAL; ++i)
        {
            input >> grades[i];
        }
        input.ignore();
        average[n] = CalcAverage(grades);
        n++;
    }
    numStudents = n;
    input.close();
    return true; 

}

bool WriteFile(string studentNames[], double average[], int& numStudents)
{
    ofstream output;
    output.open(FILE_OUT);
    if (!output)
    { 
        return false; 
    }
    output << "\n The class averages are: \n";
    for (int i = 0; i < TOTAL; i++) 
    {
        output << setw(15) << studentNames[i] << setw(8) << average[i];
    }
}

double CalcAverage(double grades[])
{
    double sum{ 0.0 };
    for (int i = 0; i < TOTAL; i++)
    {
        sum += grades[i];
    }
    return sum / TOTAL; 
}
