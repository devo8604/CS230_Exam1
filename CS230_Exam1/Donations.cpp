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
//*******************************************************************************
//                               CONSTANTS
//
//*******************************************************************************
//                  STANDARD AND USER DEFINED INCLUDES
#include "Donations.h"
#include <vector>
#include <time.h>
using namespace std;
//*******************************************************************************
//             Definition of member functions for class Entry
//*******************************************************************************

string name;
int donation;

Donations::Donations() {}

Donations::Donations(string inName, int inDonation)
{
    name = inName;
    donation = inDonation;
}

string Donations::getName()
{
    return name;
}

int Donations::getDonation()
{
    return donation;
}

int Donations::actualDonation(int povertyLevel)
{
    int donationReturn = 0;
    
    if (povertyLevel == 1)
    {
        donationReturn = rand() %4 + 1;
    }
    else if (povertyLevel == 2)
    {
        donationReturn = 5;
    }
    else if (povertyLevel == 3)
    {
        donationReturn = rand() %95 + 5;
    }
    return donationReturn;
}



