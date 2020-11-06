#pragma once

#include "Atlas/Input.h"

namespace Atlas
{
	class MSInput : public Input
	{
	protected:
		virtual bool IsKeyPressedImpl(int keycode) override;	
		
		virtual bool IsMouseButtonPressedImpl(int keycode) override;
		virtual std::pair<float, float> GetMousePositionImpl() override;
		virtual float GetMouseXImpl() override;
		virtual float GetMouseYImpl() override;

	};
}