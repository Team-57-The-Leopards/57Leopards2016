#ifndef _LIFT_JOYSTICK_BUTTON_H__
#define _LIFT_JOYSTICK_BUTTON_H__

#include "WPILib.h"

class LiftJoystickButton : public Button
{
public:
	LiftJoystickButton(GenericHID *joystick, int buttonNumber, bool liftMode);
	virtual ~LiftJoystickButton() {}

	virtual bool Get();
	
private:
	GenericHID *m_joystick;
	bool m_liftMode;
	int m_buttonNumber;
};

#endif
