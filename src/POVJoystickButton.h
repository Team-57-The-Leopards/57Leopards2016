#ifndef _POV_JOYSTICK_BUTTON_H__
#define _POV_JOYSTICK_BUTTON_H__

#include "WPILib.h"

class POVJoystickButton : public Button
{
public:
	POVJoystickButton(GenericHID *joystick, int povNumber, double povTarget, double window);
	virtual ~POVJoystickButton() {}

	virtual bool Get();
	
private:
	GenericHID *m_joystick;
	int m_povNumber;
	double m_povTarget;
	double m_window;
};

#endif