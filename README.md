# LED Micropad
This is a macropad that has 3 keys (Num Lock, Caps Lock, and Scroll Lock), 3 LED indicators for the aforementioned, and a 0.91 inch 128x32 OLED screen that also, you guessed it, shows the status of aforementioned keys!

Render of the macropad:
<img width="1227" height="718" alt="Render of the LED Micropad" src="https://github.com/user-attachments/assets/320fd68d-d708-412b-aec8-7af3b2c4455e" />

Front of the case:
<img width="1317" height="726" alt="Front of case" src="https://github.com/user-attachments/assets/8318a160-347d-40f5-ac07-3e7ed6f11f74" />

Back of the case:
<img width="1282" height="737" alt="Back of case" src="https://github.com/user-attachments/assets/4f7fbfea-70a1-430c-a07a-258a908983d6" />

Schematic:
<img width="1507" height="865" alt="Schematic" src="https://github.com/user-attachments/assets/d3b197a9-bdb1-4632-a78d-1dfb9dec17e4" />

PCB Layout:
<img width="593" height="795" alt="PCB layout" src="https://github.com/user-attachments/assets/c57f93d8-6024-48cc-80b9-ff653e5291b1" />

BOM: \
1x Seeed XIAO RP2040 \
3x SK6812MINI-E LEDs \
1x EC11 Rotary Encoder \
1x 0.91 OLED 128x32 screen \
3x Cherry MX-style switches \
1x PCB (not sure if this should be included) \
1x 3D Printed Case (not sure if this should be included)

# Resources that I used to help me make this:
I used help from ChatGPT (before you get mad some of this code was like reading an ancient language) \
https://files.seeedstudio.com/wiki/XIAO-RP2040/res/Seeed-Studio-XIAO-RP2040-v1.3.pdf (this one especially) \
https://github.com/HEofOttoman/hackpadbludprintmacro/blob/main/firmware/henrywausbloodyhackbludpad/keyboard.json (and this too) \ 
https://docs.qmk.fm/config_options \
https://docs.qmk.fm/features/oled_driver \
https://docs.qmk.fm/features/led_indicators \
https://docs.qmk.fm/custom_quantum_functions \
https://docs.qmk.fm/features/rgb_matrix \
https://docs.qmk.fm/drivers/ws2812 \
https://docs.qmk.fm/data_driven_config \
https://github.com/Keychron/qmk_firmware/tree/2025q3/keyboards/keychron/v3/ansi/keymaps (just look around here, tho you might not find much here)
