#include "Day.h"

Day:: Day(const int Date, int Year, int Week, bool Note)
{
    date=Date;
    week=week;
    note=Note;
    year=Year;
}

Day:: Day()
{
    date=0;
    week=' ';
    note=false;
    year=0;
}

void Day:: setDay(int Date)
{
    date=Date;
}

void Day:: setWeek(char Week)
{
    week=Week;
}

void Day:: setNote(bool Note)
{
     note=Note;
}

void Day:: setYear(int Year)
{
    year=Year;
}

void Day:: setMonth(string Month)
{
    month=Month;
}

int Day:: getYear()
{
    return(year);
}

int Day:: getDay() 
{
    return(date);
}

char Day:: getWeek() 
{
    return(week);
}

string Day:: getMonth()
{
    return month;
}

bool Day:: getNote()
{
    return(note);
}

bool Day:: DateTest(string month, int day, int year)
{
   if(day>0 && day<32 && year>2015 && year<2018)
  {
    if(month=="Aug")
    {
        return true;
    }
    else if(month=="Sep")
    {
        return true; 
    }
    else if(month=="Oct")
    {
        return true;
    }
    else if(month=="Nov")
    {
        return true; 
    }
     else if(month=="Dec")
    {
        return true;
    }
    else if(month=="Jan")
    {
        return true; 
    }
     else if(month=="Feb")
    {
        return true;
    }
    else if(month=="Mar")
    {
        return true; 
    }
     else if(month=="Apr")
    {
        return true;
    }
    else if(month=="May")
    {
        return true; 
    }
    else
    {
        return false;
        cout<<"Please input the month as what is demonstrated in the examples."<<endl;
    }
    //check the format of user's input of Current date.
  }
  else
  {
      cout<<"Please input valid day and year."<<endl;
      return false;
  }
}