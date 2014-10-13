
/*  ev3_led.h was generated by yup.py (yupp) 0.7b6
    out of ev3_led.yu-h at 2014-10-13 18:06
 *//**
 *  \file  ev3_led.h (ev3_led.yu-h)
 *  \brief  EV3 LEDs.
 *  \author  Vitaly Kravtsov (in4lio@gmail.com)
 *  \copyright  See the LICENSE file.
 */

#ifndef EV3_LED_H
#define EV3_LED_H

#ifdef  EV3_LED_IMPLEMENT
#define EV3_LED_EXT
#define EV3_LED_EXT_INIT( dec, init ) \
	dec = init
#else
#define EV3_LED_EXT extern
#define EV3_LED_EXT_INIT( dec, init ) \
	extern dec
#endif

#ifndef COMMA
#define COMMA   ,
#endif

#include <stddef.h>
#include <stdint.h>
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 *  \defgroup ev3_led LEDs
 *  \brief Access to EV3 LEDs.
 *  \{
 */

/**
 *  \brief Identifiers of LEDs.
 */
enum {
	EV3_GREEN_LEFT,
	EV3_GREEN_RIGHT,
	EV3_RED_LEFT,
	EV3_RED_RIGHT,

	LED__COUNT_  /**< Count of EV3 LEDs. */
};

/**
 *  \brief Trigger indexes of LEDs.
 */
enum {
	TRIGGER_NONE,
	TRIGGER_MMC0,
	TRIGGER_TIMER,
	TRIGGER_HEARTBEAT,
	TRIGGER_DEFAULT_ON,
	TRIGGER_LEGOEV3_BATTERY_CHARGING_OR_FULL,
	TRIGGER_LEGOEV3_BATTERY_CHARGING,
	TRIGGER_LEGOEV3_BATTERY_FULL,
	TRIGGER_LEGOEV3_BATTERY_CHARGING_BLINK_FULL_SOLID,
	TRIGGER_PHY0RX,
	TRIGGER_PHY0TX,
	TRIGGER_PHY0ASSOC,
	TRIGGER_PHY0RADIO,
	TRIGGER_PHY0TPT,

	TRIGGER__COUNT_  /**< Count of EV3 triggers. */
};

#define LED_ATTR__COUNT_ 4

extern const char * const led_attr_brightness[];
/**
 *  \brief Get "brightness" attribute of the LED.
 *  \param id Identifier of the LED.
 *  \param[out] buf Buffer for result.

 *  \return Count of read bytes.
 */
EV3_LED_EXT size_t get_led_brightness( uint8_t id, int *buf );

/**
 *  \brief Set "brightness" attribute of the LED.
 *  \param id Identifier of the LED.
 *  \param value Attribute value.
 *  \return Count of written bytes.
 */
EV3_LED_EXT size_t set_led_brightness( uint8_t id, int value );
extern const char * const led_attr_delay_off[];
/**
 *  \brief Get "delay_off" attribute of the LED.
 *  \param id Identifier of the LED.
 *  \param[out] buf Buffer for result.

 *  \return Count of read bytes.
 */
EV3_LED_EXT size_t get_led_delay_off( uint8_t id, int *buf );

/**
 *  \brief Set "delay_off" attribute of the LED.
 *  \param id Identifier of the LED.
 *  \param value Attribute value.
 *  \return Count of written bytes.
 */
EV3_LED_EXT size_t set_led_delay_off( uint8_t id, int value );
extern const char * const led_attr_delay_on[];
/**
 *  \brief Get "delay_on" attribute of the LED.
 *  \param id Identifier of the LED.
 *  \param[out] buf Buffer for result.

 *  \return Count of read bytes.
 */
EV3_LED_EXT size_t get_led_delay_on( uint8_t id, int *buf );

/**
 *  \brief Set "delay_on" attribute of the LED.
 *  \param id Identifier of the LED.
 *  \param value Attribute value.
 *  \return Count of written bytes.
 */
EV3_LED_EXT size_t set_led_delay_on( uint8_t id, int value );
extern const char * const led_attr_trigger[];
/**
 *  \brief Get "trigger" attribute of the LED.
 *  \param id Identifier of the LED.
 *  \param[out] buf Buffer for result.
 *  \param sz Buffer size.
 *  \return Count of read bytes.
 */
EV3_LED_EXT size_t get_led_trigger( uint8_t id, char *buf, size_t sz );

/**
 *  \brief Set "trigger" attribute of the LED.
 *  \param id Identifier of the LED.
 *  \param value Attribute value.
 *  \return Count of written bytes.
 */
EV3_LED_EXT size_t set_led_trigger( uint8_t id, char *value );

/**
 *  \brief Triggers of LEDs.
 */
extern const char * const led_trigger[];

/**
 *  \brief Get "trigger" attribute (index) of the LED.
 *  \param id Identifier of the LED.
 *  \return Index of trigger or TRIGGER__COUNT_ - error has occurred.
 */
EV3_LED_EXT uint8_t get_led_trigger_inx( uint8_t id );

/**
 *  \brief Set "trigger" attribute of the LED by index.
 *  \param id Identifier of the LED.
 *  \param inx Index of trigger.
 *  \return Count of written bytes.
 */
EV3_LED_EXT size_t set_led_trigger_inx( uint8_t id, uint8_t inx );

/** \} */

#ifdef __cplusplus
}
#endif

#endif
