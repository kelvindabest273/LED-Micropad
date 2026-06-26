#include "quantum.h"

led_config_t g_led_config = {
    // Key-to-LED index mapping
{
    { 0 },
    { 1 }, 
    { 2 }
},
    // Physical LED positions (x, y)
    {
        { 0, 0 },   // LED 0
        { 1, 0 },   // LED 1
        { 2, 0 }    // LED 2
    },

    // Flag info (all 0 = normal)
    {
        4, 4, 4
    }
};

//this file was made by chatgpt after i was diagnosing an error