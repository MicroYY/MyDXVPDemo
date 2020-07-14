#pragma once


class DXVPApp
{
protected:
	DXVPApp(HINSTANCE hInstance);
	DXVPApp(const DXVPApp& rhs) = delete;
	DXVPApp& operator=(const DXVPApp& rhs) = delete;
	virtual ~DXVPApp();

public:

	static DXVPApp* GetApp();

	HINSTANCE AppInst() const;

};