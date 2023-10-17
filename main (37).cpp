#include <iostream>
using namespace std;

class mammal {
  public:
    
    void mammals () {
      
      std::cout << "i am mammal:" <<  std::endl;
      
      return ;
    }
};

class Marine {
  public:
    
    void Marines () {
      //std::cout << "Mangos :" << mango << std::endl;
      
      std::cout << "i am marine:" << std::endl;
      
      return ;
    }
};

class bluewhale : public mammal,public Marine{
  public:
   void cal () {
     std::cout << " belongs to both:" << std::endl;
   }
};

int main() 
{
    bluewhale obj;
    obj.mammals();
    obj.Marines();
    obj.cal();
    return 0;
}





