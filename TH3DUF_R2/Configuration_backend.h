#ifndef CONFIGURATION_BACKEND_H
#define CONFIGURATION_BACKEND_H
#define CONFIGURATION_BACKEND_H_VERSION 010109

//===========================================================================
//==================== DO NOT MODIFY BELOW THIS LINE ========================
//===========================================================================

//needs tuning

/**
 * Specify Stepper Driver types
 * The options are used to determine driver pulse timings as well as more advanced functionality.
 * Stepper timing options can be overridden in Configuration_adv.h
 *
 * Options: A4988, DRV8825, LV8729, L6470, TB6560, TB6600, TMC2100,
 *          TMC2130, TMC2130_STANDALONE, TMC2208, TMC2208_STANDALONE,
 *          TMC26X,  TMC26X_STANDALONE,  TMC2660, TMC2660_STANDALONE,
 *          TMC5130, TMC5130_STANDALONE
 * :['A4988', 'DRV8825', 'LV8729', 'L6470', 'TB6560', 'TB6600', 'TMC2100', 'TMC2130', 'TMC2130_STANDALONE', 'TMC2208', 'TMC2208_STANDALONE', 'TMC26X', 'TMC26X_STANDALONE', 'TMC2660', 'TMC2660_STANDALONE', 'TMC5130', 'TMC5130_STANDALONE']
 */
#define X_DRIVER_TYPE  A4988
#define Y_DRIVER_TYPE  A4988
#define Z_DRIVER_TYPE  A4988
#define X2_DRIVER_TYPE A4988
#define Y2_DRIVER_TYPE A4988
#define Z2_DRIVER_TYPE A4988
#define E0_DRIVER_TYPE A4988
#define E1_DRIVER_TYPE A4988
#define E2_DRIVER_TYPE A4988
#define E3_DRIVER_TYPE A4988
#define E4_DRIVER_TYPE A4988

//Sensor Mounts
#if ENABLED(CUSTOM_PROBE)
  #define EZABL_ENABLE
  #if ENABLED(ANET_A2) || ENABLED(ANET_A6) || ENABLED(ANET_A8) || ENABLED(ANET_E10) || ENABLED(ANET_E12)
    #define DISABLE_BOOT
  #endif
#endif
#if ENABLED(CR10_VOLCANO)
  #define X_PROBE_OFFSET_FROM_EXTRUDER 30
  #define Y_PROBE_OFFSET_FROM_EXTRUDER 12
  #define EZABL_ENABLE
#endif
#if ENABLED(CR10_V6HEAVYDUTY)
  #define X_PROBE_OFFSET_FROM_EXTRUDER 63
  #define Y_PROBE_OFFSET_FROM_EXTRUDER 0
  #define EZABL_ENABLE
#endif
#if ENABLED(CR10_OEM)
  #define X_PROBE_OFFSET_FROM_EXTRUDER -44
  #define Y_PROBE_OFFSET_FROM_EXTRUDER -10
  #define EZABL_ENABLE
#endif
#if ENABLED(CR10_FANG)
  #define X_PROBE_OFFSET_FROM_EXTRUDER 48
  #define Y_PROBE_OFFSET_FROM_EXTRUDER -11
  #define EZABL_ENABLE
#endif
#if ENABLED(TM3DAERO)
  #define X_PROBE_OFFSET_FROM_EXTRUDER -51
  #define Y_PROBE_OFFSET_FROM_EXTRUDER -7
  #define EZABL_ENABLE
#endif
#if ENABLED(TM3DAERO_EXTENDED)
  #define X_PROBE_OFFSET_FROM_EXTRUDER -55
  #define Y_PROBE_OFFSET_FROM_EXTRUDER -7
  #define EZABL_ENABLE
#endif
#if ENABLED(ENDER2_OEM)
  #define X_PROBE_OFFSET_FROM_EXTRUDER -33
  #define Y_PROBE_OFFSET_FROM_EXTRUDER -10
  #define EZABL_ENABLE
#endif
#if ENABLED(ENDER2_V6)
  #define X_PROBE_OFFSET_FROM_EXTRUDER -35
  #define Y_PROBE_OFFSET_FROM_EXTRUDER -2
  #define EZABL_ENABLE
#endif
#if ENABLED(TORNADO_OEM)
  #define X_PROBE_OFFSET_FROM_EXTRUDER -37
  #define Y_PROBE_OFFSET_FROM_EXTRUDER -10
  #define EZABL_ENABLE
#endif
#if ENABLED(TORNADO_VOLCANO)
  #define X_PROBE_OFFSET_FROM_EXTRUDER 30
  #define Y_PROBE_OFFSET_FROM_EXTRUDER 12
  #define EZABL_ENABLE
#endif
#if ENABLED(TORNADO_V6HEAVYDUTY)
  #define X_PROBE_OFFSET_FROM_EXTRUDER 63
  #define Y_PROBE_OFFSET_FROM_EXTRUDER 0
  #define EZABL_ENABLE
#endif
#if ENABLED(TAZ5_OEM)
  #define X_PROBE_OFFSET_FROM_EXTRUDER -52
  #define Y_PROBE_OFFSET_FROM_EXTRUDER 15
  #define EZABL_ENABLE
#endif
#if ENABLED(WANHAO_I3_OEM)
  #define X_PROBE_OFFSET_FROM_EXTRUDER -25
  #define Y_PROBE_OFFSET_FROM_EXTRUDER -38
  #define EZABL_ENABLE
#endif
#if ENABLED(WANHAO_D6_OEM)
  #define X_PROBE_OFFSET_FROM_EXTRUDER 24
  #define Y_PROBE_OFFSET_FROM_EXTRUDER -16
  #define EZABL_ENABLE
#endif
#if ENABLED(WANHAO_I3_DIIICOOLER)
  #define X_PROBE_OFFSET_FROM_EXTRUDER -36
  #define Y_PROBE_OFFSET_FROM_EXTRUDER -37
  #define EZABL_ENABLE
#endif
#if ENABLED(WANHAO_I3MINI_OEM_EZABLMINI)
  #define X_PROBE_OFFSET_FROM_EXTRUDER -32
  #define Y_PROBE_OFFSET_FROM_EXTRUDER 0
  #define EZABL_ENABLE
#endif
#if ENABLED(WANHAO_I3MINI_OEM)
  #define X_PROBE_OFFSET_FROM_EXTRUDER -36
  #define Y_PROBE_OFFSET_FROM_EXTRUDER 0
  #define EZABL_ENABLE
#endif
#if ENABLED(PETSFANG)
  #define X_PROBE_OFFSET_FROM_EXTRUDER 48
  #define Y_PROBE_OFFSET_FROM_EXTRUDER -2
  #define EZABL_ENABLE
#endif
#if ENABLED(ALFAWISEU10_OEM)
  #define X_PROBE_OFFSET_FROM_EXTRUDER 39
  #define Y_PROBE_OFFSET_FROM_EXTRUDER -47
  #define EZABL_ENABLE
#endif
#if ENABLED(ANET_OEM)
  #define EZABL_ENABLE
  #define DISABLE_BOOT
#endif

