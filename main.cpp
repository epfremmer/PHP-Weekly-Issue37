#include <iostream>

#include "src/Args.h"
#include "src/Const/Buzzwords.h"
#include "src/Counter/SearchResultCounter.h"
#include "src/Finder/BuzzwordFinder.h"
#include "src/Factory/BuzzwordFactory.h"

int main(int argc, char *argv[]) {
    Args args(argc, argv);
    auto input = args.getInput();

    BuzzwordFinder *buzzwordFinder = new BuzzwordFinder(input);
    BuzzwordFactory *buzzwordFactory = new BuzzwordFactory();
    SearchResultCounter *resultCounter = new SearchResultCounter();

    for(auto const &value: BUZZWORDS) {
        Buzzword *buzzword = buzzwordFactory->make(value);
        BuzzwordResult *result = buzzwordFinder->find(buzzword);

        resultCounter->add(result);
    }

    std::cout << *resultCounter;

    exit(EXIT_SUCCESS);
}