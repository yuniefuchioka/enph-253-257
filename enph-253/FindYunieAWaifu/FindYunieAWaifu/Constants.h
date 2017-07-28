#ifndef CONSTANTS_H
#define CONSTANTS_H

//PINS
#define QRD_TAPE_RIGHT 0
#define QRD_TAPE_LEFT 1
#define QRD_AGENT_TAPE_LEFT 2
#define QRD_AGENT_TAPE_RIGHT 3
#define TEN_KHZ_IR_PIN_R 4
#define ONE_KHZ_IR_PIN_R 5
#define TEN_KHZ_IR_PIN_L 6
#define ONE_KHZ_IR_PIN_L 7

#define MOTOR_LEFT 0
#define MOTOR_RIGHT 1
#define MOTOR_COLLECTION_BOX 2

#define NUM_VARIABLES 6
#define MENU_BLINK_TIME 500
#define MENU_MAX_K 100

#define GAIN_KP 50
#define GAIN_KD 4
#define GAIN_KI 0
#define GAIN_K 1
#define MAX_VOLTAGE 1023.0

#define QRD_THRESHOLD 100

#define REGULAR_SPEED 80
#define HILL_SPEED 100
#define FREE_FOLLOW_SPEED 40
#define MAX_SPEED 255
#define MIN_SPEED -255
#define COLLECTION_BOX_MOTOR_SPEED 100

#define STARTING_BASE_ANGLE 90
#define STARTING_ARM_ANGLE 100
#define OPEN_HAND_ANGLE 100
#define CLOSE_HAND_ANGLE 10

#define ERROR_RIGHT_HALF 1
#define ERROR_RIGHT_FULL 3
#define ERROR_LEFT_HALF -1
#define ERROR_LEFT_FULL -3

#define NUM_AGENTS 6

#define MIN_BASE_DELAY 10
#define CLAW_DELAY 250

#define HIGH_LIMIT 5
#define LOW_LIMIT -5

#define ARM_DELAY 0.2
#define BASE_DELAY 0.7
#define MIN_ARM_DELAY 3
#define LOW_LIMIT -5

#define ARM_MAX 130
#define ARM_GRAB_TUNING 20
#define ARM_BOX 20

#define ARM_GRAB_HIGH 30
#define ARM_GRAB_MIDDLE 25
#define ARM_GRAB_LOW 20

#define BASE_REST 90
#define BASE_GRAB 150

#define TAPE_FOLLOW_TIME 4000
#define HILL_FOLLOW_TIME 2000

#define TIME_TO_GATE 5000
#define ZIPLINE_DRIVE_TIME 2000

#define COLLECTION_BOX_MOTOR_TIME 3000

#endif
