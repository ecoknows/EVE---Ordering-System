#include "SplashScreen.h"
#include "MainInterface.h"


using namespace System::Windows::Forms;
using namespace ProjectEve;

[STAThreadAttribute]

void ExitWhen(Object^ sender, FormClosedEventArgs^ e) {
	if (Application::OpenForms->Count == 0)
		Application::Exit();
	else
		Application::OpenForms[0]->FormClosed += gcnew FormClosedEventHandler(ExitWhen);
}

int main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	/*MainInterface^ mainInterface = gcnew MainInterface();
	mainInterface->FormClosed += gcnew FormClosedEventHandler(ExitWhen);
	mainInterface->Show();
	*/
	SplashScreen^ splashScreen = gcnew SplashScreen();
	splashScreen->FormClosed += gcnew FormClosedEventHandler(ExitWhen);
	splashScreen->Show();
	Application::Run();

	return 0;
}