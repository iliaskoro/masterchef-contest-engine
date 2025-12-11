cmake_minimum_required(VERSION 3.10)
project(MasterChefContestEngine)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Source structure
include_directories(src src/core src/competitions src/awards src/voting)

file(GLOB CORE_SRC
    "src/core/*.cpp"
    "src/core/*.h"
)

file(GLOB COMPETITION_SRC
    "src/competitions/*.cpp"
    "src/competitions/*.h"
)

file(GLOB AWARD_SRC
    "src/awards/*.h"
)

file(GLOB VOTING_SRC
    "src/voting/*.cpp"
    "src/voting/*.h"
)

add_executable(masterchef
    ${CORE_SRC}
    ${COMPETITION_SRC}
    ${AWARD_SRC}
    ${VOTING_SRC}
)