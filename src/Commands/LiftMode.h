#ifndef LiftMode_H
#define LiftMode_H

#include "Commands/Subsystem.h"
#include "../Robot.h"
#include "WPILib.h"

class LiftMode:  public Command {
public:
	LiftMode(bool mode);
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
private:
	bool m_mode;
};

#endif
