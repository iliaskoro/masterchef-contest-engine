//Ηλίας Κορομπίλης 8993 iliakoro@ece.auth.gr
//Γεωργούλας Διονύσης 8949 georgould@ece.auth.gr
#ifndef VOTE_H_INCLUDED
#define VOTE_H_INCLUDED
#include <iostream>
#include <string>

class Vote
{

    protected:
        std::string voted,reason; //μεταβλητές voted (ποιός ψηφίστηκε) και reason (ο λόγος που ψηφίστηκε)

    public:
        Vote(); //κενός constructor
        Vote(std::string v,std::string r); //constructor με ορίσματα
        void status(Vote); //συνάρτηση τύπου void που τυπώνει τα αποτελέσματα της ψηφοφορίας

        void set_voted(std::string v); //setter για τη μεταβλητή voted
        void set_reason(std::string r); //setter για τη μεταβλητή reason
        std::string get_voted(); //getter για τη μεταβλητή voted
        std::string get_reason(); //getter για τη μεταβλητή reason

};

#endif

Vote::Vote()
{

}
Vote::Vote(std::string v,std::string r)
:voted(v),reason(r)
{

}
void Vote::status(Vote)
{
    cout<<voted<<" has been voted for "<<reason<<endl;
}
void set_voted(std::string v)
{
    voted=v;
}
void set_reason(std::string r)
{
    reason=r;
}
std::string get_voted()
{
    return voted;
}
std::string get_reason()
{
    return reason;
}
