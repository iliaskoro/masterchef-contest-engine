//Ηλίας Κορομπίλης 8993 iliakoro@ece.auth.gr
//Γεωργούλας Διονύσης 8949 georgould@ece.auth.gr
#include <Voting.h>
#include <Player.h>
#include <Team.h>
#include <iostream>
#include <string>

Voting::votes=0; //αρχικοποίηση της μεταβλητής votes

//Η συνάρτηση που μας ζητείται να υλοποιήσουμε
Voting::static void votingProcess(Team &Team)
{
    //εάν ο αριθμός των ψήφων είναι διαφορετικός από τους παίκτες της ομάδας+1 (το +1 προκύπτει γτ ο παίκτης με την ασυλία έχει μία παραπάνω ψήφο)
    if ( std::size(votes) != (result+1) )
    {
        Vote object(std::string v,std::string r); //δημιουργία ανικειμένου έως ότου φτάσουν στον επιθυμητό αριθμό
        votes=votes+Vote; //προσθέτει το αντικείμενο στον vector
    }

    void status(Vote); //τυπώνει την παρούσα κατάσταση της ψηφοφορίας
    votingEvaluation(Team &Team); //το 2ο κομμάτι της κύριας συνάρτησης που ζητείται
}
//2o μέρος της συνάρτησης που ζητείται
Voting::static void votingEvaluation(Team &Team)
{
    if ( std::size(votes) != (result+1) )//εάν μετρήθηκαν όλες οι ψήφοι
    {
        std::find(<result>)
        std::inserter(pair<voted,0>)//πρόσθεση ζεύγους παίκτη που ψηφίστηκε με τον αριθμό των ψήφων που πηήρε
    }

}
