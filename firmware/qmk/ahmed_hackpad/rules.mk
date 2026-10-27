# Processor architecture (also declared in keyboard.json)
MCU = RP2040
BOOTLOADER = rp2040

# Direct-pin wiring: no traditional matrix scanning
MATRIX_ENABLE = no
DIRECT_PINS_ENABLE = yes
CUSTOM_MATRIX = no

# Rotary encoder support
ENCODER_ENABLE = yes

# Media keys (Previous/Next/Play/Mute/Volume)
EXTRAKEY_ENABLE = yes