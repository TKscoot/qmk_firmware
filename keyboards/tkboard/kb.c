#include "kb.h"
#include "led.h"


void led_init_ports(void)
{
    DDRB |= (1<<7);
}

void led_set_kb(uint8_t usb_led)
{
    led_set_user(usb_led);
    if(usb_led & (1<<USB_LED_NUM_LOCK))
    {
        PORTB |= (1<<7);
    }
    else
    {
        PORTB &= ~(1<<7); 
    }
}
