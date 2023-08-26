#include <iostream>

void printMenu()
{
    std::cout << "Choose options from the menu" << std::endl;
    std::cout << "____________________________" << std::endl;

    std::cout << "0: Exit " << std::endl;
    std::cout << "1: Print help " << std::endl;
    std::cout << "2: Print exchange stats " << std::endl;
    std::cout << "3: Place an ask " << std::endl;
    std::cout << "4: Place a bid " << std::endl;
    std::cout << "5: Print wallet " << std::endl;
    std::cout << "6: Continue " << std::endl;
    std::cout << "____________________________" << std::endl;
}

void printHelp()
{
    std::cout << "Help - your aim is to make money." << std::endl;
    std::cout << "Analyse the market and make bids" << std::endl;
    std::cout << "and offers. " << std::endl;
}

int getUserOption()
{
    std::cout << "Type in 0-6" << std::endl;
    int choice;
    std::cin >> choice;
    return choice;
}

void printMarketStats()
{
    std::cout << "==================================" << std::endl;
    std::cout << "Exchange status is not implemented yet!" << std::endl;
    std::cout << "==================================" << std::endl;
}

void enterAsk()
{
    std::cout << "==================================" << std::endl;
    std::cout << "Ask is not implemented yet!" << std::endl;
    std::cout << "==================================" << std::endl;
}

void enterBid()
{
    std::cout << "==================================" << std::endl;
    std::cout << "Bid is not implemented yet!" << std::endl;
    std::cout << "==================================" << std::endl;
}

void printWallet()
{
    std::cout << "==================================" << std::endl;
    std::cout << "Wallet is not implemented yet!" << std::endl;
    std::cout << "==================================" << std::endl;
}

void gotoNextTimeframe()
{
    std::cout << "==================================" << std::endl;
    std::cout << "Continue!" << std::endl;
    std::cout << "==================================" << std::endl;
}

void processUserOption(int userOption)
{
    if (userOption > -1 && userOption < 7)
    {
        switch (userOption)
        {
        case 1:
            printHelp();
            break;
        case 2:
            printMarketStats();
            break;
        case 3:
            enterAsk();
            break;
        case 4:
            enterBid();
            break;
        case 5:
            printWallet();
            break;
        case 6:
        default:
            gotoNextTimeframe();
            break;
        }
    }
    else
    {
        std::cout << "You entered: " << userOption << " Your choice shall be bigger than -1 and less than 7!, Type 0 to exit!" << std::endl;
    }
}

int main()
{
    // ... more options here
    int userOption = 100;
    bool wantToTrade = true;
    printMenu();
    userOption = getUserOption();
    while (userOption != 0)
    {
        processUserOption(userOption);
        userOption = getUserOption();
        printMenu();
    }

    return 0;
}