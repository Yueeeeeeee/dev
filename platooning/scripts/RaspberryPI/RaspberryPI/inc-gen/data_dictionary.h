/* generated by AutoFOCUS 3 (2.14.0) on Fri May 03 16:10:07 CEST 2019 */
#ifndef __HEADER_data_dictionary_h
#define __HEADER_data_dictionary_h
#if defined(__cplusplus)
typedef bool GEN_TYPE_boolean;
#else
typedef enum Enum_TYPE_boolean {
	false = 0, true = 1
} GEN_TYPE_boolean;
#endif

typedef int GEN_TYPE_int;

typedef double GEN_TYPE_double;

typedef enum Enum_EngineMode{
	NoOp_ID_9641 = 0,
	Switch_ID_9642 = 1
	#ifdef USE_GCC
} __attribute__ ((packed)) GEN_TYPE_EngineMode;
#else
} GEN_TYPE_EngineMode;
#endif


extern GEN_TYPE_EngineMode NoOp();

extern GEN_TYPE_EngineMode Switch();

extern char* EngineModeToString(GEN_TYPE_EngineMode value);

typedef enum Enum_On_Off_States{
	Off_ID_7966 = 0,
	On_ID_7967 = 1
	#ifdef USE_GCC
} __attribute__ ((packed)) GEN_TYPE_On_Off_States;
#else
} GEN_TYPE_On_Off_States;
#endif


extern GEN_TYPE_On_Off_States Off();

extern GEN_TYPE_On_Off_States On();

extern char* On_Off_StatesToString(GEN_TYPE_On_Off_States value);

typedef enum Enum_DriveMode{
	Parking_ID_9643 = 0,
	Forward_ID_6274 = 1,
	Backward_ID_6278 = 2,
	Change_ID_6614 = 3
	#ifdef USE_GCC
} __attribute__ ((packed)) GEN_TYPE_DriveMode;
#else
} GEN_TYPE_DriveMode;
#endif


extern GEN_TYPE_DriveMode Parking();

extern GEN_TYPE_DriveMode Forward();

extern GEN_TYPE_DriveMode Backward();

extern GEN_TYPE_DriveMode Change();

extern char* DriveModeToString(GEN_TYPE_DriveMode value);

typedef enum Enum_KeyEvent{
	pressed_ID_98 = 0,
	notPressed_ID_100 = 1
	#ifdef USE_GCC
} __attribute__ ((packed)) GEN_TYPE_KeyEvent;
#else
} GEN_TYPE_KeyEvent;
#endif


extern GEN_TYPE_KeyEvent pressed();

extern GEN_TYPE_KeyEvent notPressed();

extern char* KeyEventToString(GEN_TYPE_KeyEvent value);

typedef enum Enum_AD_Commands{
	KeepCurrentStateAD_ID_24110 = 0,
	OffAD_ID_24111 = 1,
	OnAD_ID_24112 = 2
	#ifdef USE_GCC
} __attribute__ ((packed)) GEN_TYPE_AD_Commands;
#else
} GEN_TYPE_AD_Commands;
#endif


extern GEN_TYPE_AD_Commands KeepCurrentStateAD();

extern GEN_TYPE_AD_Commands OffAD();

extern GEN_TYPE_AD_Commands OnAD();

extern char* AD_CommandsToString(GEN_TYPE_AD_Commands value);

typedef struct Struct_MessageFollower {
	GEN_TYPE_int  id;
	GEN_TYPE_int  vehicleID;
	GEN_TYPE_double  headingAngle;
	GEN_TYPE_double  steeringAngle;
	GEN_TYPE_double  velocity;
	GEN_TYPE_double  maxAcceleration;
	GEN_TYPE_double  yawRate;
	GEN_TYPE_boolean  EB;
	GEN_TYPE_double  accPedalPosition;
} GEN_TYPE_MessageFollower;

