#include <iostream>

struct Web
{
    int adsWatched {0};
    double percentClicked {0.0};
    double clickEarnings {0.0};
};

Web collectStats()
{
    Web ad;
    std::cout << "How many ads were watched? ";
    std::cin >> ad.adsWatched;
    std::cout << "What percent of users clicked an ad? ";
    std::cin >> ad.percentClicked;
    std::cout << "What are the average click earnings? ";
    std::cin >> ad.clickEarnings;
    return ad;
}

void printStats(const Web& ad)
{
    std::cout << "Ads Watched: " << ad.adsWatched << std::endl;
    std::cout << "Ad click percent: " << ad.percentClicked << std::endl;
    std::cout << "Average earnings per click: " << ad.clickEarnings << std::endl;
    std::cout << "Total daily earnings: " << (ad.adsWatched * (.01 * ad.percentClicked) * ad.clickEarnings) << std::endl;
}

int main()
{
    Web ad = collectStats();
    printStats(ad);
}