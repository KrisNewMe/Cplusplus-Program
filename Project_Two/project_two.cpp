//
//  project_two.cpp
//  PROJECT_TWO
//
//  Created by Kristopher Collis on 1/26/22.
//

#include "project_two.hpp"


using namespace std;

void Display::SetInputDisplay ()
{
  cout << "*******************************************************" << endl;
  cout << "******************** Data Input ***********************" << endl;
  cout << "Enter Inital Investment Amount:  ";
  cin >> m_initalAmount;
  cout << "Enter Monthly Deposit:  ";
  cin >> m_monDeposit;
  cout << "Enter Annual Interest:  ";
  cin >> m_annInterest;
  cout << "Enter Number of Years:  ";
  cin >> m_numberYears;
  cout << "Press any key to continue . . ." << endl;

  cin.get ();
  system ("clear");
  cout << endl;
  cout << "*******************************************************" << endl;
  cout << "******************** Data Input ***********************" << endl;
  cout << "Inital Investment Amount:  " << "$" << fixed << setprecision (2) <<
    m_initalAmount << endl;

  cout << "Enter Monthly Deposit:  " << "$" << m_monDeposit << endl;
  cout.unsetf (ios::fixed);
  cout << "Enter Annual Interest:  " << "%" << m_annInterest << endl;
  cout << "Enter Number of Years:  " << m_numberYears << endl;
  cout << "Press any key to continue . . ." << endl;
  cin.get ();
  system ("clear");
}
  //balance and interest without monthly deposit
void Display::SetBalanceWithoutDeposit ()
{
  cout << "     Balance and Interest Without Additional Monthly Deposit" << endl;
  cout << "====================================================================" << endl;
  cout << "Year              Year End Balance          Year End Earned Interest" << endl;
  cout << "--------------------------------------------------------------------" << endl;
  
  double t_openAmount = m_initalAmount;
  for (int i = 1; i <= m_numberYears; ++i)
  {
    double openAmountTotal = (t_openAmount) * ((m_annInterest / 100));	// example $.05
    t_openAmount = t_openAmount + openAmountTotal;	// 1.05
    cout << "   " << i << "                   " << fixed << setprecision (2)
	  << t_openAmount << "                           " << openAmountTotal << endl;
  }

  cout << endl;
  cout << endl;
}
  //balance and interest with monthly deposit
void Display::SetBalanceWithDeposit ()
{
  cout << "   Balance and Interest With Additional Monthly Deposit" << endl;
  cout << "====================================================================" << endl;
  cout << "Year              Year End Balance          Year End Earned Interest" << endl;
  cout << "--------------------------------------------------------------------" << endl;

  double t_openAmount = m_initalAmount;
  int months = 12;
  
  // for loop for the amount of user years
  for (int i = 1; i <= m_numberYears; ++i)
  {
    double t_yearInterest = 0;
     
      //loop for monthly coupound interest
     for (int m = 0; m < months; ++m)
	   {
	    double openAmountTotal =
	    (t_openAmount + m_monDeposit) * ((m_annInterest / 100 / 12));
	    t_yearInterest = t_yearInterest + openAmountTotal;
	    t_openAmount = t_openAmount + openAmountTotal + m_monDeposit;
	      
	      //if loop to only print out years
	      if (m / 11 == 1)
	      {
	      cout << "   " << i << "                  " << fixed <<
		    setprecision (2) << t_openAmount <<
		    "                           " << t_yearInterest << endl;
	      }
	   }
  }

}
// Getter
double
Display::GetInputDisplay () const 
{
  return m_initalAmount;
  return m_monDeposit;
  return m_annInterest;
  return m_numberYears;

}

// Getter
double
Display::GetBalanceWithoutDeposit () const 
{
  return m_initalAmount;
  return m_annInterest;
  return m_numberYears;
}

// Getter
double
Display::GetBalanceWithDeposit () const 
{
  return m_initalAmount;
  return m_annInterest;
  return m_numberYears;
  return m_monDeposit;
}
