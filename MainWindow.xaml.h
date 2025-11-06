#pragma once

#include "MainWindow.g.h"
#include <iomanip>
#include <sstream>
using namespace winrt;
using namespace Microsoft::UI::Xaml;
using namespace Microsoft::UI::Xaml::Controls;



namespace winrt::StudentGradesTable::implementation
{
    struct MainWindow : MainWindowT<MainWindow>
    {
        MainWindow();
        void CalculateAverages(winrt::Windows::Foundation::IInspectable const& sender,
            winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e);

    private:
        int mathGrades[4] = { 85, 92, 78, 88 };
        int physicsGrades[4] = { 90, 88, 95, 82 };
    };

}

namespace winrt::StudentGradesTable::factory_implementation
{
    struct MainWindow : MainWindowT<MainWindow, implementation::MainWindow>
    {
    };
}
