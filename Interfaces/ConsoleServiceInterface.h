// For conditions of distribution and use, see copyright notice in license.txt

#ifndef incl_Interfaces_ConsoleServiceInterface_h
#define incl_Interfaces_ConsoleServiceInterface_h

#include "ServiceInterface.h"

namespace Console
{
    //! Interface for debug console
    class ConsoleServiceInterface : public Foundation::ServiceInterface
    {
    public:
        //! default constructor
        ConsoleServiceInterface() {}

        //! destructor
        virtual ~ConsoleServiceInterface() {}

        //! add time
        virtual void Update() {}

        //! Prints text to the console
        virtual void Print(const std::string &text) = 0;

        //! scroll console text rel amount
        virtual void Scroll(int rel) = 0;
    };

    typedef boost::shared_ptr<ConsoleServiceInterface> ConsolePtr;
}

#endif