typedef struct Struct_DriveModeCommands {
	GEN_TYPE_KeyEvent  Button3;
	GEN_TYPE_KeyEvent  Button4;
	GEN_TYPE_KeyEvent  Button1;
	GEN_TYPE_KeyEvent  Button2;
} GEN_TYPE_DriveModeCommands;

typedef struct Struct_MessageNewLeader {
	GEN_TYPE_int  id;
	GEN_TYPE_int  newLeaderID;
	GEN_TYPE_int  senderID;
	GEN_TYPE_int  oldLeaderID;
} GEN_TYPE_MessageNewLeader;

typedef struct Array_listSenderPlatoonMembers {GEN_TYPE_int  content[5];} GEN_TYPE_listSenderPlatoonMembers;

typedef struct Struct_AutonomousDrivingEvents {
	GEN_TYPE_KeyEvent  platooning;
	GEN_TYPE_KeyEvent  splitPlatoon;
	GEN_TYPE_KeyEvent  fusePlatoon;
} GEN_TYPE_AutonomousDrivingEvents;

typedef struct Struct_MessageHandshake {
	GEN_TYPE_int  id;
	GEN_TYPE_int  senderID;
	GEN_TYPE_int  action;
} GEN_TYPE_MessageHandshake;

typedef struct Struct_ADOnOffCommands {
	GEN_TYPE_AD_Commands  platooning;
	GEN_TYPE_boolean  fuse;
	GEN_TYPE_boolean  split;
} GEN_TYPE_ADOnOffCommands;

typedef struct Struct_DriverAssistanceEvents {
	GEN_TYPE_KeyEvent  acc;
	GEN_TYPE_KeyEvent  laneKeep;
	GEN_TYPE_KeyEvent  speedPlus;
	GEN_TYPE_KeyEvent  speedMinus;
	GEN_TYPE_KeyEvent  timeMinus;
	GEN_TYPE_KeyEvent  timePlus;
} GEN_TYPE_DriverAssistanceEvents;

typedef struct Struct_DA_TurnOff_Commands {
	GEN_TYPE_boolean  acc;
	GEN_TYPE_boolean  laneKeep;
} GEN_TYPE_DA_TurnOff_Commands;

typedef struct Struct_RGBColor {
	GEN_TYPE_int  R;
	GEN_TYPE_int  G;
	GEN_TYPE_int  B;
} GEN_TYPE_RGBColor;

typedef struct Struct_PlatoonManagementStates {
	GEN_TYPE_boolean  isLeader;
	GEN_TYPE_boolean  FuseMasterOn;
	GEN_TYPE_boolean  SplitOn;
	GEN_TYPE_boolean  LeaveOn;
	GEN_TYPE_boolean  FuseSlaveOn;
	GEN_TYPE_boolean  LeaveOnSplitOn;
} GEN_TYPE_PlatoonManagementStates;

typedef struct Struct_DriveModeSettings {
	GEN_TYPE_DriveMode  DriveMode;
	GEN_TYPE_EngineMode  EngineMode;
} GEN_TYPE_DriveModeSettings;

typedef struct Struct_LDCameraData {
	GEN_TYPE_double  orientation;
	GEN_TYPE_double  movement;
	GEN_TYPE_double  distance_left;
	GEN_TYPE_double  distance_right;
	GEN_TYPE_boolean  present_left;
	GEN_TYPE_boolean  present_right;
	GEN_TYPE_int  rover_distance;
	GEN_TYPE_boolean  rover_detected;
	GEN_TYPE_int  rover_id;
	GEN_TYPE_boolean  server_ok;
	GEN_TYPE_boolean  curve_detected;
	GEN_TYPE_double  curve_radius;
} GEN_TYPE_LDCameraData;

typedef struct Struct_ControlPlatooning {
	GEN_TYPE_boolean  platooningOn;
	GEN_TYPE_boolean  split;
	GEN_TYPE_boolean  emergencyBreakOn;
} GEN_TYPE_ControlPlatooning;

typedef struct Struct_PlatoonFuseState {
	GEN_TYPE_int  fuseLeaderID;
	GEN_TYPE_int  waitCycles;
} GEN_TYPE_PlatoonFuseState;

