# led_micropad

![led_micropad](https://private-user-images.githubusercontent.com/290562800/613536893-320fd68d-d708-412b-aec8-7af3b2c4455e.png?jwt=eyJ0eXAiOiJKV1QiLCJhbGciOiJIUzI1NiJ9.eyJpc3MiOiJnaXRodWIuY29tIiwiYXVkIjoicmF3LmdpdGh1YnVzZXJjb250ZW50LmNvbSIsImtleSI6ImtleTUiLCJleHAiOjE3ODI0NTkzNjEsIm5iZiI6MTc4MjQ1OTA2MSwicGF0aCI6Ii8yOTA1NjI4MDAvNjEzNTM2ODkzLTMyMGZkNjhkLWQ3MDgtNDEyYi1hZWM4LTdhZjNiMmM0NDU1ZS5wbmc_WC1BbXotQWxnb3JpdGhtPUFXUzQtSE1BQy1TSEEyNTYmWC1BbXotQ3JlZGVudGlhbD1BS0lBVkNPRFlMU0E1M1BRSzRaQSUyRjIwMjYwNjI2JTJGdXMtZWFzdC0xJTJGczMlMkZhd3M0X3JlcXVlc3QmWC1BbXotRGF0ZT0yMDI2MDYyNlQwNzMxMDFaJlgtQW16LUV4cGlyZXM9MzAwJlgtQW16LVNpZ25hdHVyZT1kODZhMjlmYmU3YTI0ZTYzMTI2ZGM5NjBkYTVmN2E0MmVmMjdkY2U4YWYzMzI1YzMxY2M5OGY5N2QyYmJhYWU2JlgtQW16LVNpZ25lZEhlYWRlcnM9aG9zdCZyZXNwb25zZS1jb250ZW50LXR5cGU9aW1hZ2UlMkZwbmcifQ.KgrDLF8V6xDsW2fwk_jTSUhPlIc3Zkj0duaPgoMh5kY)

*This is a macropad that has 3 keys (Num Lock, Caps Lock, and Scroll Lock), 3 LED indicators for the aforementioned, and a 0.91 inch 128x32 OLED screen that also, you guessed it, shows the status of aforementioned keys!*

* Keyboard Maintainer: [Zaheen](https://github.com/kelvindabest273)
* Hardware Supported: *Seeed XIAO RP2040*
* Hardware Availability: *https://github.com/kelvindabest273/LED-Micropad*

Make example for this keyboard (after setting up your build environment):

    make led_micropad:default

Flashing example for this keyboard:

    make led_micropad:default:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 2 ways:

* **Bootmagic reset**: Hold down the key at (0,0) in the matrix (usually the top left key or Escape) and plug in the keyboard
* **Physical reset button**: Briefly press the button on the back of the PCB - some may have pads you must short instead