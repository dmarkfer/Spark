/*********************************************************************************
**********************************************************************************
***
*** MTV3D - Mesh Tally Visualization in 3D
*** Copyright (C) 2019  Domagoj Markota <domagoj.markota@gmail.com>
***
*** This program is free software: you can redistribute it and/or modify
*** it under the terms of the GNU Affero General Public License as published
*** by the Free Software Foundation, either version 3 of the License, or
*** (at your option) any later version.
***
*** This program is distributed in the hope that it will be useful,
*** but WITHOUT ANY WARRANTY; without even the implied warranty of
*** MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
*** GNU Affero General Public License for more details.
***
*** You should have received a copy of the GNU Affero General Public License
*** along with this program.  If not, see <https://www.gnu.org/licenses/>.
***
**********************************************************************************
**********************************************************************************/
#include "stdafx.h"
#include "PlaneMergedWnd.h"


PlaneMergedWnd::PlaneMergedWnd(HINSTANCE hInst, LPWSTR windowTitle): VisMergedWndBase(hInst, windowTitle, 'L') {
	this->hBtnCreateLine = CreateWindow(L"BUTTON", L"Create line preview",
		WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_DEFPUSHBUTTON,
		wndRect.right / 4 + dialogWidth * 2 / 3, this->displayDim + dialogHeight * 2 / 3, 180, 30,
		this->hWnd, (HMENU)BUTTON_CREATE_LINE, hInst, nullptr);
}


HWND PlaneMergedWnd::getBtnCreateLine() {
	return this->hBtnCreateLine;
}
