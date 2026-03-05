#include <iostream>
/*
You are running a website, and you are trying to calculate your advertising revenue. 
Write a program that allows you to enter 3 pieces of data:
How many ads were watched.
What percentage of users clicked on an ad.
The average earnings per clicked ad.
Store those 3 values in a struct. 
Pass that struct to another function that prints each of the values. 
The print function should also print how much you made for that day (multiply the 3 fields together).
*/

struct WebsiteData{
    int ads;
    int percent;
    int earnings;
};


void printData (WebsiteData data){
    std::cout   << "Ads: " << data.ads << "\n"
                << "Percent: " << data.percent << "\n"
                << "Earnings: " << data.earnings << "\n";
}
float calcEarnings(WebsiteData data){
    return data.ads * data.percent * data.earnings;
}

int main (){

    WebsiteData data{};

    std::cout << "Ads: ";
    std::cin >> data.ads;
    std::cout << "Percent: ";
    std::cin >> data.percent;
    std::cout << "Earnings: ";
    std::cin >> data.earnings;

    printData(data);

    int amount = calcEarnings(data);

    std::cout << "Total earnings from data: " << amount << "\n";

    return 0;
}