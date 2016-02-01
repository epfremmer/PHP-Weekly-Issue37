cmake_minimum_required(VERSION 3.3)

project(Issue_37c)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp
        src/Args.cpp src/Args.h
        src/Const/Buzzwords.h
        src/Counter/SearchResultCounter.cpp src/Counter/SearchResultCounter.h
        src/Entity/Buzzword.cpp src/Entity/Buzzword.h
        src/Entity/SearchableString.cpp src/Entity/SearchableString.h
        src/Factory/BuzzwordFactory.cpp src/Factory/BuzzwordFactory.h
        src/Finder/BuzzwordFinder.cpp src/Finder/BuzzwordFinder.h
        src/Result/BuzzwordResult.cpp src/Result/BuzzwordResult.h)

add_executable(Issue_37c ${SOURCE_FILES})

target_link_libraries(Issue_37c curl)