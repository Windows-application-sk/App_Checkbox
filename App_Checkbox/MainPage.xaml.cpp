//
// MainPage.xaml.cpp
// MainPage クラスの実装。
//

#include "pch.h"
#include "MainPage.xaml.h"

using namespace App_Checkbox;

using namespace Platform;
using namespace Windows::Foundation;
using namespace Windows::Foundation::Collections;
using namespace Windows::UI::Xaml;
using namespace Windows::UI::Xaml::Controls;
using namespace Windows::UI::Xaml::Controls::Primitives;
using namespace Windows::UI::Xaml::Data;
using namespace Windows::UI::Xaml::Input;
using namespace Windows::UI::Xaml::Media;
using namespace Windows::UI::Xaml::Navigation;

// 空白ページの項目テンプレートについては、https://go.microsoft.com/fwlink/?LinkId=402352&clcid=0x411 を参照してください

MainPage::MainPage()
{
	InitializeComponent();
}

void MainPage::CheckBox_StateChanged(Object^ sender, RoutedEventArgs^ e)
{
    CheckBox^ checkBox = dynamic_cast<CheckBox^>(sender);
    if (checkBox != nullptr)
    {
        String^ name = checkBox->Name;

        if (name == "checkBox1")
        {
            if (checkBox->IsChecked->Value)
                OutputDebugString(L"チェックボックス1がONされました。\n");
            else
                OutputDebugString(L"チェックボックス1がOFFされました。\n");
        }
        else if (name == "checkBox2")
        {
            if (checkBox->IsChecked->Value)
                OutputDebugString(L"チェックボックス2がONされました。\n");
            else
                OutputDebugString(L"チェックボックス2がOFFされました。\n");
        }
    }
}