//FT-5 Model Settings
#if ENABLED(FT5)
  #ifndef MOTHERBOARD
    #define MOTHERBOARD BOARD_MKS_13
  #endif
  
  #define BAUDRATE 250000

  #define X_MIN_ENDSTOP_INVERTING true
  #define Y_MIN_ENDSTOP_INVERTING true
  #define Z_MIN_ENDSTOP_INVERTING true
  #define X_MAX_ENDSTOP_INVERTING false
  #define Y_MAX_ENDSTOP_INVERTING false
  #define Z_MAX_ENDSTOP_INVERTING false
  #define Z_MIN_PROBE_ENDSTOP_INVERTING true
  
  #if ENABLED(TITAN_EXTRUDER)
    #define DEFAULT_AXIS_STEPS_PER_UNIT   { 80, 80, 400, TITAN_EXTRUDER_STEPS }
  #else
    #if ENABLED(CUSTOM_ESTEPS)
      #define DEFAULT_AXIS_STEPS_PER_UNIT   { 80, 80, 400, CUSTOM_ESTEPS_VALUE }
    #else
      #define DEFAULT_AXIS_STEPS_PER_UNIT   { 80, 80, 400, 105 }
    #endif
  #endif
  
  #define DEFAULT_MAX_FEEDRATE          { 300, 300, 15, 25 }
  #define DEFAULT_MAX_ACCELERATION      { 800, 800, 200, 10000 }

  #define DEFAULT_ACCELERATION          800    
  #define DEFAULT_RETRACT_ACCELERATION  2500   
  #define DEFAULT_TRAVEL_ACCELERATION   800    
  
  #define DEFAULT_XJERK                 10.0
  #define DEFAULT_YJERK                 10.0
  #define DEFAULT_ZJERK                  0.4
  #define DEFAULT_EJERK                  5.0
  
  #define INVERT_X_DIR true
  #define INVERT_Y_DIR false
  #define INVERT_Z_DIR true
  
  #if ENABLED(TITAN_EXTRUDER)
    #define INVERT_E0_DIR true
  #else
    #define INVERT_E0_DIR false
  #endif

  #define X_BED_SIZE 300
  #define Y_BED_SIZE 300
  #define Z_MAX_POS 380
  
  #if ENABLED(HOME_ADJUST)
    #define X_MIN_POS X_HOME_LOCATION
    #define Y_MIN_POS Y_HOME_LOCATION
  #else
    #define X_MIN_POS 0
    #define Y_MIN_POS 0
  #endif
  
  #define ENCODER_PULSES_PER_STEP 4
  #define ENCODER_STEPS_PER_MENU_ITEM 1


#endif
//end FT-5 Model Settings

//Wanhao D6 Model Settings
#if ENABLED(WANHAO_D6)
  #define BAUDRATE 250000
  
  #define X_MIN_ENDSTOP_INVERTING true
  #define Y_MIN_ENDSTOP_INVERTING true
  #define Z_MIN_ENDSTOP_INVERTING true
  #define X_MAX_ENDSTOP_INVERTING false
  #define Y_MAX_ENDSTOP_INVERTING false
  #define Z_MAX_ENDSTOP_INVERTING false
  #define Z_MIN_PROBE_ENDSTOP_INVERTING true
  
  #define DEFAULT_AXIS_STEPS_PER_UNIT   { 80, 80, 400, 99 }

  #define DEFAULT_MAX_FEEDRATE          { 300, 300, 15, 50 }

  #define DEFAULT_MAX_ACCELERATION      { 1500, 1500, 100, 500 }

  #define DEFAULT_ACCELERATION          500    // X, Y, Z and E acceleration for printing moves
  #define DEFAULT_RETRACT_ACCELERATION  1000    // E acceleration for retracts
  #define DEFAULT_TRAVEL_ACCELERATION   500    // X, Y, Z acceleration for travel (non printing) moves
  
  #define DEFAULT_XJERK                 10.0
  #define DEFAULT_YJERK                 10.0
  #define DEFAULT_ZJERK                  0.3
  #define DEFAULT_EJERK                  1.0
  
  #define INVERT_X_DIR true
  #define INVERT_Y_DIR false
  #define INVERT_Z_DIR true
  #define INVERT_E0_DIR true
  
  #ifndef MOTHERBOARD
    #define MOTHERBOARD BOARD_ULTIMAIN_2
  #endif
  
  #if ENABLED(WANHAO_D6_5015)
    #define X_BED_SIZE 175
  #else
    #define X_BED_SIZE 200
  #endif
  #define Y_BED_SIZE 200  
  #define Z_MAX_POS 170

  #if ENABLED(HOME_ADJUST)
    #define X_MIN_POS X_HOME_LOCATION
    #define Y_MIN_POS Y_HOME_LOCATION
  #else
    #define X_MIN_POS 0
    #define Y_MIN_POS 0
  #endif
  
  #define ENCODER_PULSES_PER_STEP 2
  #define ENCODER_STEPS_PER_MENU_ITEM 1
  #define REVERSE_ENCODER_DIRECTION

#endif //end D6

//Alfawise U10 Model Settings
#if ENABLED(ALFAWISE_U10)
  #define BAUDRATE 250000

  #ifndef MOTHERBOARD
    #define MOTHERBOARD BOARD_RAMPSPLUS2
  #endif
  
  #define X_MIN_ENDSTOP_INVERTING true
  #define Y_MIN_ENDSTOP_INVERTING true
  #define Z_MIN_ENDSTOP_INVERTING true
  #define X_MAX_ENDSTOP_INVERTING true
  #define Y_MAX_ENDSTOP_INVERTING true
  #define Z_MAX_ENDSTOP_INVERTING true
  #define Z_MIN_PROBE_ENDSTOP_INVERTING true
    
  #if ENABLED(TITAN_EXTRUDER)
    #define DEFAULT_AXIS_STEPS_PER_UNIT   { 80, 80, 400, TITAN_EXTRUDER_STEPS }
  #else
    #if ENABLED(CUSTOM_ESTEPS)
      #define DEFAULT_AXIS_STEPS_PER_UNIT   { 80, 80, 400, CUSTOM_ESTEPS_VALUE }
    #else
      #define DEFAULT_AXIS_STEPS_PER_UNIT   { 80, 80, 400, 95 }
    #endif
  #endif
  #define DEFAULT_MAX_FEEDRATE          { 400, 400, 15, 50 }
  #define DEFAULT_MAX_ACCELERATION      { 1000, 1000, 100, 3000 }
  
  #define DEFAULT_ACCELERATION          500    // X, Y, Z and E acceleration for printing moves
  #define DEFAULT_RETRACT_ACCELERATION  500    // E acceleration for retracts
  #define DEFAULT_TRAVEL_ACCELERATION   500    // X, Y, Z acceleration for travel (non printing) moves

  #define DEFAULT_XJERK                 10.0
  #define DEFAULT_YJERK                 10.0
  #define DEFAULT_ZJERK                  0.3
  #define DEFAULT_EJERK                  5.0

  #define X_BED_SIZE 400
  #define Y_BED_SIZE 400
  #define Z_MAX_POS 500

  #if ENABLED(HOME_ADJUST)
    #define X_MIN_POS X_HOME_LOCATION
    #define Y_MIN_POS Y_HOME_LOCATION
  #else
    #define X_MIN_POS 0
    #define Y_MIN_POS 0
  #endif
  
  #define INVERT_X_DIR true
  #define INVERT_Y_DIR true
  #define INVERT_Z_DIR true
  
  #if ENABLED(TITAN_EXTRUDER)
    #define INVERT_E0_DIR false
  #else
    #define INVERT_E0_DIR true
  #endif

  //#define ENCODER_PULSES_PER_STEP 4
  //#define ENCODER_STEPS_PER_MENU_ITEM 1
#endif
//End U10 Settings

