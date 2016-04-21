#ifndef IntakePort_H
#define IntakePort_H

#include "Commands/Subsystem.h"
#include "../Robot.h"

class IntakePort: public Command
{
public:
	IntakePort(double pos);
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
private:
	double m_pos;
};

#endif
