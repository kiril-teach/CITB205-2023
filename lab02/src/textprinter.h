#ifndef LAB1_TEXTPRINTER_H
#define LAB1_TEXTPRINTER_H

#include <ostream>

#include "invoice.h"

class TextPrinter {
    public:
   void print(std::ostream &out, Invoice Invoice);
};


#endif //LAB1_TEXTPRINTER_H