//Wanhao i3 Mini Model Settings
#if ENABLED(WANHAO_I3MINI)
  #define BAUDRATE 250000

  #ifndef MOTHERBOARD
    #define MOTHERBOARD BOARD_ONEPLUS1_wanhao
  #endif
  
  #define X_MIN_ENDSTOP_INVERTING true
  #define Y_MIN_ENDSTOP_INVERTING true
  #define Z_MIN_ENDSTOP_INVERTING true
  #define X_MAX_ENDSTOP_INVERTING true
  #define Y_MAX_ENDSTOP_INVERTING true
  #define Z_MAX_ENDSTOP_INVERTING true
  #define Z_MIN_PROBE_ENDSTOP_INVERTING true
    
  #if ENABLED(TITAN_EXTRUDER)
    #define DEFAULT_AXIS_STEPS_PER_UNIT   { 80, 80, 400, TITAN_EXTRUDER_STEPS }
  #else
    #if ENABLED(CUSTOM_ESTEPS)
      #define DEFAULT_AXIS_STEPS_PER_UNIT   { 80, 80, 400, CUSTOM_ESTEPS_VALUE }
    #else
      #define DEFAULT_AXIS_STEPS_PER_UNIT   { 80, 80, 400, 94 }
    #endif
  #endif
  #define DEFAULT_MAX_FEEDRATE          { 400, 400, 15, 50 }
  #define DEFAULT_MAX_ACCELERATION      { 3000, 3000, 100, 3000 }
  
  #define DEFAULT_ACCELERATION          800    // X, Y, Z and E acceleration for printing moves
  #define DEFAULT_RETRACT_ACCELERATION  800    // E acceleration for retracts
  #define DEFAULT_TRAVEL_ACCELERATION   1000    // X, Y, Z acceleration for travel (non printing) moves

  #define DEFAULT_XJERK                 10.0
  #define DEFAULT_YJERK                 10.0
  #define DEFAULT_ZJERK                  0.3
  #define DEFAULT_EJERK                  5.0

  #define X_BED_SIZE 125
  #define Y_BED_SIZE 140
  #define Z_MAX_POS 100

  #if ENABLED(HOME_ADJUST)
    #define X_MIN_POS X_HOME_LOCATION
    #define Y_MIN_POS Y_HOME_LOCATION
  #else
    #define X_MIN_POS 0
    #define Y_MIN_POS 0
  #endif
  
  #define INVERT_X_DIR true
  #define INVERT_Y_DIR false
  #define INVERT_Z_DIR false
  
  #if ENABLED(TITAN_EXTRUDER)
    #define INVERT_E0_DIR false
  #else
    #define INVERT_E0_DIR true
  #endif

  #define ENCODER_PULSES_PER_STEP 4
  #define ENCODER_STEPS_PER_MENU_ITEM 1
#endif
//end i3 Mini Settings

//Wanhao i3 Model Settings
#if ENABLED(WANHAO_I3)
	#define SLIM_1284P
  #define BAUDRATE 115200
  
  #ifndef MOTHERBOARD
    #define MOTHERBOARD BOARD_MELZI_MAKR3D
  #endif
  #define IS_WANHAO_DI3

  #define X_MIN_ENDSTOP_INVERTING true
  #define Y_MIN_ENDSTOP_INVERTING true
  #define Z_MIN_ENDSTOP_INVERTING true
  #define X_MAX_ENDSTOP_INVERTING false
  #define Y_MAX_ENDSTOP_INVERTING false
  #define Z_MAX_ENDSTOP_INVERTING false
  #define Z_MIN_PROBE_ENDSTOP_INVERTING true

  #if ENABLED(TITAN_EXTRUDER)
    #define DEFAULT_AXIS_STEPS_PER_UNIT   { 80, 80, 400, TITAN_EXTRUDER_STEPS }
  #else
    #if ENABLED(CUSTOM_ESTEPS)
      #define DEFAULT_AXIS_STEPS_PER_UNIT   { 80, 80, 400, CUSTOM_ESTEPS_VALUE }
    #else
      #define DEFAULT_AXIS_STEPS_PER_UNIT   { 80, 80, 400, 100 }
    #endif
  #endif
  
  #define DEFAULT_MAX_FEEDRATE          { 300, 300, 15, 50 }

  #define DEFAULT_MAX_ACCELERATION      { 1000, 1000, 100, 10000 }
  
  #define DEFAULT_ACCELERATION          700    
  #define DEFAULT_RETRACT_ACCELERATION  3000   
  #define DEFAULT_TRAVEL_ACCELERATION   700    

  #define X_BED_SIZE 200
  #define Y_BED_SIZE 200
  #define Z_MAX_POS 180

  #if ENABLED(HOME_ADJUST)
    #define X_MIN_POS X_HOME_LOCATION
    #define Y_MIN_POS Y_HOME_LOCATION
  #else
    #define X_MIN_POS 0
    #define Y_MIN_POS 0
  #endif

  #define DEFAULT_XJERK                 10.0
  #define DEFAULT_YJERK                 10.0
  #define DEFAULT_ZJERK                  0.4
  #define DEFAULT_EJERK                  5.0

  #define INVERT_X_DIR false
  #define INVERT_Y_DIR false
  #define INVERT_Z_DIR true

  #if ENABLED(TITAN_EXTRUDER)
    #define INVERT_E0_DIR false
  #else
    #define INVERT_E0_DIR true
  #endif

  #define ST7920_DELAY_1 DELAY_2_NOP
  #define ST7920_DELAY_2 DELAY_2_NOP
  #define ST7920_DELAY_3 DELAY_2_NOP

  #define LCD_FOR_MELZI
#endif

//CR-10 and Ender 3 Model Settings
#if ENABLED(CR10) || ENABLED(CR10_MINI) || ENABLED(CR10_S4) || ENABLED(CR10_S5) || ENABLED(ENDER3)
  #define SLIM_1284P
  #define BAUDRATE 115200

  #define X_MIN_ENDSTOP_INVERTING false
  #define Y_MIN_ENDSTOP_INVERTING false
  
  #if ENABLED(EZABL_ENABLE)
		#define Z_MIN_ENDSTOP_INVERTING true
  #else
    #define Z_MIN_ENDSTOP_INVERTING false
  #endif
  
  #define X_MAX_ENDSTOP_INVERTING false
  #define Y_MAX_ENDSTOP_INVERTING false
  #define Z_MAX_ENDSTOP_INVERTING false
  
  #if ENABLED(EZABL_ENABLE)
	  #define Z_MIN_PROBE_ENDSTOP_INVERTING true
  #else
    #define Z_MIN_PROBE_ENDSTOP_INVERTING false
  #endif

  #if ENABLED(TITAN_EXTRUDER)
    #define DEFAULT_AXIS_STEPS_PER_UNIT   { 80, 80, 400, TITAN_EXTRUDER_STEPS }
  #else
    #if ENABLED(CUSTOM_ESTEPS)
	  #define DEFAULT_AXIS_STEPS_PER_UNIT   { 80, 80, 400, CUSTOM_ESTEPS_VALUE }
	#else
      #define DEFAULT_AXIS_STEPS_PER_UNIT   { 80, 80, 400, 93 }
	#endif
  #endif
  
  #define DEFAULT_MAX_FEEDRATE          { 500, 500, 15, 50 }
  #define DEFAULT_MAX_ACCELERATION      { 1000, 1000, 100, 5000 }

  #define DEFAULT_ACCELERATION          500   
  #define DEFAULT_RETRACT_ACCELERATION  1000  
  #define DEFAULT_TRAVEL_ACCELERATION   500   
  
  #define DEFAULT_XJERK                 10.0
  #define DEFAULT_YJERK                 10.0
  #define DEFAULT_ZJERK                  0.4
  #define DEFAULT_EJERK                  5.0
  
  #define INVERT_X_DIR true
  #define INVERT_Y_DIR true
  #define INVERT_Z_DIR false
  
  #if ENABLED(TITAN_EXTRUDER)
    #define INVERT_E0_DIR false
  #else
    #define INVERT_E0_DIR true
  #endif
    
  #ifndef MOTHERBOARD
    #define MOTHERBOARD BOARD_MELZI_CREALITY
  #endif

  #if ENABLED(CR10)
    #define X_BED_SIZE 300
    #define Y_BED_SIZE 300
    #define Z_MAX_POS 400
  #endif

  #if ENABLED(CR10_MINI)
    #define X_BED_SIZE 300
    #define Y_BED_SIZE 220
    #define Z_MAX_POS 300
  #endif

  #if ENABLED(CR10_S4)
    #define X_BED_SIZE 400
    #define Y_BED_SIZE 400
    #define Z_MAX_POS 400
  #endif

  #if ENABLED(CR10_S5)
    #define X_BED_SIZE 500
    #define Y_BED_SIZE 500
    #define Z_MAX_POS 500
  #endif
  
  #if ENABLED(ENDER3)
    #define X_BED_SIZE 220
    #define Y_BED_SIZE 220
    #define Z_MAX_POS 250
  #endif

  #if ENABLED(HOME_ADJUST)
    #define X_MIN_POS X_HOME_LOCATION
    #define Y_MIN_POS Y_HOME_LOCATION
  #else
    #define X_MIN_POS 0
    #define Y_MIN_POS 0
  #endif
  
  #define ENCODER_PULSES_PER_STEP 4
  #define ENCODER_STEPS_PER_MENU_ITEM 1

