#include "LEDBlink_PEELAPHAT.h"

const char* LEDBlink_PEELAPHAT::Set_LED_Blink(int pin, const long time){
    _pin = pin;
    _time = time;

    pinMode(_pin, OUTPUT);

    if (millis() - _lasttime >= _time){
        _lasttime = millis();
        _state = !_state;
        
        digitalWrite(_pin, _state);
    
        if(_state){
            _response = "LED ON";
        }else{
            _response = "LED OFF";
        }
        
        return _response;
    }
}