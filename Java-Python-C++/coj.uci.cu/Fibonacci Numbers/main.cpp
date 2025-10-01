// Problem: Fibonacci Numbers
// Code: 1596
// Site: coj.uci.cu
// Status: Pending

// ############################################
// [C++] Computing very large Fibonacci numbers
//       using the primary formula
//       F(n) = F(n-1) + F(n-2), n > 1;
//       F(1) = 1,
//       F(0) = 0.
//       --------------------------------------
//       Version 2.7.8 (with performance test)
// --------------------------------------------
// Copyright (C) 1999-2004 Alex Vinokur
// mailto:alexvn@connect.to
// http://mathforum.org/library/view/10978.html
// --------------------------------------------
// Copyright (C) 2004 John Harrison, vector.reserve()-related improvement
// ############################################


#include <cstdlib>
#include <cassert>
#include <string>
#include <sstream>
#include <vector>
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <functional>
using namespace std;


#define MAX_VALUE(x,y)  ((x) > (y) ? (x) : (y))
#define ASSERT(x)
// #define ASSERT(x)    assert(x)


#define MAX_UNIT_VALUE  (ULONG_MAX >> 2)
#define BASE1  10
#define BASE2  1000000000   // BASE1 ** (BASE1 - 1)


#if (BASE2 >= MAX_UNIT_VALUE)
#error Compilation Error-1 : (BASE2 >= MAX_UNIT_VALUE)
#endif

#if (!(BASE1 * (BASE2/BASE1 + 1) < MAX_UNIT_VALUE))
#error Compilation Error-2 : (!(BASE1 * (BASE2/BASE1 + 1) < MAX_UNIT_VALUE))
#endif


typedef unsigned long ulong;


// =========
static ulong  head_s = 0;
ulong add_units(const ulong n1, const ulong n2)
{
const ulong value (n1 + n2 + head_s);
  head_s = value/BASE2;
  return (value%BASE2);
}


// =========
class BigInt
// =========
{
friend ostream& operator<< (ostream& os, const BigInt& ins_i);

  private :
    vector<ulong> units_;

  public :
    BigInt (ulong unit_i) 
    {
      ASSERT (unit_i < BASE2);
      // ---------------------
      // The reserve() has been added under the influence of the John Harrison's improvement
      // See method get_number (ulong no_i)
      units_.reserve(units_.size() + 1);
      // ---------------------
      units_.push_back (unit_i);
    }

    BigInt (BigInt& big1_i, BigInt& big2_i)
    { 
      const ulong max_size (MAX_VALUE (big1_i.units_.size (), big2_i.units_.size ()));

      // ---------------------
      // The reserve()'s have been added under the influence of the John Harrison's improvement
      // See method get_number (ulong no_i)
      big1_i.units_.reserve(max_size);
      big2_i.units_.reserve(max_size);
      units_.reserve(max_size + 1);
      // ---------------------

      big1_i.units_.resize(max_size);
      big2_i.units_.resize(max_size);
      units_.resize(max_size);

      head_s = 0;
      transform (&big1_i.units_[0], &big1_i.units_[0] + max_size, &big2_i.units_[0], &units_[0], add_units);

      if (head_s) units_.push_back (head_s);

    }

};


// --------------
inline ostream& operator<< (ostream& os, const BigInt& ins_i)
{
  ASSERT (!ins_i.units_.empty ());
  for (ulong i = (ins_i.units_.size () - 1); i; --i) 
  {
    os << ins_i.units_ [i] << setw (BASE1 - 1) << setfill ('0');
  }
  return os << ins_i.units_ [0];
}


// ============
class Fibonacci
// ============
{
  private :
    vector<BigInt>   fibs_;
    BigInt           get_number (ulong no_i = 0);

  public :
    void             show_all_numbers () const;
    void             show_last_number () const;
    void             show_number (ulong no_i);

    Fibonacci (ulong no_i = 0) { get_number (no_i); }
    ~Fibonacci () {}

};



// -----------------------
BigInt Fibonacci::get_number (ulong no_i)
{
  if (no_i < fibs_.size()) return fibs_ [no_i];

  // ---------------------
  // The improvement below has been proposed by John Harrison
  // in http://groups.google.com/groups?selm=c58obb%242qat6b%241%40ID-196037.news.uni-berlin.de
  fibs_.reserve(no_i + 1); 
  // ---------------------


  for (ulong i = fibs_.size (); i <= no_i; ++i)
  {
    switch (i)
    {
      case 0 :
        fibs_.push_back (BigInt(0));
        break;

      case 1 :
        if (fibs_.empty ()) fibs_.push_back (BigInt (0));
        fibs_.push_back(BigInt (1));
        break;

      default :
        // fibs_.push_back (BigInt (get_number (i - 2), get_number (i - 1)));
        fibs_.push_back (BigInt (fibs_ [i - 2], fibs_ [i - 1]));
        break;
    }
  }

  ASSERT (no_i == (fibs_.size() - 1));
  // return fibs_ [no_i];
  return *fibs_.rbegin();

}