#endif //end CR-10

//CR-10S Model Settings
#if ENABLED(CR10S) || ENABLED(CR10S_MINI) || ENABLED(CR10S_S4) || ENABLED(CR10S_S5) || ENABLED(ENDER3_DUALBOARD)
  #define BAUDRATE 115200
  
  #ifndef MOTHERBOARD
    #define MOTHERBOARD BOARD_CR10S
  #endif

  #define X_MIN_ENDSTOP_INVERTING false
  #define Y_MIN_ENDSTOP_INVERTING false
  
  #if ENABLED(EZABL_ENABLE)
	  #define Z_MIN_ENDSTOP_INVERTING true
  #else
    #define Z_MIN_ENDSTOP_INVERTING false
  #endif
  
  #define X_MAX_ENDSTOP_INVERTING false
  #define Y_MAX_ENDSTOP_INVERTING false
  #define Z_MAX_ENDSTOP_INVERTING false
  
  #if ENABLED(EZABL_ENABLE)
	  #define Z_MIN_PROBE_ENDSTOP_INVERTING true
  #else
    #define Z_MIN_PROBE_ENDSTOP_INVERTING false
  #endif

  #if ENABLED(TITAN_EXTRUDER)
    #define DEFAULT_AXIS_STEPS_PER_UNIT   { 80, 80, 400, TITAN_EXTRUDER_STEPS }
  #else
    #if ENABLED(CUSTOM_ESTEPS)
	  #define DEFAULT_AXIS_STEPS_PER_UNIT   { 80, 80, 400, CUSTOM_ESTEPS_VALUE }
	#else
      #define DEFAULT_AXIS_STEPS_PER_UNIT   { 80, 80, 400, 93 }
	#endif
  #endif
  
  #define DEFAULT_MAX_FEEDRATE          { 500, 500, 15, 50 }
  #define DEFAULT_MAX_ACCELERATION      { 1000, 1000, 100, 5000 }

  #define DEFAULT_ACCELERATION          500    
  #define DEFAULT_RETRACT_ACCELERATION  1000   
  #define DEFAULT_TRAVEL_ACCELERATION   500    
  
  #define DEFAULT_XJERK                 10.0
  #define DEFAULT_YJERK                 10.0
  #define DEFAULT_ZJERK                  0.4
  #define DEFAULT_EJERK                  5.0
  
  #define INVERT_X_DIR false
  #define INVERT_Y_DIR false
  #define INVERT_Z_DIR true
  #if ENABLED(TITAN_EXTRUDER)
    #define INVERT_E0_DIR true
  #else
    #define INVERT_E0_DIR false
  #endif
  
  #ifndef MOTHERBOARD
    #define MOTHERBOARD BOARD_CR10S
  #endif

  #if ENABLED(CR10S)
    #define X_BED_SIZE 300
    #define Y_BED_SIZE 300
    #define Z_MAX_POS 400
  #endif

  #if ENABLED(CR10S_MINI)
    #define X_BED_SIZE 300
    #define Y_BED_SIZE 220
    #define Z_MAX_POS 300
  #endif

  #if ENABLED(CR10S_S4)
    #define X_BED_SIZE 400
    #define Y_BED_SIZE 400
    #define Z_MAX_POS 400
  #endif

  #if ENABLED(CR10S_S5)
    #define X_BED_SIZE 500
    #define Y_BED_SIZE 500
    #define Z_MAX_POS 500
  #endif
  
  #if ENABLED(ENDER3_DUALBOARD)
    #define X_BED_SIZE 220
    #define Y_BED_SIZE 220
    #define Z_MAX_POS 250
    #define CR10LCD_CR10S	
  #endif
  
  //dual extrusion options
  
  //single hotend y adapter
  #if ENABLED(SINGLE_HOTEND_YADAPTER)
    #define CR10SDUALEBOARD
    #define SINGLENOZZLE
    
    #if ENABLED(TITAN_EXTRUDER)
      #define INVERT_E1_DIR true
    #else
      #define INVERT_E1_DIR false
    #endif

  #endif

  //dual hotend dual nozzles
  #if ENABLED(DUAL_HOTEND_DUAL_NOZZLES)
    #define CR10SDUALEBOARD
    
    #if ENABLED(TITAN_EXTRUDER)
      #define INVERT_E1_DIR true
    #else
      #define INVERT_E1_DIR false
    #endif
        
    #define HOTEND_OFFSET_X {0.0, DUAL_HOTEND_X_DISTANCE} // (in mm) for each extruder, offset of the hotend on the X axis
    #define HOTEND_OFFSET_Y {0.0, 0.00}  // (in mm) for each extruder, offset of the hotend on the Y axis
  
  #endif

  //dual hotend single mixing nozzle
  #if ENABLED(DUAL_HOTEND_SINGLE_NOZZLE)
    #define CR10SDUALEBOARD
    #define SINGLENOZZLE
        
    #if ENABLED(TITAN_EXTRUDER)
      #define INVERT_E1_DIR true
    #else
      #define INVERT_E1_DIR false
    #endif

  #endif

  #if ENABLED(HOME_ADJUST)
    #define X_MIN_POS X_HOME_LOCATION
    #define Y_MIN_POS Y_HOME_LOCATION
  #else
    #define X_MIN_POS 0
    #define Y_MIN_POS 0
  #endif
  
  #define ENCODER_PULSES_PER_STEP 4
  #define ENCODER_STEPS_PER_MENU_ITEM 1

#endif //end CR-10S

//Ender Model Settings
#if ENABLED(ENDER2)
  #define SLIM_1284P
  #define BAUDRATE 115200
  
  #define X_MIN_ENDSTOP_INVERTING false
  #define Y_MIN_ENDSTOP_INVERTING false
  #if ENABLED(EZABL_ENABLE)
		#define Z_MIN_ENDSTOP_INVERTING true
  #else
    #define Z_MIN_ENDSTOP_INVERTING false
  #endif
  #define X_MAX_ENDSTOP_INVERTING false
  #define Y_MAX_ENDSTOP_INVERTING false
  #define Z_MAX_ENDSTOP_INVERTING false
  #if ENABLED(EZABL_ENABLE)
	  #define Z_MIN_PROBE_ENDSTOP_INVERTING true
  #else
    #define Z_MIN_PROBE_ENDSTOP_INVERTING false
  #endif

  #if ENABLED(TITAN_EXTRUDER)
    #define DEFAULT_AXIS_STEPS_PER_UNIT   { 80, 80, 400, TITAN_EXTRUDER_STEPS }
  #else
    #if ENABLED(CUSTOM_ESTEPS)
	    #define DEFAULT_AXIS_STEPS_PER_UNIT   { 80, 80, 400, CUSTOM_ESTEPS_VALUE }
	  #else
      #define DEFAULT_AXIS_STEPS_PER_UNIT   { 80, 80, 400, 93 }
	  #endif
  #endif
  #define DEFAULT_MAX_FEEDRATE          { 500, 500, 15, 50 }
  #define DEFAULT_MAX_ACCELERATION      { 2000, 2000, 100, 5000 }

  #define DEFAULT_ACCELERATION          1000    
  #define DEFAULT_RETRACT_ACCELERATION  1000    
  #define DEFAULT_TRAVEL_ACCELERATION   1000    
  
  #define DEFAULT_XJERK                 10.0
  #define DEFAULT_YJERK                 10.0
  #define DEFAULT_ZJERK                  0.4
  #define DEFAULT_EJERK                  5.0
  
  #define INVERT_X_DIR true
  #define INVERT_Y_DIR true
  #define INVERT_Z_DIR false
  #if ENABLED(TITAN_EXTRUDER)
    #define INVERT_E0_DIR false
  #else
    #define INVERT_E0_DIR true
  #endif

  #ifndef MOTHERBOARD
    #define MOTHERBOARD BOARD_MELZI_CREALITY_ENDER2
  #endif

  #if ENABLED(HOME_ADJUST)
    #define X_MIN_POS X_HOME_LOCATION
    #define Y_MIN_POS Y_HOME_LOCATION
  #else
    #define X_MIN_POS 0
    #define Y_MIN_POS 0
  #endif
  
  #define X_BED_SIZE 160
  #define Y_BED_SIZE 150
  #define Z_MAX_POS 220

