#include <folly/FBString.h>
#include <folly/Conv.h>
#include <iostream>

using namespace folly;
using namespace std;

int
main(void)
{
  fbstring str("Hello ");
  toAppend("Facebook Folly fbstring.", &str);

  cout << str << endl;

  return 0;
}