typedef struct Struct_ControlCommand {
	GEN_TYPE_boolean  LeaderShallFuse;
	GEN_TYPE_boolean  LeaderShallLeave;
	GEN_TYPE_boolean  FollowerShallLeave;
	GEN_TYPE_boolean  FollowerBecomeNewLeader;
} GEN_TYPE_ControlCommand;

typedef struct Struct_AD_TurnOffCommands {
	GEN_TYPE_boolean  Platooning;
} GEN_TYPE_AD_TurnOffCommands;

typedef struct Struct_DriverAssistanceCommands {
	GEN_TYPE_On_Off_States  acc;
	GEN_TYPE_On_Off_States  laneKeep;
	GEN_TYPE_KeyEvent  speedMinus;
	GEN_TYPE_KeyEvent  speedPlus;
	GEN_TYPE_KeyEvent  timeMinus;
	GEN_TYPE_KeyEvent  timePlus;
} GEN_TYPE_DriverAssistanceCommands;

typedef struct Array_listParticipants {GEN_TYPE_int  content[5];} GEN_TYPE_listParticipants;

typedef struct Struct_MessageLeave {
	GEN_TYPE_int  vehicleID;
	GEN_TYPE_int  id;
} GEN_TYPE_MessageLeave;

typedef struct Struct_MessagePlatoon {
	GEN_TYPE_int  id;
	GEN_TYPE_int  platoonID;
	GEN_TYPE_int  leaderID;
	GEN_TYPE_int  tailID;
} GEN_TYPE_MessagePlatoon;

typedef struct Struct_MessageSplit {
	GEN_TYPE_int  id;
	GEN_TYPE_int  newLeaderID;
} GEN_TYPE_MessageSplit;

typedef struct Struct_MessageFuse {
	GEN_TYPE_int  id;
	GEN_TYPE_int  senderLeaderID;
	GEN_TYPE_int  targetLeaderID;
	GEN_TYPE_listSenderPlatoonMembers  listSenderPlatoonMembers;
} GEN_TYPE_MessageFuse;

typedef struct Struct_PlatoonInformation {
	GEN_TYPE_listParticipants  participants;
	GEN_TYPE_int  leaderID;
	GEN_TYPE_int  oldLeaderID;
	GEN_TYPE_int  tailID;
	GEN_TYPE_int  myPosition;
	GEN_TYPE_int  amount;
} GEN_TYPE_PlatoonInformation;

typedef struct Struct_MessageLeaderHB {
	GEN_TYPE_int  id;
	GEN_TYPE_boolean  isLeader;
	GEN_TYPE_int  vehicleID;
	GEN_TYPE_listParticipants  listParticipants;
	GEN_TYPE_boolean  EB;
} GEN_TYPE_MessageLeaderHB;

extern GEN_TYPE_double myabs(GEN_TYPE_double _V);

extern GEN_TYPE_double arctan(GEN_TYPE_double _V);

extern GEN_TYPE_double e();

extern GEN_TYPE_double exp(GEN_TYPE_double _V);

extern GEN_TYPE_double ln(GEN_TYPE_double _V);

extern GEN_TYPE_double pi();

extern GEN_TYPE_double sgn(GEN_TYPE_double _V);

extern GEN_TYPE_double sqrt(GEN_TYPE_double _V);

extern GEN_TYPE_double _sqrt(GEN_TYPE_double _X,GEN_TYPE_double _V);

extern GEN_TYPE_double pow(GEN_TYPE_double _V,GEN_TYPE_double _N);

extern GEN_TYPE_double min(GEN_TYPE_double _a,GEN_TYPE_double _b);

extern GEN_TYPE_double max(GEN_TYPE_double _a,GEN_TYPE_double _b);

extern GEN_TYPE_double rad2deg(GEN_TYPE_double _A);

extern GEN_TYPE_double deg2rad(GEN_TYPE_double _A);