#endif //end Ender2

//Tornado Model Settings
#if ENABLED(TORNADO)
  #define BAUDRATE 250000

  #define X_MIN_ENDSTOP_INVERTING true
  #define Y_MIN_ENDSTOP_INVERTING true
  #define Z_MIN_ENDSTOP_INVERTING true
  #define X_MAX_ENDSTOP_INVERTING false
  #define Y_MAX_ENDSTOP_INVERTING false
  #define Z_MAX_ENDSTOP_INVERTING false
  #define Z_MIN_PROBE_ENDSTOP_INVERTING true

  #if ENABLED(TITAN_EXTRUDER)
    #define DEFAULT_AXIS_STEPS_PER_UNIT   { 80, 80, 400, TITAN_EXTRUDER_STEPS }
  #else
	  #if ENABLED(CUSTOM_ESTEPS)
	    #define DEFAULT_AXIS_STEPS_PER_UNIT   { 80, 80, 400, CUSTOM_ESTEPS_VALUE }
	  #else
      #define DEFAULT_AXIS_STEPS_PER_UNIT   { 80, 80, 400, 400 }
	  #endif
  #endif
  #define DEFAULT_MAX_FEEDRATE          { 500, 500, 15, 50 }
  #define DEFAULT_MAX_ACCELERATION      { 1000, 1000, 100, 5000 }

  #define DEFAULT_ACCELERATION          500    
  #define DEFAULT_RETRACT_ACCELERATION  1000   
  #define DEFAULT_TRAVEL_ACCELERATION   500    
  
  #define DEFAULT_XJERK                 10.0
  #define DEFAULT_YJERK                 10.0
  #define DEFAULT_ZJERK                  0.4
  #define DEFAULT_EJERK                  5.0
  
  #define INVERT_X_DIR false
  #define INVERT_Y_DIR false
  #define INVERT_Z_DIR true
  #define INVERT_E0_DIR true
  
  #ifndef MOTHERBOARD
    #define MOTHERBOARD BOARD_MKS_BASE
  #endif

  #if ENABLED(HOME_ADJUST)
    #define X_MIN_POS X_HOME_LOCATION
    #define Y_MIN_POS Y_HOME_LOCATION
  #else
    #define X_MIN_POS 0
    #define Y_MIN_POS 0
  #endif
  
  #define X_BED_SIZE 300
  #define Y_BED_SIZE 300
  #define Z_MAX_POS 400

  #define REVERSE_ENCODER_DIRECTION

#endif //end tornado

//TAZ5 Model Settings
#if ENABLED(TAZ5)
  #define BAUDRATE 250000
  #define V6_HOTEND

  #define X_MIN_ENDSTOP_INVERTING true
  #define Y_MIN_ENDSTOP_INVERTING true
  #define Z_MIN_ENDSTOP_INVERTING true
  #define X_MAX_ENDSTOP_INVERTING false
  #define Y_MAX_ENDSTOP_INVERTING false
  #define Z_MAX_ENDSTOP_INVERTING false
  #define Z_MIN_PROBE_ENDSTOP_INVERTING true

  
  #if ENABLED(CUSTOM_ESTEPS)
	  #define DEFAULT_AXIS_STEPS_PER_UNIT {100.5,100.5,1600,CUSTOM_ESTEPS_VALUE}
  #else
    #define DEFAULT_AXIS_STEPS_PER_UNIT {100.5,100.5,1600,830}
  #endif
  
  #define DEFAULT_MAX_FEEDRATE {300, 300, 3, 50}

  #define DEFAULT_MAX_ACCELERATION {9000,9000,100,10000}

  #define DEFAULT_ACCELERATION          500    // X, Y, Z and E acceleration for printing moves
  #define DEFAULT_RETRACT_ACCELERATION  3000    // E acceleration for retracts
  #define DEFAULT_TRAVEL_ACCELERATION   500    // X, Y, Z acceleration for travel (non printing) moves  
  
  #define DEFAULT_XJERK                  8.0
  #define DEFAULT_YJERK                  8.0
  #define DEFAULT_ZJERK                  0.4
  #define DEFAULT_EJERK                  5.0
  
  #define INVERT_X_DIR false
  #define INVERT_Y_DIR true
  #define INVERT_Z_DIR false
  #define INVERT_E0_DIR true
  
  #ifndef MOTHERBOARD
    #define MOTHERBOARD BOARD_RAMBO
  #endif

  #if ENABLED(HOME_ADJUST)
    #define X_MIN_POS X_HOME_LOCATION
    #define Y_MIN_POS Y_HOME_LOCATION
  #else
    #define X_MIN_POS 0
    #define Y_MIN_POS 0
  #endif
  
  #define X_BED_SIZE 295
  #define Y_BED_SIZE 295
  #define Z_MAX_POS 250
#endif //end taz5

//ANET Model Settings
#if ENABLED(ANET_A2) || ENABLED(ANET_A6) || ENABLED(ANET_A8) || ENABLED(ANET_E10) || ENABLED(ANET_E12)
  #define SLIM_1284P
  #ifndef MOTHERBOARD
    #define MOTHERBOARD BOARD_ANET_10 
  #endif
  
  #define BAUDRATE 115200

  #define X_MIN_ENDSTOP_INVERTING true
  #define Y_MIN_ENDSTOP_INVERTING true
  #define Z_MIN_ENDSTOP_INVERTING true
  #define X_MAX_ENDSTOP_INVERTING false
  #define Y_MAX_ENDSTOP_INVERTING false
  #define Z_MAX_ENDSTOP_INVERTING false
  #define Z_MIN_PROBE_ENDSTOP_INVERTING true
  
  #if ENABLED(ANET_A2) || ENABLED(ANET_A6) || ENABLED(ANET_A8)
    #if ENABLED(TITAN_EXTRUDER)
      #define DEFAULT_AXIS_STEPS_PER_UNIT   { 100, 100, 400, TITAN_EXTRUDER_STEPS }
	  #else
	    #if ENABLED(CUSTOM_ESTEPS)
		    #define DEFAULT_AXIS_STEPS_PER_UNIT   { 100, 100, 400, CUSTOM_ESTEPS_VALUE }
	    #else
        #define DEFAULT_AXIS_STEPS_PER_UNIT   { 100, 100, 400, 93 }
      #endif
	  #endif
	#else
	  #if ENABLED(TITAN_EXTRUDER)
      #define DEFAULT_AXIS_STEPS_PER_UNIT   { 80, 80, 400, TITAN_EXTRUDER_STEPS }
	  #else
	    #if ENABLED(CUSTOM_ESTEPS)
		    #define DEFAULT_AXIS_STEPS_PER_UNIT   { 80, 80, 400, CUSTOM_ESTEPS_VALUE }
	    #else
        #define DEFAULT_AXIS_STEPS_PER_UNIT   { 80, 80, 400, 93 }
	    #endif
	  #endif
  #endif
  #define DEFAULT_MAX_FEEDRATE          { 500, 500, 15, 50 }
  #define DEFAULT_MAX_ACCELERATION      { 1000, 1000, 100, 5000 }

  #define DEFAULT_ACCELERATION          500   
  #define DEFAULT_RETRACT_ACCELERATION  1000  
  #define DEFAULT_TRAVEL_ACCELERATION   500   
  
  #define DEFAULT_XJERK                 10.0
  #define DEFAULT_YJERK                 10.0
  #define DEFAULT_ZJERK                  0.4
  #define DEFAULT_EJERK                  5.0
  
  #if ENABLED(ANET_LCD2004)
    #define ZONESTAR_LCD
    #define LCD2004
  #endif
  #if ENABLED(ANET_LCD12864)
   #define ANET_FULL_GRAPHICS_LCD
    #define LCD_SET_PROGRESS_MANUALLY
    #define PRINTJOB_TIMER_AUTOSTART
  #endif

  #define Z_MIN_POS 0
  #define X_MAX_POS X_BED_SIZE
  #define Y_MAX_POS Y_BED_SIZE
  
