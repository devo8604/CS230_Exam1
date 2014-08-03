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
//                        CLASS DESCRIPTION
//  The donation object - the person....
//
//
//*******************************************************************************

//*******************************************************************************
//              PROCESS THIS FILE ONLY ONCE PER PROJECT
#ifndef __CS230_Exam1__Donations__
#define __CS230_Exam1__Donations__
//
//======================================================================
//                     CONSTANT DEFINITIONS
//

//*******************************************************************************
//                  STANDARD AND USER DEFINED INCLUDES
#include <iostream>
#include <vector>
#include <time.h>
//*******************************************************************************
//                     USER DEFINED DATA TYPES
class Donations
{
public:
    Donations();
    Donations(std::string inName, int inDonation);
    std::string getName();
    int getDonation();
    int actualDonation(int povertyLevel);
    
private:
    std::string name;
    int donation;
};
//*******************************************************************************
//                    END OF CONDITIONAL BLOCK
#endif /* defined(__CS230_Exam1__Donations__) */
//*******************************************************************************
//                      END OF HEADER FILE
//*******************************************************************************