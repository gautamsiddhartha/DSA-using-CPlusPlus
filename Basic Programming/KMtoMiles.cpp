#include <iostream>>
using namespace std;
  
int kmTOm(int km)
{
    return 0.6214 * km;
}

int mTOkm(int m)
{
    return m * 1.60934;
}
  
int main()
{
    int km = 150;
    int m = 100;
    cout << "the speed in mph is " << kmTOm(km) << endl;
    cout << "the speed in kmph is " << mTOkm(m);
  
    return 0;
}