// -----------------------
void Fibonacci::show_all_numbers () const
{
ostringstream   oss;

  for (ulong i = 0; i < fibs_.size (); ++i)
  {
    oss << "Fib [" << i << "] = " << fibs_ [i] << "\n";
  }
  cout << oss.str(); 
}


// -----------------------
void Fibonacci::show_last_number () const
{
ostringstream   oss;

  oss << "Fib [" << (fibs_.size() - 1) << "] = " << fibs_.back() << "\n";

  cout << oss.str(); 
}



// -----------------------
void Fibonacci::show_number (ulong no_i)
{
ostringstream   oss;

  oss << "Fib [" << no_i << "] = " << get_number (no_i) << "\n";

  cout << oss.str(); 
}




// ==============================
#define ALL_FIBS  "all"
#define TH_FIB    "th"
#define SOME_FIBS "some"
#define RAND_FIBS "rand"

#define MAX_RAND_FIB   25000

#define SETW1      4

// ---------------------
void usage (char **argv)
{
  cerr << "USAGE : " 
       << endl

       << "  " 
       << argv[0] 
       << " " 
       << setw (SETW1)
       << std::left
       << ALL_FIBS   
       << " <N>              ---> Fibonacci [0 - N]" 
       << endl

       << "  " 
       << argv[0] 
       << " " 
       << std::left
       << setw (SETW1)
       << TH_FIB 
       << " <N>              ---> Fibonacci [N]" 
       << endl

       << "  " 
       << argv[0] 
       << " " 
       << std::left
       << setw (SETW1)
       << SOME_FIBS  
       << " <N1> [<N2> ...]  ---> Fibonacci [N1], Fibonacci [N2], ..." 
       << endl

       << "  " 
       << argv[0] 
       << " " 
       << std::left
       << setw (SETW1)
       << RAND_FIBS  
       << " <K>  [<M>]       ---> K random Fibonacci numbers ( < M; Default = " 
       << MAX_RAND_FIB 
       << " )" 
       << endl;
}


// ---------------------
string check (int argc, char **argv)
{
  if (argc < 3) return string();

const string str (argv[1]);
  if (
       (str == ALL_FIBS) 
       || 
       (str == TH_FIB) 
       || 
       (str == SOME_FIBS) 
       || 
       (str == RAND_FIBS)
     )
  {
    return str;
  }
  return string();

}


// ---------------------
#include <ctime>
int main (int argc, char **argv)
{
const string option (check (argc, argv));
  if (option.empty())
  {
    usage (argv);
    return 1;
  }

const ulong N = atol (argv[2]);

clock_t clock_start_computation = clock();
clock_t clock_end_computation   = clock_start_computation;
  assert (clock_start_computation != clock_t (-1));
  assert (clock_end_computation != clock_t (-1));

bool computation_time_flag (false);

const clock_t clock_start_overall = clock();

  if (option == ALL_FIBS) 
  { 
    clock_start_computation = clock();
    // -------------
    Fibonacci fib(N);
    // -------------
    clock_end_computation = clock();
    assert (clock_start_computation != clock_t (-1));
    assert (clock_end_computation != clock_t (-1));
    computation_time_flag = true;

    fib.show_all_numbers(); 

  }

  if (option == TH_FIB)   
  { 
    clock_start_computation = clock();
    // -------------
    Fibonacci fib(N);
    // -------------
    clock_end_computation = clock();
    assert (clock_start_computation != clock_t (-1));
    assert (clock_end_computation != clock_t (-1));
    computation_time_flag = true;

    fib.show_last_number(); 
  }

  if (option == SOME_FIBS)
  {
    Fibonacci fib;
    for (int i = 2; i < argc; i++) fib.show_number (atoi(argv[i]));
  }

  if (option == RAND_FIBS)
  {
    const int max_rand_fib = (argc == 3) ? MAX_RAND_FIB : atoi (argv[3]);
    Fibonacci fib;
    for (ulong i = 0; i < N; i++) fib.show_number (rand()%max_rand_fib);
  }

const clock_t clock_end_overall = clock();

  assert (clock_start_overall != clock_t (-1));
  assert (clock_end_overall != clock_t (-1));


  if (computation_time_flag)
  {
    cerr << "Computation time : " << (double (clock_end_computation - clock_start_computation)/CLOCKS_PER_SEC) << endl;
  }
  cerr << "Overall time     : " << (double (clock_end_overall - clock_start_overall)/CLOCKS_PER_SEC) << endl;

  return 0;
}


