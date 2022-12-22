BOOTMAGIC_ENABLE = no       # Enable Bootmagic Lite
MOUSEKEY_ENABLE = no        # Mouse keys
EXTRAKEY_ENABLE = no        # Audio control and System control
CONSOLE_ENABLE = no         # Console for debug
COMMAND_ENABLE = no         # Commands for debug and configuration
NKRO_ENABLE = no
BACKLIGHT_ENABLE = no 		# Enable keyboard backlight functionality
BACKLIGHT_DRIVER = no 		# Driver for LEDs
AUDIO_ENABLE = no           # Audio output
RGBLIGHT_ENABLE = yes       # Enable WS2812 RGB underlight.
SWAP_HANDS_ENABLE = no      # Enable one-hand typing
OLED_ENABLE= yes     		# OLED display
WPM_ENABLE = yes 			# Word per Minute calculation


# If you want to change the display of OLED, you need to change here
SRC +=  ./keymaps/moonxraccoon/rgb_state_reader.c \
        ./keymaps/moonxraccoon/layer_state_reader.c \
        ./keymaps/moonxraccoon/logo_reader.c \
        ./keymaps/moonxraccoon/keylogger.c
        # ./lib/mode_icon_reader.c \
        # ./lib/host_led_state_reader.c \
        # ./lib/timelogger.c \
