#include "pch.h"
#include "MainWindow.xaml.h"
#if __has_include("MainWindow.g.cpp")
#include "MainWindow.g.cpp"
#endif

using namespace winrt;
using namespace Microsoft::UI::Xaml;

// To learn more about WinUI, the WinUI project structure,
// and more about our project templates, see: http://aka.ms/winui-project-info.

namespace winrt::StudentGradesTable::implementation
{

    MainWindow::MainWindow()
    {
        InitializeComponent();

        Student1().Text(L"Иванов И.");
        Student2().Text(L"Петров П.");
        Student3().Text(L"Сидоров С.");
        Student4().Text(L"Козлов К.");

        Math1().Text(to_hstring(mathGrades[0]));
        Math2().Text(to_hstring(mathGrades[1]));
        Math3().Text(to_hstring(mathGrades[2]));
        Math4().Text(to_hstring(mathGrades[3]));

        Physics1().Text(to_hstring(physicsGrades[0]));
        Physics2().Text(to_hstring(physicsGrades[1]));
        Physics3().Text(to_hstring(physicsGrades[2]));
        Physics4().Text(to_hstring(physicsGrades[3]));
    }

    void MainWindow::CalculateAverages(winrt::Windows::Foundation::IInspectable const& sender,
        winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
    {
        int mathSum = 0;
        for (int i = 0; i < 4; i++)
        {
            mathSum += mathGrades[i];
        }
        double mathAvg = mathSum / 4.0;

        int physicsSum = 0;
        for (int i = 0; i < 4; i++)
        {
            physicsSum += physicsGrades[i];
        }
        double physicsAvg = physicsSum / 4.0;

        int chemistrySum = 0;
        for (int i = 0; i < 4; i++)
        {
            chemistrySum += chemistryGrades[i];
        }
        double chemistryAvg = chemistrySum / 4.0;

        AvgMath().Text(L"Математика: " + to_hstring(mathAvg));
        AvgPhysics().Text(L"Физика: " + to_hstring(physicsAvg));
        AvgChemistry().Text(L"Химия: " + to_hstring(chemistryAvg));
    }

}