extern GEN_TYPE_double MAX_BRAKE_VALUE();

extern GEN_TYPE_int EMERGENCY_TIME();

extern GEN_TYPE_double linConvert(GEN_TYPE_double input,GEN_TYPE_double inputMax,GEN_TYPE_double inputMin,GEN_TYPE_double outputMax,GEN_TYPE_double outputMin);

extern GEN_TYPE_double STEERING_ANGLE_STRAIGHT_MIN();

extern GEN_TYPE_double STEERING_VALUE_LEFT_MIN();

extern GEN_TYPE_double STEERING_VALUE_STRAIGHT_MAX();

extern GEN_TYPE_double STEERING_VALUE_LEFT_MAX();

extern GEN_TYPE_double STEERING_VALUE_RIGHT_MAX();

extern GEN_TYPE_double STEERING_VALUE_RIGHT_MIN();

extern GEN_TYPE_double STEERING_ANGLE_LEFT_MAX();

extern GEN_TYPE_double STEERING_ANGLE_LEFT_MIN();

extern GEN_TYPE_double STEERING_ANGLE_RIGHT_MAX();

extern GEN_TYPE_double STEERING_ANGLE_RIGHT_MIN();

extern GEN_TYPE_double STEERING_ANGLE_STRAIGHT_MAX();

extern GEN_TYPE_double STEERING_VALUE_STRAIGHT_MIN();

extern GEN_TYPE_double STEERING_ANGLE_MIN();

extern GEN_TYPE_double STEERING_ANGLE_MAX();

extern GEN_TYPE_double COEFFICIENT_CONTROLLER_I();

extern GEN_TYPE_double COEFFICIENT_CONTROLLER_P();

extern GEN_TYPE_double COEFFICIENT_CONTROLLER_D();

extern GEN_TYPE_double COEFFICIENT_CONTROLLER_MAX_ERROR_SUM();

extern GEN_TYPE_double SAMPLING_TIME_DISTANCE();

extern GEN_TYPE_double TICK_TIME();

extern GEN_TYPE_double SAMPLING_TIME_VELOCITY();

extern GEN_TYPE_double ERRORSUM_ADAPTATION();

extern GEN_TYPE_double NATURAL_ACCELERATION();

extern GEN_TYPE_double COEFFICIENT_CONTROLLER_F();

extern GEN_TYPE_double MAX_EXPECTED_BRAKE_VALUE();

extern GEN_TYPE_double EB_BUFFER_FACTOR();

extern GEN_TYPE_double BRAKE_DEADZONE();

extern GEN_TYPE_double gear1(GEN_TYPE_double _X);

extern GEN_TYPE_double gear2(GEN_TYPE_double _X);

extern GEN_TYPE_double gear3(GEN_TYPE_double _X);

extern GEN_TYPE_double gear4(GEN_TYPE_double _X);

extern GEN_TYPE_double gear5(GEN_TYPE_double _X);

extern GEN_TYPE_double gear6(GEN_TYPE_double _X);

extern GEN_TYPE_double MAX_SPEED();

extern GEN_TYPE_double VELOCITY_DEADZONE();

extern GEN_TYPE_double EB_VELOCITY();

extern GEN_TYPE_double PRE_BOUNDARIES_FACTOR();

extern GEN_TYPE_double MOTOR_VALUE_MIN();

extern GEN_TYPE_double MOTOR_VALUE_STILL_MIN();

extern GEN_TYPE_double MOTOR_VALUE_BACKWARD_MAX();

extern GEN_TYPE_double MOTOR_VALUE_MAX();

extern GEN_TYPE_double MOTOR_VALUE_FORWARD_MAX();

extern GEN_TYPE_double MOTOR_VALUE_OUT_STILL_MIN();

extern GEN_TYPE_double MOTOR_VALUE_FORWARD_MIN();

extern GEN_TYPE_double MOTOR_VALUE_BACKWARD_MIN();

extern GEN_TYPE_double MOTOR_VALUE_STILL_MAX();

