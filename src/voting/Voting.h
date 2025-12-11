//Ηλίας Κορομπίλης 8993 iliakoro@ece.auth.gr
//Γεωργούλας Διονύσης 8949 georgould@ece.auth.gr
#ifndef VOTING_H_INCLUDED
#define VOTING_H_INCLUDED
#include <iostream>
#include <string>
#include <vector>
#include <map>

class Voting: public Vote{

    private:
        static std::vector<Vote> votes; //δυναμικός πίνακας votes
        static std::map <std::string,int> results; //χάρτης
    public:
        static void votingProcess(Team &Team); //Το 1ο μέρος της συνάρτησης που μας ζητείται
        static void votingEvaluation(Team &Team); //Το 2ο μέρος της συνάρτησης που μας ζητείται

};

#endif