#endif

#if ENABLED(A2_SMALL_BED)   
    #if ENABLED(HOME_ADJUST)
      #define X_MIN_POS X_HOME_LOCATION
      #define Y_MIN_POS Y_HOME_LOCATION
    #else
      #define X_MIN_POS 0
      #define Y_MIN_POS 0
    #endif
    
    #define X_BED_SIZE 220
    #define Y_BED_SIZE 220
    #define Z_MAX_POS 230
 
    #if ENABLED(ANET_OEM)
      #define X_PROBE_OFFSET_FROM_EXTRUDER -33
      #define Y_PROBE_OFFSET_FROM_EXTRUDER -22
    #endif
 
    #define INVERT_X_DIR false
    #define INVERT_Y_DIR true
    #define INVERT_Z_DIR false
    #if ENABLED(TITAN_EXTRUDER)
      #define INVERT_E0_DIR true
	#else
      #define INVERT_E0_DIR false
    #endif 
#endif

#if ENABLED(A2_LARGE_BED)
    #if ENABLED(HOME_ADJUST)
      #define X_MIN_POS X_HOME_LOCATION
      #define Y_MIN_POS Y_HOME_LOCATION
    #else
      #define X_MIN_POS 0
      #define Y_MIN_POS 0
    #endif
    
    #define X_BED_SIZE 220
    #define Y_BED_SIZE 270
    #define Z_MAX_POS 230
    
    #if ENABLED(ANET_OEM)
      #define X_PROBE_OFFSET_FROM_EXTRUDER -33
      #define Y_PROBE_OFFSET_FROM_EXTRUDER -22
    #endif
    #define INVERT_X_DIR false
    #define INVERT_Y_DIR true
    #define INVERT_Z_DIR false
    #if ENABLED(TITAN_EXTRUDER)
      #define INVERT_E0_DIR true
	#else
      #define INVERT_E0_DIR false
    #endif
#endif

#if ENABLED(ANET_A6)
    #if ENABLED(HOME_ADJUST)
      #define X_MIN_POS X_HOME_LOCATION
      #define Y_MIN_POS Y_HOME_LOCATION
    #else
      #define X_MIN_POS 0
      #define Y_MIN_POS 0
    #endif
    
    #define X_BED_SIZE 220
    #define Y_BED_SIZE 220
    #define Z_MAX_POS 250

    #if ENABLED(ANET_OEM)
      #define X_PROBE_OFFSET_FROM_EXTRUDER -1
      #define Y_PROBE_OFFSET_FROM_EXTRUDER -54
    #endif
	
    #define INVERT_X_DIR false
    #define INVERT_Y_DIR false
    #define INVERT_Z_DIR true
    #if ENABLED(TITAN_EXTRUDER)
      #define INVERT_E0_DIR true
	#else
      #define INVERT_E0_DIR false
    #endif
#endif

#if ENABLED(ANET_A8)
  #if ENABLED(HOME_ADJUST)
     #define X_MIN_POS X_HOME_LOCATION
     #define Y_MIN_POS Y_HOME_LOCATION
  #else
     #define X_MIN_POS -33
     #define Y_MIN_POS -10
  #endif
    
  #define X_BED_SIZE 220
  #define Y_BED_SIZE 220
  #define Z_MAX_POS 240
    
  #if ENABLED(ANET_OEM)
    #define X_PROBE_OFFSET_FROM_EXTRUDER -26
    #define Y_PROBE_OFFSET_FROM_EXTRUDER -40
  #endif
   
  #define INVERT_X_DIR false
  #define INVERT_Y_DIR false
  #define INVERT_Z_DIR true
  
  #if ENABLED(TITAN_EXTRUDER)
    #define INVERT_E0_DIR true
  #else
    #define INVERT_E0_DIR false
  #endif
  
#endif

#if ENABLED(ANET_E10)
    #if ENABLED(HOME_ADJUST)
      #define X_MIN_POS X_HOME_LOCATION
      #define Y_MIN_POS Y_HOME_LOCATION
    #else
      #define X_MIN_POS -2
      #define Y_MIN_POS -8
    #endif
    
    #define X_BED_SIZE 220
    #define Y_BED_SIZE 270
    #define Z_MAX_POS 300

    #if ENABLED(ANET_OEM)
      #define X_PROBE_OFFSET_FROM_EXTRUDER -38
      #define Y_PROBE_OFFSET_FROM_EXTRUDER -12
    #endif
	
    #define INVERT_X_DIR false
    #define INVERT_Y_DIR true
    #define INVERT_Z_DIR true
	
    #if ENABLED(TITAN_EXTRUDER)
      #define INVERT_E0_DIR false
	#else
      #define INVERT_E0_DIR true
    #endif
	
#endif

#if ENABLED(ANET_E12)
    #if ENABLED(HOME_ADJUST)
      #define X_MIN_POS X_HOME_LOCATION
      #define Y_MIN_POS Y_HOME_LOCATION
    #else
      #define X_MIN_POS -2
      #define Y_MIN_POS -8
    #endif
    
    #define X_BED_SIZE 300
    #define Y_BED_SIZE 300
    #define Z_MAX_POS 400

    #if ENABLED(ANET_OEM)
     #define X_PROBE_OFFSET_FROM_EXTRUDER -38
     #define Y_PROBE_OFFSET_FROM_EXTRUDER -12
    #endif
    #define INVERT_X_DIR false
    #define INVERT_Y_DIR true
    #define INVERT_Z_DIR true
	
    #if ENABLED(TITAN_EXTRUDER)
      #define INVERT_E0_DIR false
	#else
      #define INVERT_E0_DIR true
    #endif
#endif //End ANET model settings

//Misc Settings
#if defined(USER_PRINTER_NAME)
  #define CUSTOM_MACHINE_NAME USER_PRINTER_NAME
#else
  #if ENABLED(EZABL_ENABLE)
    #define CUSTOM_MACHINE_NAME "TH3D EZABL"
  #elif ENABLED(EZOUT_ENABLE)
    #define CUSTOM_MACHINE_NAME "TH3D EZOut"
  #else
    #define CUSTOM_MACHINE_NAME SHORT_BUILD_VERSION
  #endif
#endif

#if ENABLED(SLIM_1284P)
  #define SLIM_LCD_MENUS
  #define DISABLE_BOOT
#endif

#define STRING_CONFIG_H_AUTHOR "(TH3D)"
#if (ENABLED(EZABL_ENABLE) && ENABLED(SLIM_1284P) && ENABLED(LINEAR_LEVELING)) || (ENABLED(SKEW_CORRECTION) && ENABLED(EZABL_ENABLE) && ENABLED(SLIM_1284P) && ENABLED(LINEAR_LEVELING)) || (ENABLED(MANUAL_MESH_LEVELING) && ENABLED(SLIM_1284P))
  //#define SHOW_BOOTSCREEN
#else
  #if DISABLED(ANET_LCD2004)
    #if DISABLED(DISABLE_BOOT)
      #define SHOW_BOOTSCREEN
    #endif
  #endif