extern GEN_TYPE_double MOTOR_VALUE_OUT_STILL_MAX();

extern GEN_TYPE_double MOTOR_VALUE_OUT_BACKWARD_MAX();

extern GEN_TYPE_double MOTOR_VALUE_OUT_FORWARD_MIN();

extern GEN_TYPE_double MOTOR_VALUE_OUT_FORWARD_MAX();

extern GEN_TYPE_double MOTOR_VALUE_OUT_BACKWARD_MIN();

extern GEN_TYPE_double STICK_INPUT_SCALING();

extern GEN_TYPE_double scaleSteering(GEN_TYPE_double _V);

extern GEN_TYPE_double INACCURACY();

extern GEN_TYPE_double STICK_THRESHOLD();

extern GEN_TYPE_double ROVER_WIDTH();

extern GEN_TYPE_double STEERING_DEADZONE();

extern GEN_TYPE_double COEFFICIENT_LK_CONTROLLER_P();

extern GEN_TYPE_double COEFFICIENT_LK_CONTROLLER_D();

extern GEN_TYPE_double COEFFICIENT_LK_CONTROLLER_I();

extern GEN_TYPE_double LD_DISTANCE_ERROR_DEADZONE();

extern GEN_TYPE_double ACC_CONTROLLER_P();

extern GEN_TYPE_double ACC_BUFFER_FACTOR();

extern GEN_TYPE_double Z_INPUT_SCALING();

extern GEN_TYPE_int RUMBLE_MAX();

extern GEN_TYPE_double ACC_MIN_DISTANCE();

extern GEN_TYPE_double platooning_clearance(GEN_TYPE_double _V);

extern GEN_TYPE_double PLATOONING_MINOFFSET();

extern GEN_TYPE_double PLATOONING_TIMEGAP();

extern GEN_TYPE_double COEFFICIENT_PLATOONING_PCONTROLLER();

extern GEN_TYPE_double LASER_CORRECTION();

extern GEN_TYPE_double US_CORRECTION();

extern GEN_TYPE_int CounterFollowerMessage(GEN_TYPE_boolean _V);

extern GEN_TYPE_int roverID();

extern GEN_TYPE_double platooning_relative_distance_error(GEN_TYPE_double _a,GEN_TYPE_double _b);

extern GEN_TYPE_double PLATOONING_DISTANCE_TOLERANCE();

extern GEN_TYPE_double acc_targetdistance(GEN_TYPE_double _VelocityFrontObstacle,GEN_TYPE_double _Velocity,GEN_TYPE_double _Buffer);

extern GEN_TYPE_double LK_Activation_Threshold();

extern GEN_TYPE_double LW_Distance_Min();

extern GEN_TYPE_double ASSUMED_STREET_WIDTH();

extern GEN_TYPE_double COEFFICIENT_LK_FEED_FORWARD();

extern GEN_TYPE_double TIMEOUT_TIME();

extern GEN_TYPE_double TEN_HZ_CYCLES();

extern GEN_TYPE_double ONE_HZ_CYCLES();

extern GEN_TYPE_double EB_BUFFER_FACTOR_FOLLOW();

extern GEN_TYPE_double LASER_MAX_INVALID();

extern GEN_TYPE_double LASER_ZERO_MIN_VALUE();

extern GEN_TYPE_double LASER_MIN();

extern GEN_TYPE_double LASER_MAX();

extern GEN_TYPE_boolean NO_WRONG_WAY_DRIVER();

extern GEN_TYPE_double US_MAX();

extern GEN_TYPE_double US_MIN();

extern GEN_TYPE_double EB_BUFFER_POW();

extern GEN_TYPE_double ACC_DEFAULT_VELOCITY();

extern GEN_TYPE_double MAX_END_SPEED();

extern GEN_TYPE_double ACC_MAX_ACCELERATION();

extern GEN_TYPE_double ACC_MAX_DECELERATION();

extern GEN_TYPE_double LK_FILTER_WEIGHT();

#endif // __HEADER_data_dictionary_h