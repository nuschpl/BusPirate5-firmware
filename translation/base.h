#ifndef _TRANSLATION_BASE
#define _TRANSLATION_BASE
void translation_init(void);
void translation_set(uint32_t language);

extern char **t;

enum T_translations{
	T_ON=0,
	T_OFF,
	T_GND,
	T_INPUT,
	T_OUTPUT,
	T_EXIT,
	T_LOADED,
	T_SAVED,
	T_WARN_VOUT_VREF_LOW,
	T_USE_PREVIOUS_SETTINGS,
	T_MODE_ERROR_NO_EFFECT,
	T_MODE_ERROR_NO_EFFECT_HIZ,
	T_MODE_NO_HELP_AVAILABLE,
	T_PRESS_ANY_KEY_TO_EXIT,
	T_PRESS_ANY_KEY,
	T_MODE_MODE_SELECTION,
	T_MODE_MODE,
	T_MODE_NUMBER_DISPLAY_FORMAT,
	T_MODE_INVALID_OPTION,
	T_MODE_CHOOSE_AVAILABLE_PIN,
	T_MODE_ALL_PINS_IN_USE,
	T_MODE_PULLUP_RESISTORS,
	T_MODE_POWER_SUPPLY,
	T_MODE_DISABLED,
	T_MODE_DISPLAY,
	T_MODE_DISPLAY_SELECTION,
	T_MODE_ENABLED,
	T_MODE_BITORDER,
	T_MODE_BITORDER_MSB,
	T_MODE_BITORDER_LSB,
	T_MODE_DELAY,
	T_MODE_US,
	T_MODE_MS,
	T_MODE_ADC_VOLTAGE,
	T_MODE_ERROR_PARSING_MACRO,
	T_MODE_ERROR_NO_MACROS_AVAILABLE,
	T_MODE_ERROR_MACRO_NOT_DEFINED,
	T_MODE_TICK_CLOCK,
	T_MODE_SET_CLK,
	T_MODE_SET_DAT,
	T_MODE_READ_DAT,
	T_MODE_NO_VOUT_VREF_ERROR,
	T_MODE_NO_VOUT_VREF_HINT,
	T_MODE_PWM_GENERATE_FREQUENCY,
	T_MODE_FREQ_MEASURE_FREQUENCY,
	T_MODE_FREQ_FREQUENCY,
	T_MODE_FREQ_DUTY_CYCLE,
	T_PSU_DAC_ERROR,
	T_PSU_CURRENT_LIMIT_ERROR,
	T_PSU_SHORT_ERROR,
	T_PSU_ALREADY_DISABLED_ERROR,
	T_SYNTAX_EXCEEDS_MAX_SLOTS,
	T_HWSPI_SPEED_MENU,
	T_HWSPI_SPEED_MENU_1,
	T_HWSPI_SPEED_PROMPT,
	T_HWSPI_BITS_MENU,
	T_HWSPI_BITS_MENU_1,
	T_HWSPI_BITS_PROMPT,
	T_HWSPI_CLOCK_POLARITY_MENU,
	T_HWSPI_CLOCK_POLARITY_MENU_1,
	T_HWSPI_CLOCK_POLARITY_MENU_2,
	T_HWSPI_CLOCK_POLARITY_PROMPT,
	T_HWSPI_CLOCK_PHASE_MENU,
	T_HWSPI_CLOCK_PHASE_MENU_1,
	T_HWSPI_CLOCK_PHASE_MENU_2,
	T_HWSPI_CLOCK_PHASE_PROMPT,
	T_HWSPI_CS_IDLE_MENU,
	T_HWSPI_CS_IDLE_MENU_1,
	T_HWSPI_CS_IDLE_MENU_2,
	T_HWSPI_CS_IDLE_PROMPT,
	T_HWSPI_ACTUAL_SPEED_KHZ,
	T_HWSPI_CS_SELECT,
	T_HWSPI_CS_DESELECT,
	T_UART_SPEED_MENU,
	T_UART_SPEED_MENU_1,
	T_UART_SPEED_PROMPT,
	T_UART_PARITY_MENU,
	T_UART_PARITY_MENU_1,
	T_UART_PARITY_MENU_2,
	T_UART_PARITY_MENU_3,
	T_UART_PARITY_PROMPT,
	T_UART_DATA_BITS_MENU,
	T_UART_DATA_BITS_MENU_1,
	T_UART_DATA_BITS_PROMPT,
	T_UART_STOP_BITS_MENU,
	T_UART_STOP_BITS_MENU_1,
	T_UART_STOP_BITS_MENU_2,
	T_UART_STOP_BITS_PROMPT,
	T_UART_BLOCKING_MENU,
	T_UART_BLOCKING_MENU_1,
	T_UART_BLOCKING_MENU_2,
	T_UART_BLOCKING_PROMPT,
	T_UART_ACTUAL_SPEED_BAUD,
	T_UART_BAUD,
	T_UART_OPEN,
	T_UART_OPEN_WITH_READ,
	T_UART_CLOSE,
	T_UART_NO_DATA_READ,
	T_UART_NO_DATA_TIMEOUT,
	T_HWI2C_SPEED_MENU,
	T_HWI2C_SPEED_MENU_1,
	T_HWI2C_SPEED_PROMPT,
	T_HWI2C_DATA_BITS_MENU,
	T_HWI2C_DATA_BITS_MENU_1,
	T_HWI2C_DATA_BITS_MENU_2,
	T_HWI2C_DATA_BITS_PROMPT,
	T_HWI2C_START,
	T_HWI2C_STOP,
	T_HWI2C_ACK,
	T_HWI2C_NACK,
	T_HWI2C_NO_PULLUP_DETECTED,
	T_HWI2C_TIMEOUT,
	T_HWI2C_I2C_ERROR,
	T_HW2WIRE_SPEED_MENU,
	T_HW2WIRE_RST_LOW,
	T_HW2WIRE_RST_HIGH,
	T_HWLED_DEVICE_MENU,
	T_HWLED_DEVICE_MENU_1,
	T_HWLED_DEVICE_MENU_2,
	T_HWLED_DEVICE_MENU_3,
	T_HWLED_DEVICE_PROMPT,
	T_HWLED_NUM_LEDS_MENU,
	T_HWLED_NUM_LEDS_MENU_1,
	T_HWLED_NUM_LEDS_PROMPT,
	T_HWLED_RESET,
	T_HWLED_FRAME_START,
	T_HWLED_FRAME_STOP,
	T_HW1WIRE_RESET,
	T_HW1WIRE_PRESENCE_DETECT,
	T_HW1WIRE_NO_DEVICE,
	T_CMDLN_INVALID_COMMAND,
	T_CMDLN_NO_HELP,
	T_CMDLN_LS,
	T_CMDLN_CD,
	T_CMDLN_MKDIR,
	T_CMDLN_RM,
	T_CMDLN_CAT,
	T_CMDLN_MODE,
	T_CMDLN_PSU_EN,
	T_CMDLN_RESET,
	T_CMDLN_BOOTLOAD,
	T_CMDLN_INT_FORMAT,
	T_CMDLN_INT_INVERSE,
	T_CMDLN_HELP,
	T_CMDLN_CONFIG_MENU,
	T_CMDLN_FREQ_ONE,
	T_CMDLN_FREQ_CONT,
	T_CMDLN_PWM_CONFIG,
	T_CMDLN_PWM_DIS,
	T_CMDLN_HELP_MODE,
	T_CMDLN_HELP_DISPLAY,
	T_CMDLN_INFO,
	T_CMDLN_BITORDER_MSB,
	T_CMDLN_BITORDER_LSB,
	T_CMDLN_DISPLAY_FORMAT,
	T_CMDLN_PULLUPS_EN,
	T_CMDLN_PULLUPS_DIS,
	T_CMDLN_PSU_DIS,
	T_CMDLN_ADC_CONT,
	T_CMDLN_ADC_ONE,
	T_CMDLN_SELFTEST,
	T_CMDLN_AUX_IN,
	T_CMDLN_AUX_LOW,
	T_CMDLN_AUX_HIGH,
	T_CMDLN_DUMP,
	T_CMDLN_LOAD,
	T_CMDLN_DISPLAY,
	T_CMDLN_LOGIC,
	T_CMDLN_HEX,
	T_HELP_TITLE,
	T_HELP_GENERAL_COMMANDS,
	T_HELP_BUS_SYNTAX,
	T_HELP_DISK_COMMANDS,
	T_HELP_BLANK,
	T_HELP_SECTION_IO,
	T_HELP_SECTION_CAPTURE,
	T_HELP_SECTION_CONFIGURE,
	T_HELP_SECTION_SYSTEM,
	T_HELP_SECTION_FILES,
	T_HELP_SECTION_PROGRAMS,
	T_HELP_SECTION_MODE,
	T_HELP_SECTION_SYNTAX,
	T_HELP_SECTION_HELP,
	T_HELP_GREATER_THAN,
	T_HELP_SYNTAX_ADC,
	T_HELP_CMD_LS,
	T_HELP_CMD_CD,
	T_HELP_CMD_MKDIR,
	T_HELP_CMD_RM,
	T_HELP_CMD_PAUSE,
	T_HELP_CMD_FORMAT,
	T_HELP_CMD_CAT,
	T_HELP_CMD_HEX,
	T_HELP_CAPTURE_SCOPE,
	T_HELP_CAPTURE_LA,
	T_HELP_CMD_FLASH,
	T_HELP_1_2,
	T_HELP_1_3,
	T_HELP_1_4,
	T_HELP_1_5,
	T_HELP_1_6,
	T_HELP_1_7,
	T_HELP_COMMAND_AUX,
	T_HELP_COMMAND_DISPLAY,
	T_HELP_1_9,
	T_HELP_1_22,
	T_HELP_1_10,
	T_HELP_1_11,
	T_HELP_1_23,
	T_HELP_1_12,
	T_HELP_HELP_GENERAL,
	T_HELP_HELP_DISPLAY,
	T_HELP_HELP_COMMAND,
	T_HELP_1_14,
	T_HELP_1_15,
	T_HELP_1_16,
	T_HELP_1_17,
	T_HELP_1_18,
	T_HELP_1_19,
	T_HELP_1_20,
	T_HELP_1_21,
	T_HELP_2_1,
	T_HELP_2_3,
	T_HELP_2_4,
	T_HELP_2_7,
	T_HELP_2_8,
	T_HELP_2_9,
	T_HELP_2_10,
	T_HELP_2_11,
	T_HELP_SYN_CLOCK_HIGH,
	T_HELP_SYN_CLOCK_LOW,
	T_HELP_SYN_CLOCK_TICK,
	T_HELP_SYN_DATA_HIGH,
	T_HELP_SYN_DATA_LOW,
	T_HELP_SYN_DATA_READ,
	T_HELP_2_18,
	T_HELP_2_19,
	T_HELP_2_20,
	T_HELP_2_21,
	T_HELP_2_22,
	T_HELP_HINT,
	T_HELP_FLASH,
	T_HELP_FLASH_ERASE,
	T_HELP_FLASH_WRITE,
	T_HELP_FLASH_READ,
	T_HELP_FLASH_VERIFY,
	T_HELP_FLASH_TEST,
	T_HELP_FLASH_PROBE,
	T_HELP_FLASH_INIT,
	T_HELP_FLASH_FILE_FLAG,
	T_HELP_FLASH_ERASE_FLAG,
	T_HELP_FLASH_VERIFY_FLAG,
	T_INFO_FIRMWARE,
	T_INFO_BOOTLOADER,
	T_INFO_WITH,
	T_INFO_RAM,
	T_INFO_FLASH,
	T_INFO_SN,
	T_INFO_WEBSITE,
	T_INFO_TF_CARD,
	T_INFO_FILE_SYSTEM,
	T_NOT_DETECTED,
	T_INFO_AVAILABLE_MODES,
	T_INFO_CURRENT_MODE,
	T_INFO_POWER_SUPPLY,
	T_INFO_CURRENT_LIMIT,
	T_INFO_PULLUP_RESISTORS,
	T_INFO_FREQUENCY_GENERATORS,
	T_INFO_DISPLAY_FORMAT,
	T_INFO_DATA_FORMAT,
	T_INFO_BITS,
	T_INFO_BITORDER,
	T_CONFIG_FILE,
	T_CONFIG_CONFIGURATION_OPTIONS,
	T_CONFIG_LANGUAGE,
	T_CONFIG_ANSI_COLOR_MODE,
	T_CONFIG_ANSI_TOOLBAR_MODE,
	T_CONFIG_LANGUAGE_ENGLISH,
	T_CONFIG_LANGUAGE_CHINESE,
	T_CONFIG_LANGUAGE_POLISH,
	T_CONFIG_LANGUAGE_BOSNIAN,
	T_CONFIG_DISABLE,
	T_CONFIG_ENABLE,
	T_CONFIG_SCREENSAVER,
	T_CONFIG_SCREENSAVER_5,
	T_CONFIG_SCREENSAVER_10,
	T_CONFIG_SCREENSAVER_15,
	T_CONFIG_LEDS_EFFECT,
	T_CONFIG_LEDS_EFFECT_SOLID,
	T_CONFIG_LEDS_EFFECT_ANGLEWIPE,
	T_CONFIG_LEDS_EFFECT_CENTERWIPE,
	T_CONFIG_LEDS_EFFECT_CLOCKWISEWIPE,
	T_CONFIG_LEDS_EFFECT_TOPDOWNWIPE,
	T_CONFIG_LEDS_EFFECT_SCANNER,
	T_CONFIG_LEDS_EFFECT_CYCLE,
	T_CONFIG_LEDS_COLOR,
	T_CONFIG_LEDS_COLOR_RAINBOW,
	T_CONFIG_LEDS_COLOR_RED,
	T_CONFIG_LEDS_COLOR_ORANGE,
	T_CONFIG_LEDS_COLOR_YELLOW,
	T_CONFIG_LEDS_COLOR_GREEN,
	T_CONFIG_LEDS_COLOR_BLUE,
	T_CONFIG_LEDS_COLOR_PURPLE,
	T_CONFIG_LEDS_COLOR_PINK,
	T_CONFIG_LEDS_BRIGHTNESS,
	T_CONFIG_LEDS_BRIGHTNESS_10,
	T_CONFIG_LEDS_BRIGHTNESS_20,
	T_CONFIG_LEDS_BRIGHTNESS_30,
	T_CONFIG_LEDS_BRIGHTNESS_40,
	T_CONFIG_LEDS_BRIGHTNESS_50,
	T_CONFIG_LEDS_BRIGHTNESS_100,
	T_HELP_DUMMY_COMMANDS,
	T_HELP_DUMMY_INIT,
	T_HELP_DUMMY_TEST,
	T_HELP_DUMMY_FLAGS,
	T_HELP_DUMMY_B_FLAG,
	T_HELP_DUMMY_I_FLAG,
	T_HELP_DUMMY_FILE_FLAG,
	T_HELP_SLE4442,
	T_HELP_SLE4442_INIT,
	T_HELP_SLE4442_DUMP,
	T_HELP_SLE4442_UNLOCK,
	T_HELP_SLE4442_WRITE,
	T_HELP_SLE4442_ERASE,
	T_HELP_SLE4442_PSC,
	T_HELP_SLE4442_ADDRESS_FLAG,
	T_HELP_SLE4442_VALUE_FLAG,
	T_HELP_SLE4442_CURRENT_PSC_FLAG,
	T_HELP_SLE4442_NEW_PSC_FLAG,
	T_HELP_UART_GPS,
	T_HELP_UART_BRIDGE,
	T_HELP_GCMD_W,
	T_HELP_GCMD_W_DISABLE,
	T_HELP_GCMD_W_ENABLE,
	T_HELP_GCMD_W_VOLTS,
	T_HELP_GCMD_W_CURRENT_LIMIT,
	T_HELP_GCMD_P,
	T_HELP_HELP,
	T_HELP_SYS_COMMAND,
	T_HELP_SYS_DISPLAY,
	T_HELP_SYS_MODE,
	T_HELP_SYS_HELP,
	T_HELP_GCMD_SELFTEST,
	T_HELP_GCMD_SELFTEST_CMD,
	T_HELP_GCMD_SELFTEST_H_FLAG,
	T_HELP_AUXIO,
	T_HELP_AUXIO_LOW,
	T_HELP_AUXIO_HIGH,
	T_HELP_AUXIO_INPUT,
	T_HELP_AUXIO_IO,
	T_HELP_DISK_HEX,
	T_HELP_DISK_HEX_FILE,
	T_HELP_DISK_CAT,
	T_HELP_DISK_CAT_FILE,
	T_HELP_DISK_MKDIR,
	T_HELP_DISK_MKDIR_DIR,
	T_HELP_DISK_CD,
	T_HELP_DISK_CD_DIR,
	T_HELP_DISK_RM,
	T_HELP_DISK_RM_FILE,
	T_HELP_DISK_RM_DIR,
	T_HELP_DISK_LS,
	T_HELP_DISK_LS_DIR,
	T_HELP_DISK_FORMAT,
	T_HELP_DISK_FORMAT_CMD,
	T_HELP_VADC,
	T_HELP_VADC_SINGLE,
	T_HELP_VADC_CONTINUOUS,
	T_HELP_VADC_IO,
	T_HELP_I2C_SCAN,
	T_HELP_I2C_SCAN_VERBOSE,
	T_HELP_FLAG,
	T_HELP_I2C_SI7021,
	T_HELP_I2C_MS5611,
	T_HELP_I2C_TSL2561,
	T_HELP_1WIRE_SCAN,
	T_HELP_1WIRE_DS18B20,
	T_HELP_UART_BRIDGE,
	T_HELP_UART_NMEA,

	T_LAST_ITEM_ALWAYS_AT_THE_END //LEAVE THIS ITEM AT THE END!!! It helps the compiler report errors if there are missing translations
};
#endif
