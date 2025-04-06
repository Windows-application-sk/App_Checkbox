//
// MainPage.xaml.h
// MainPage クラスの宣言。
//

#pragma once

#include "MainPage.g.h"

namespace App_Checkbox
{
	/// <summary>
	/// それ自体で使用できる空白ページまたはフレーム内に移動できる空白ページ。
	/// </summary>
	public ref class MainPage sealed
	{
	public:
		MainPage();
	private:
		void CheckBox_StateChanged(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
	};
}
