//Example from
//https://stackoverflow.com/questions/22387586/measuring-execution-time-of-a-function-in-com

#include <chrono>   ///< chrono_literals is new in c++14

/* Only needed for the sake of this example. */
#include <iostream>
#include <thread>

void long_operation()
{
  /* Simulating a long, heavy operation. */

  using namespace std::chrono_literals;
  std::this_thread::sleep_for(150ms);
}

int main()
{
  using std::chrono::high_resolution_clock;
  using std::chrono::duration_cast;
  using std::chrono::duration;
  using std::chrono::milliseconds;


  //---------------------------------------------------
  auto t1 = high_resolution_clock::now();
  long_operation();
  auto t2 = high_resolution_clock::now();

  /* Getting number of milliseconds as an integer. */
  auto ms_int = duration_cast<milliseconds>(t2 - t1);

  /* Getting number of milliseconds as a double. */
  duration<double, std::milli> ms_double = t2 - t1;

  std::cout << ms_int.count() << "ms\n";
  std::cout << ms_double.count() << "ms\n";


  //---------------------------------------------------
  t1 = high_resolution_clock::now();
  long_operation();
  t2 = high_resolution_clock::now();

  ms_int = duration_cast<milliseconds>(t2 - t1);
  ms_double = t2 - t1;

  std::cout << ms_int.count() << "ms\n";
  std::cout << ms_double.count() << "ms";
  return 0;
}

