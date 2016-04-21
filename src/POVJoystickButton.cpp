#include "POVJoystickButton.h"

POVJoystickButton::POVJoystickButton(GenericHID *joystick, int povNumber, double povTarget, double window ) {
	m_povNumber = povNumber;
	m_joystick = joystick;
	m_povTarget = povTarget;
	m_window = window;
}

bool POVJoystickButton::Get()
{
	double d = m_joystick->GetPOV(m_povNumber);
	if (d < 0)
		return false;
	d -= m_povTarget;
	d = (d > 180.0) ? d - 360 : d;
	d = (d < -180.0) ? d + 360 : d;
    return fabs(d) < m_window;
}
