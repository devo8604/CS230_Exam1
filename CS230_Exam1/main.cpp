//*************************************************************************
// TITLE: 			   	   Exam 1
// FILENAME:               main.cpp
// PREPARED FOR:           CS230
// PROGRAMMER(S):          Devon J. Smith
// DEVELOPMENT DATE:       08/03/14
// COMPILER USED:          Apple LLVM Version 5.1
// TARGET PLATFORM:        Mac OS X i386 & x86_64
//=================================================================
//                           PROJECT FILES
//    <LIST ALL PROGRAM AND HEADER FILES IN THE PROJECT HERE>
//		main.cpp (main)
//		Donations.cpp
//		Donations.h
//=================================================================
//   		REVISION HISTORY
//   List revisions made to the Program
//
//   DATE     PROGRAMMER            DESCRIPTION OF CHANGES MADE
//	 08/03/14 Devon J. Smith        Original
//=================================================================
//   			PROGRAM DESCRIPTION
//  Gets a vector of people and calculates donations made. Also determines if the person is home
//  or not.
//
// INPUTS:   None
//
// OUTPUTS:  A list of people and how much they donated. Outputs total donations and expected donations
//
//=================================================================
//                          INCLUDE FILES
#include "Donations.h"
//
//=================================================================
//                        CONSTANT DEFINITIONS
//                             NONE
//
//=================================================================
//                      EXTERNAL CLASS VARIABLES
//                          NONE
//=================================================================

//*************************************************************************
//                     BEGINNING OF PROGRAM CODE
//*************************************************************************
using namespace std;

int main(int argc, const char * argv[])
{
    Donations d;
    vector<Donations> donationList;
    int expectedDonations = 0;
    int totalDonations = 0;
    srand((unsigned) time(NULL));
    
    donationList.push_back(Donations("Nelsons", d.actualDonation(2)));
    donationList.push_back(Donations("Hills", d.actualDonation(1)));
    donationList.push_back(Donations("Kings", d.actualDonation(3)));
    donationList.push_back(Donations("Martins", d.actualDonation(1)));
    donationList.push_back(Donations("Moores", d.actualDonation(2)));
    donationList.push_back(Donations("Wilsons", d.actualDonation(1)));
    donationList.push_back(Donations("Davis", d.actualDonation(3)));
    donationList.push_back(Donations("Browns", d.actualDonation(2)));
    donationList.push_back(Donations("Williams", d.actualDonation(2)));
    donationList.push_back(Donations("Johnsons", d.actualDonation(2)));
    donationList.push_back(Donations("Smiths", d.actualDonation(1)));
    donationList.push_back(Donations("Jones", d.actualDonation(2)));
    
    for (int i = 0; i < donationList.size(); i++)
    {
        int home = rand() %10;
        if (home > 6)
        {
            expectedDonations += donationList[i].getDonation();
            cout << "The " << donationList[i].getName() << " are not home and have been deffered." << endl;
        }
        else
        {
            expectedDonations += donationList[i].getDonation();
            totalDonations += donationList[i].getDonation();
            cout << "The " << donationList[i].getName() << " have donated $" << donationList[i].getDonation() << "." << endl;
        }
    }
    cout << "The expected total donation today was: $" << expectedDonations << endl;
    cout << "The actual total donation today was: $" << totalDonations << endl;
    return 0;
}
/*
 The Nelsons are not home and have been deffered.
 The Hills have donated $3.
 The Kings have donated $68.
 The Martins have donated $4.
 The Moores have donated $5.
 The Wilsons have donated $4.
 The Davis have donated $98.
 The Browns are not home and have been deffered.
 The Williams have donated $5.
 The Johnsons have donated $5.
 The Smiths are not home and have been deffered.
 The Jones have donated $5.
 The expected total donation today was: $208
 The actual total donation today was: $197
 */

