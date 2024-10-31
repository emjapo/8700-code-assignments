#ifndef ZOO_H
#define ZOO_H

class Zoo {
   private:
    Zoo(/* args */);
    static Zoo* instance;
   public:
    static Zoo* Instance();
};



#endif