#endif
#define STRING_SPLASH_LINE1 SHORT_BUILD_VERSION
#define STRING_SPLASH_LINE2 WEBSITE_URL

#define SHOW_CUSTOM_BOOTSCREEN

#if ENABLED(ENDER_STATUS) || ENABLED(CR10S_STATUS)
  #define SHOW_CUSTOM_STATUSSCREEN
#endif

#define SERIAL_PORT 0

#if ENABLED(CR10SDUALEBOARD)
  #define EXTRUDERS 2
#else
  #define EXTRUDERS 1
#endif

#define DEFAULT_NOMINAL_FILAMENT_DIA 1.75

#define POWER_SUPPLY 0

#if ENABLED(V6_HOTEND)
  #define TEMP_SENSOR_0 5
#elif ENABLED(TH3D_HOTEND_THERMISTOR)
  #define TEMP_SENSOR_0 1
#elif ENABLED(WANHAO_D6)
  #define TEMP_SENSOR_0 20
#elif ENABLED(WANHAO_10K_THERMISTOR)
  #define TEMP_SENSOR_0 99
#elif ENABLED(WANHAO_I3MINI)
  #define TEMP_SENSOR_0 13
#else
  #define TEMP_SENSOR_0 1
#endif

#if ENABLED(DUAL_HOTEND_DUAL_NOZZLES)
  #if ENABLED(V6_HOTEND)
    #define TEMP_SENSOR_1 5
  #else
    #define TEMP_SENSOR_1 1
  #endif
#else
  #define TEMP_SENSOR_1 0
#endif
#define TEMP_SENSOR_2 0
#define TEMP_SENSOR_3 0
#define TEMP_SENSOR_4 0

#if ENABLED(AC_BED) || ENABLED(WANHAO_I3MINI)
  #define TEMP_SENSOR_BED 0
#elif ENABLED(TH3D_BED_THERMISTOR) || ENABLED(ALFAWISE_U10) || ENABLED(FT5)
  #define TEMP_SENSOR_BED 1
#elif ENABLED(TAZ5)
  #define TEMP_SENSOR_BED 7
#elif ENABLED(WANHAO_D6)
  #define TEMP_SENSOR_BED 1
#elif ENABLED(KEENOVO_TEMPSENSOR)
  #define TEMP_SENSOR_BED 11
#else
 #if ENABLED(WANHAO_I3)
  #if ENABLED(WANHAO_10K_THERMISTOR)
    #define TEMP_SENSOR_BED 99
  #else
    #define TEMP_SENSOR_BED 1
  #endif
 #else
  #define TEMP_SENSOR_BED 5
 #endif
#endif

#define TEMP_RESIDENCY_TIME 10  
#define TEMP_HYSTERESIS 3      
#define TEMP_WINDOW     1      

#define TEMP_BED_RESIDENCY_TIME 10 
#define TEMP_BED_HYSTERESIS 3     
#define TEMP_BED_WINDOW     1     

#define HEATER_0_MINTEMP 5
#define HEATER_1_MINTEMP 5
#define HEATER_2_MINTEMP 5
#define HEATER_3_MINTEMP 5
#define HEATER_4_MINTEMP 5
#define BED_MINTEMP 5

#define HEATER_0_MAXTEMP 300
#define HEATER_1_MAXTEMP 300
#define HEATER_2_MAXTEMP 300
#define HEATER_3_MAXTEMP 300
#define HEATER_4_MAXTEMP 300
#define BED_MAXTEMP 150

#define PIDTEMP
#define BANG_MAX 255
#define PID_MAX BANG_MAX
#define PID_K1 0.95
#if ENABLED(PIDTEMP)
  #define PID_AUTOTUNE_MENU
  #define PID_FUNCTIONAL_RANGE 10
  
#if ENABLED(WANHAO_D6)
  // Duplicator 6
  #define  DEFAULT_Kp 9.12
  #define  DEFAULT_Ki 0.41
  #define  DEFAULT_Kd 50.98
#else  
  // Default Hotend PID
  #define  DEFAULT_Kp 22.2
  #define  DEFAULT_Ki 1.08
  #define  DEFAULT_Kd 114
#endif
  
#endif // PIDTEMP

#if DISABLED(PIDBED_DISABLE)
  #if DISABLED(TORNADO)
	  #if DISABLED(KEENOVO_TEMPSENSOR)
	    #if DISABLED(SLIM_1284P)
	      #define PIDTEMPBED
      #endif
	  #endif
  #endif
#endif

#define MAX_BED_POWER 255

#if ENABLED(PIDTEMPBED)
  #if ENABLED(WANHAO_D6)
    // Duplicator 6
    #define  DEFAULT_bedKp 124.55
    #define  DEFAULT_bedKi 23.46
    #define  DEFAULT_bedKd 165.29
  #else
    //Default Bed PID
    #define  DEFAULT_bedKp 690.34
    #define  DEFAULT_bedKi 111.47
    #define  DEFAULT_bedKd 1068.83
  #endif	
#endif

#define PREVENT_COLD_EXTRUSION
#define EXTRUDE_MINTEMP 120

#define PREVENT_LENGTHY_EXTRUDE
#define EXTRUDE_MAXLENGTH 1000

#define THERMAL_PROTECTION_HOTENDS 
#define THERMAL_PROTECTION_BED     

#if ENABLED(WANHAO_I3MINI)
  #define USE_YMIN_PLUG
  #define USE_ZMIN_PLUG
  #define USE_XMAX_PLUG
#else
  #define USE_XMIN_PLUG
  #define USE_YMIN_PLUG
  #define USE_ZMIN_PLUG
#endif

#define ENDSTOPPULLUPS

#define Z_MIN_PROBE_USES_Z_MIN_ENDSTOP_PIN

#if ENABLED(EZABL_ENABLE)
  #define FIX_MOUNTED_PROBE
  #define Z_PROBE_OFFSET_FROM_EXTRUDER 0
  #define XY_PROBE_SPEED 12000
  #define Z_PROBE_SPEED_FAST HOMING_FEEDRATE_Z
  #define Z_PROBE_SPEED_SLOW (Z_PROBE_SPEED_FAST / 2)
  
  #if ENABLED(FIX_MOUNTED_PROBE) && DISABLED(HEATERS_ON_DURING_PROBING)
    #define PROBING_HEATERS_OFF   
  #endif
  
  #define MULTIPLE_PROBING 2
  #define Z_CLEARANCE_DEPLOY_PROBE   5
  #define Z_CLEARANCE_BETWEEN_PROBES  3 
  #define Z_PROBE_OFFSET_RANGE_MIN -10
  #define Z_PROBE_OFFSET_RANGE_MAX 10
  #define Z_MIN_PROBE_REPEATABILITY_TEST
  #define Z_AFTER_PROBING           5
  #define Z_PROBE_LOW_POINT          -2
#endif  

#if DISABLED(POWER_LOSS_RECOVERY) && ENABLED(SLIM_1284P)
  #if ENABLED(NEW_ACCELERATION_CONTROL)
    #define S_CURVE_ACCELERATION
  #endif
#endif

#define X_ENABLE_ON 0
#define Y_ENABLE_ON 0
#define Z_ENABLE_ON 0
#define E_ENABLE_ON 0 

#define DISABLE_X false
#define DISABLE_Y false
#define DISABLE_Z false

#define DISABLE_E false
#define DISABLE_INACTIVE_EXTRUDER true

#if DISABLED(TITAN_EXTRUDER) && DISABLED(CR10SDUALEBOARD)
  #define INVERT_E1_DIR false
#endif
#define INVERT_E2_DIR false
#define INVERT_E3_DIR false
#define INVERT_E4_DIR false

#if ENABLED(WANHAO_I3MINI)
  #define X_HOME_DIR 1
  #define Y_HOME_DIR -1
  #define Z_HOME_DIR -1
#else
  #define X_HOME_DIR -1
  #define Y_HOME_DIR -1
  #define Z_HOME_DIR -1
