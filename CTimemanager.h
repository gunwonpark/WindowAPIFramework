#pragma once
class CTimemanager
{
	SINGLETON(CTimemanager);
private:
	float m_deltaTime = 0;


public:
	float GetDeltaTime() const { return m_deltaTime; }
	void SetDeltaTime(float _deltaTime) { m_deltaTime = _deltaTime; }

};

