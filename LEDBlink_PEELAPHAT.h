#ifndef LEDBlink_PEELAPHAT_h
#define LEDBlink_PEELAPHAT_h

#include "Arduino.h"

class LEDBlink_PEELAPHAT {
    public:
        const char* Set_LED_Blink(int pin, long time);
    
    private:
        int _pin;
        long _time;
        unsigned long _lasttime = 0;
        bool _state = false;
        const char* _response;
};

#endif