#endif
  
#define Z_MIN_POS 0
#define X_MAX_POS X_BED_SIZE
#define Y_MAX_POS Y_BED_SIZE

#define MIN_SOFTWARE_ENDSTOPS
#if ENABLED(MIN_SOFTWARE_ENDSTOPS)
  #define MIN_SOFTWARE_ENDSTOP_X
  #define MIN_SOFTWARE_ENDSTOP_Y
  //#define MIN_SOFTWARE_ENDSTOP_Z
#endif

#define MAX_SOFTWARE_ENDSTOPS
#if ENABLED(MAX_SOFTWARE_ENDSTOPS)
  #define MAX_SOFTWARE_ENDSTOP_X
  #define MAX_SOFTWARE_ENDSTOP_Y
  #define MAX_SOFTWARE_ENDSTOP_Z
#endif

#if ENABLED(EZOUT_ENABLE) || (ENABLED(CR10S) && DISABLED(CR10S_NOFILAMENTSENSOR)) || (ENABLED(CR10S_MINI) && DISABLED(CR10S_NOFILAMENTSENSOR))  || (ENABLED(CR10S_S4) && DISABLED(CR10S_NOFILAMENTSENSOR)) || (ENABLED(CR10S_S5) && DISABLED(CR10S_NOFILAMENTSENSOR)) || ENABLED(ALFAWISE_U10)
  #define FILAMENT_RUNOUT_SENSOR
  #if ENABLED(FILAMENT_RUNOUT_SENSOR)
    #if ENABLED(EZOUT_ENABLE)
      #define FIL_RUNOUT_INVERTING false
    #else
      #define FIL_RUNOUT_INVERTING true
    #endif
    #define NUM_RUNOUT_SENSORS   1
    #define FIL_RUNOUT_PULLUP
    #define FILAMENT_RUNOUT_SCRIPT "M600"
  #endif
#endif

#if ENABLED(MANUAL_MESH_LEVELING) && DISABLED(EZABL_ENABLE)
  #define PROBE_MANUALLY
  #define LCD_BED_LEVELING
  #define MESH_BED_LEVELING

  #define MBL_Z_STEP 0.025    // Step size while manually probing Z axis.
  #define LCD_PROBE_Z_RANGE 4 // Z Range centered on Z_MIN_POS for LCD Z adjustment

  #define MESH_INSET 10          // Mesh inset margin on print area
  #define GRID_MAX_POINTS_X 5    // Don't use more than 7 points per axis, implementation limited.
  #define GRID_MAX_POINTS_Y GRID_MAX_POINTS_X
#endif

#if ENABLED(EZABL_ENABLE)
  #define AUTO_BED_LEVELING_BILINEAR
#endif

#if ENABLED(MESH_BED_LEVELING) || ENABLED(AUTO_BED_LEVELING_BILINEAR) || ENABLED(AUTO_BED_LEVELING_UBL)
  #define ENABLE_LEVELING_FADE_HEIGHT
  #define SEGMENT_LEVELED_MOVES
  #define LEVELED_SEGMENT_LENGTH 5.0
#endif

#if ENABLED(AUTO_BED_LEVELING_LINEAR) || ENABLED(AUTO_BED_LEVELING_BILINEAR)

  #define GRID_MAX_POINTS_X EZABL_POINTS
  #define GRID_MAX_POINTS_Y GRID_MAX_POINTS_X
  
  #define LEFT_PROBE_BED_POSITION (max(EZABL_PROBE_EDGE, X_PROBE_OFFSET_FROM_EXTRUDER))
  #define RIGHT_PROBE_BED_POSITION (min(X_BED_SIZE - EZABL_PROBE_EDGE, X_BED_SIZE + X_PROBE_OFFSET_FROM_EXTRUDER))
  #define FRONT_PROBE_BED_POSITION (max(EZABL_PROBE_EDGE, Y_PROBE_OFFSET_FROM_EXTRUDER))
  #define BACK_PROBE_BED_POSITION (min(Y_BED_SIZE - EZABL_PROBE_EDGE, Y_BED_SIZE + Y_PROBE_OFFSET_FROM_EXTRUDER))
  
  #define MIN_PROBE_EDGE 5

  #if ENABLED(EZABL_OUTSIDE_GRID_COMPENSATION)
    #define EXTRAPOLATE_BEYOND_GRID
  #endif

#endif

#if ENABLED(FIX_MOUNTED_PROBE)
  #define Z_SAFE_HOMING
#endif

#if ENABLED(Z_SAFE_HOMING)
  #define Z_SAFE_HOMING_X_POINT ((X_BED_SIZE) / 2)
  #define Z_SAFE_HOMING_Y_POINT ((Y_BED_SIZE) / 2)
#endif

#define HOMING_FEEDRATE_XY (40*60)

#if ENABLED(EZABL_FASTPROBE)
	#define HOMING_FEEDRATE_Z  (8*60)
#else
	#define HOMING_FEEDRATE_Z  (4*60)
#endif

#define EEPROM_SETTINGS
#define EEPROM_CHITCHAT

#define HOST_KEEPALIVE_FEATURE
#define DEFAULT_KEEPALIVE_INTERVAL 2

#define PREHEAT_1_TEMP_HOTEND 200
#define PREHEAT_1_TEMP_BED     60
#define PREHEAT_1_FAN_SPEED     0 

#define PREHEAT_2_TEMP_HOTEND 240
#define PREHEAT_2_TEMP_BED    100
#define PREHEAT_2_FAN_SPEED     0 

#define NOZZLE_PARK_FEATURE

#if ENABLED(NOZZLE_PARK_FEATURE)
  #define NOZZLE_PARK_POINT { 10, 10, 10 }
  #define NOZZLE_PARK_XY_FEEDRATE 100  
  #define NOZZLE_PARK_Z_FEEDRATE 5  
#endif

#define PRINTJOB_TIMER_AUTOSTART

#define DISPLAY_CHARSET_HD44780 JAPANESE

#define SDSUPPORT

#define INDIVIDUAL_AXIS_HOMING_MENU

#if DISABLED(EZABL_ENABLE)
  #define LEVEL_BED_CORNERS
  #define LEVEL_CORNERS_INSET 30
  #define LEVEL_CENTER_TOO
#endif

#if DISABLED(ENDER2) || DISABLED(EZOUT_ENABLE) || DISABLED(WANHAO_I3) || DISABLED(SLIM_1284P)
  #define SPEAKER
#endif

#if ENABLED(CR10) || ENABLED(CR10_MINI) || ENABLED(CR10_S4) || ENABLED(CR10_S5) || ENABLED(CR10S) || ENABLED(CR10S_MINI) || ENABLED(CR10S_S4) || ENABLED(CR10S_S5) || ENABLED(TORNADO) || ENABLED(TAZ5) || ENABLED(ENDER3) || ENABLED(ALFAWISE_U10) || ENABLED(ENDER3_DUALBOARD)
  #if ENABLED(CR10LCD_CR10S)
    #define CR10_STOCKDISPLAY
  #else
    #define REPRAP_DISCOUNT_FULL_GRAPHIC_SMART_CONTROLLER
  #endif
#endif

#if ENABLED(FT5)
  #define REPRAP_DISCOUNT_SMART_CONTROLLER
  #define LCD2004
#endif

#if ENABLED(ENDER2) || ENABLED(WANHAO_I3MINI)
  #define MINIPANEL
#endif

#if ENABLED(WANHAO_D6)
  #define ULTIPANEL
  #define U8GLIB_SSD1306
  #define LCD_WIDTH 22
  #define LCD_HEIGHT 5
  #define LCD_RESET_PIN 5
  #define PCA9632
#endif

#if ENABLED(FAN_KICKSTART)
  #define FAN_SOFT_PWM
  #define SOFT_PWM_SCALE 1
#else
  #define SOFT_PWM_SCALE 0
#endif

#endif // CONFIGURATION_BACKEND_H
