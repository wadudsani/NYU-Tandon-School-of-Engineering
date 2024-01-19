#include <iostream>
using namespace std;

int main()
{
int john_work_in_day, john_work_in_hour, john_work_in_minutes;
int bill_work_in_day, bill_work_in_hour, bill_work_in_minutes;
int total_num_day, total_num_hour, total_num_minutes, all_Work, day_of_work, day_of_hour, day_of_minutes, remaining_minutes ;

cout << "Please enter the number of days John has worked:" << endl;
cin >> john_work_in_day;
cout << "Please enter the number of hour John has worked:" << endl;
cin >> john_work_in_hour; 
cout << "Please enter the number of minutes John has worked:" << endl;
cin >> john_work_in_minutes;

cout << "Please enter the number of days Bill has worked:" << endl;
cin >> bill_work_in_day;
cout << "Please enter the number of hour Bill has worked:" << endl;
cin >> bill_work_in_hour; 
cout << "Please enter the number of minutes Bill has worked:" << endl;
cin >> bill_work_in_minutes;


// Calculate the total numbert of day
total_num_day = john_work_in_day + bill_work_in_day;

// Calculate the total numbert of hour
total_num_hour = john_work_in_hour + bill_work_in_hour;

// Calculate the total numbert of minutes
total_num_minutes = john_work_in_minutes + bill_work_in_minutes;

// Calculating all work of both john & bill to minutes
all_Work = total_num_day * 24*60 + total_num_hour * 60 + total_num_minutes;

// Converting all work of both john & bill to day, hour & minutes  
day_of_work = all_Work / (24*60);
remaining_minutes = all_Work % (24*60);
day_of_hour = remaining_minutes / 60;
day_of_minutes = remaining_minutes % 60;


cout << "The total time both of them worked together is: " << day_of_work <<" days, "<< day_of_hour <<" hours, " << day_of_minutes <<" minutes" << endl;

return 0;

}