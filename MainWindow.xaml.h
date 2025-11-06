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
        int mathGrades[5] = { 85, 92, 78, 88, 94 };        // ← изменили [4] на [5], добавили 94
        int physicsGrades[5] = { 90, 88, 95, 82, 87 };     // ← изменили [4] на [5], добавили 87
        int chemistryGrades[5] = { 87, 91, 89, 85, 92 };   // ← изменили [4] на [5], добавили 92

    };

}

namespace winrt::StudentGradesTable::factory_implementation
{
    struct MainWindow : MainWindowT<MainWindow, implementation::MainWindow>
    {
    };
}
