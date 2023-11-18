#include "Loading.h"
#include "MyForm3.h"
#include <ctime>
#include <cstdlib>

using namespace System;
using namespace System::Windows::Forms;
using namespace TicTacToeFirstAttempt;

[STAThreadAttribute]

int main()
{
    srand(time(0));

    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    Loading loading;
    MyForm3 form3;

    loading.ShowDialog();
    form3.ShowDialog();

    return 0;
}
