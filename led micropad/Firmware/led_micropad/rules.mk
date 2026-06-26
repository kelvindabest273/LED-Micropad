OLED_ENABLE = yes
OLED_TRANSPORT = i2c
OLED_DRIVER = ssd1306

ENCODER_ENABLE = yes
ENCODER_MAP_ENABLE = yes
# required for rp2040
LTO_ENABLE = yes

#everything above taken from https://github.com/hackclub/hackpad/blob/clean/extras/orpheuspad/firmware/QMK/rules.mk

RGB_MATRIX_ENABLE = yes
RGB_MATRIX_DRIVER = ws2812
WS2812_DRIVER = vendor
MCU = RP2040 #written by chatgpt