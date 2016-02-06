#ifndef OI_H
#define OI_H

#include "WPILib.h"

class OI
{
private:

public:
	OI();
	Joystick *driveStick;
	Joystick *GetDriveJoystick();
	JoystickButton *intakeRollInButton;
	JoystickButton *intakeRollOutButton;
	JoystickButton *intakeRotateUpButton;
	JoystickButton *intakeRotateDownButton;

};

#endif
